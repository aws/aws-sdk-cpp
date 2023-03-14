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
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult();
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline void SetPartition(const Partition& value) { m_partition = value; }

    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline void SetPartition(Partition&& value) { m_partition = std::move(value); }

    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>A Partition object containing the partition metadata.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumns = value; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumns = std::move(value); }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumns.push_back(value); return *this; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(const char* value) { m_authorizedColumns.push_back(value); return *this; }


    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormation = value; }

    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline GetUnfilteredPartitionMetadataResult& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUnfilteredPartitionMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Partition m_partition;

    Aws::Vector<Aws::String> m_authorizedColumns;

    bool m_isRegisteredWithLakeFormation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
