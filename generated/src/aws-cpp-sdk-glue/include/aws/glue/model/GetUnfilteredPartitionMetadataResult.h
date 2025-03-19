/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Partition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class GetUnfilteredPartitionMetadataResult
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult() = default;
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline const Partition& GetPartition() const { return m_partition; }
    template<typename PartitionT = Partition>
    void SetPartition(PartitionT&& value) { m_partitionHasBeenSet = true; m_partition = std::forward<PartitionT>(value); }
    template<typename PartitionT = Partition>
    GetUnfilteredPartitionMetadataResult& WithPartition(PartitionT&& value) { SetPartition(std::forward<PartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const { return m_authorizedColumns; }
    template<typename AuthorizedColumnsT = Aws::Vector<Aws::String>>
    void SetAuthorizedColumns(AuthorizedColumnsT&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = std::forward<AuthorizedColumnsT>(value); }
    template<typename AuthorizedColumnsT = Aws::Vector<Aws::String>>
    GetUnfilteredPartitionMetadataResult& WithAuthorizedColumns(AuthorizedColumnsT&& value) { SetAuthorizedColumns(std::forward<AuthorizedColumnsT>(value)); return *this;}
    template<typename AuthorizedColumnsT = Aws::String>
    GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(AuthorizedColumnsT&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.emplace_back(std::forward<AuthorizedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const { return m_isRegisteredWithLakeFormation; }
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }
    inline GetUnfilteredPartitionMetadataResult& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUnfilteredPartitionMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Partition m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedColumns;
    bool m_authorizedColumnsHasBeenSet = false;

    bool m_isRegisteredWithLakeFormation{false};
    bool m_isRegisteredWithLakeFormationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
