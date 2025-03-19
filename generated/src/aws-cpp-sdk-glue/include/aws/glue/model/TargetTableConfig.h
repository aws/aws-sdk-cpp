/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UnnestSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/IntegrationPartition.h>
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
   * <p>Properties used by the target leg to partition the data on the
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TargetTableConfig">AWS
   * API Reference</a></p>
   */
  class TargetTableConfig
  {
  public:
    AWS_GLUE_API TargetTableConfig() = default;
    AWS_GLUE_API TargetTableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TargetTableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how nested objects are flattened to top-level elements. Valid
     * values are: "TOPLEVEL", "FULL", or "NOUNNEST".</p>
     */
    inline UnnestSpec GetUnnestSpec() const { return m_unnestSpec; }
    inline bool UnnestSpecHasBeenSet() const { return m_unnestSpecHasBeenSet; }
    inline void SetUnnestSpec(UnnestSpec value) { m_unnestSpecHasBeenSet = true; m_unnestSpec = value; }
    inline TargetTableConfig& WithUnnestSpec(UnnestSpec value) { SetUnnestSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the file layout on the target.</p>
     */
    inline const Aws::Vector<IntegrationPartition>& GetPartitionSpec() const { return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    template<typename PartitionSpecT = Aws::Vector<IntegrationPartition>>
    void SetPartitionSpec(PartitionSpecT&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::forward<PartitionSpecT>(value); }
    template<typename PartitionSpecT = Aws::Vector<IntegrationPartition>>
    TargetTableConfig& WithPartitionSpec(PartitionSpecT&& value) { SetPartitionSpec(std::forward<PartitionSpecT>(value)); return *this;}
    template<typename PartitionSpecT = IntegrationPartition>
    TargetTableConfig& AddPartitionSpec(PartitionSpecT&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec.emplace_back(std::forward<PartitionSpecT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The optional name of a target table.</p>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    TargetTableConfig& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}
  private:

    UnnestSpec m_unnestSpec{UnnestSpec::NOT_SET};
    bool m_unnestSpecHasBeenSet = false;

    Aws::Vector<IntegrationPartition> m_partitionSpec;
    bool m_partitionSpecHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
