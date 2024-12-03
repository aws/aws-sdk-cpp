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
    AWS_GLUE_API TargetTableConfig();
    AWS_GLUE_API TargetTableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TargetTableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how nested objects are flattened to top-level elements. Valid
     * values are: "TOPLEVEL", "FULL", or "NOUNNEST".</p>
     */
    inline const UnnestSpec& GetUnnestSpec() const{ return m_unnestSpec; }
    inline bool UnnestSpecHasBeenSet() const { return m_unnestSpecHasBeenSet; }
    inline void SetUnnestSpec(const UnnestSpec& value) { m_unnestSpecHasBeenSet = true; m_unnestSpec = value; }
    inline void SetUnnestSpec(UnnestSpec&& value) { m_unnestSpecHasBeenSet = true; m_unnestSpec = std::move(value); }
    inline TargetTableConfig& WithUnnestSpec(const UnnestSpec& value) { SetUnnestSpec(value); return *this;}
    inline TargetTableConfig& WithUnnestSpec(UnnestSpec&& value) { SetUnnestSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the file layout on the target.</p>
     */
    inline const Aws::Vector<IntegrationPartition>& GetPartitionSpec() const{ return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    inline void SetPartitionSpec(const Aws::Vector<IntegrationPartition>& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = value; }
    inline void SetPartitionSpec(Aws::Vector<IntegrationPartition>&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::move(value); }
    inline TargetTableConfig& WithPartitionSpec(const Aws::Vector<IntegrationPartition>& value) { SetPartitionSpec(value); return *this;}
    inline TargetTableConfig& WithPartitionSpec(Aws::Vector<IntegrationPartition>&& value) { SetPartitionSpec(std::move(value)); return *this;}
    inline TargetTableConfig& AddPartitionSpec(const IntegrationPartition& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec.push_back(value); return *this; }
    inline TargetTableConfig& AddPartitionSpec(IntegrationPartition&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The optional name of a target table.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }
    inline TargetTableConfig& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}
    inline TargetTableConfig& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}
    inline TargetTableConfig& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}
    ///@}
  private:

    UnnestSpec m_unnestSpec;
    bool m_unnestSpecHasBeenSet = false;

    Aws::Vector<IntegrationPartition> m_partitionSpec;
    bool m_partitionSpecHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
