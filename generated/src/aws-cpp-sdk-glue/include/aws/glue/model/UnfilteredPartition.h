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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A partition that contains unfiltered metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UnfilteredPartition">AWS
   * API Reference</a></p>
   */
  class UnfilteredPartition
  {
  public:
    AWS_GLUE_API UnfilteredPartition() = default;
    AWS_GLUE_API UnfilteredPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UnfilteredPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The partition object.</p>
     */
    inline const Partition& GetPartition() const { return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    template<typename PartitionT = Partition>
    void SetPartition(PartitionT&& value) { m_partitionHasBeenSet = true; m_partition = std::forward<PartitionT>(value); }
    template<typename PartitionT = Partition>
    UnfilteredPartition& WithPartition(PartitionT&& value) { SetPartition(std::forward<PartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const { return m_authorizedColumns; }
    inline bool AuthorizedColumnsHasBeenSet() const { return m_authorizedColumnsHasBeenSet; }
    template<typename AuthorizedColumnsT = Aws::Vector<Aws::String>>
    void SetAuthorizedColumns(AuthorizedColumnsT&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = std::forward<AuthorizedColumnsT>(value); }
    template<typename AuthorizedColumnsT = Aws::Vector<Aws::String>>
    UnfilteredPartition& WithAuthorizedColumns(AuthorizedColumnsT&& value) { SetAuthorizedColumns(std::forward<AuthorizedColumnsT>(value)); return *this;}
    template<typename AuthorizedColumnsT = Aws::String>
    UnfilteredPartition& AddAuthorizedColumns(AuthorizedColumnsT&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.emplace_back(std::forward<AuthorizedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating that the partition location is registered with
     * Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const { return m_isRegisteredWithLakeFormation; }
    inline bool IsRegisteredWithLakeFormationHasBeenSet() const { return m_isRegisteredWithLakeFormationHasBeenSet; }
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }
    inline UnfilteredPartition& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}
    ///@}
  private:

    Partition m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedColumns;
    bool m_authorizedColumnsHasBeenSet = false;

    bool m_isRegisteredWithLakeFormation{false};
    bool m_isRegisteredWithLakeFormationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
