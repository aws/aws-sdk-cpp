/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SourceTableConfig.h>
#include <aws/glue/model/TargetTableConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The properties of a single integration table, including the resource ARN, the
 * table name, and the source or target table configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IntegrationTableProperties">AWS
 * API Reference</a></p>
 */
class IntegrationTableProperties {
 public:
  AWS_GLUE_API IntegrationTableProperties() = default;
  AWS_GLUE_API IntegrationTableProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IntegrationTableProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connection ARN of the source, or the database ARN of the target.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  IntegrationTableProperties& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the source table to be replicated.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  IntegrationTableProperties& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure for the source table configuration.</p>
   */
  inline const SourceTableConfig& GetSourceTableConfig() const { return m_sourceTableConfig; }
  inline bool SourceTableConfigHasBeenSet() const { return m_sourceTableConfigHasBeenSet; }
  template <typename SourceTableConfigT = SourceTableConfig>
  void SetSourceTableConfig(SourceTableConfigT&& value) {
    m_sourceTableConfigHasBeenSet = true;
    m_sourceTableConfig = std::forward<SourceTableConfigT>(value);
  }
  template <typename SourceTableConfigT = SourceTableConfig>
  IntegrationTableProperties& WithSourceTableConfig(SourceTableConfigT&& value) {
    SetSourceTableConfig(std::forward<SourceTableConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure for the target table configuration.</p>
   */
  inline const TargetTableConfig& GetTargetTableConfig() const { return m_targetTableConfig; }
  inline bool TargetTableConfigHasBeenSet() const { return m_targetTableConfigHasBeenSet; }
  template <typename TargetTableConfigT = TargetTableConfig>
  void SetTargetTableConfig(TargetTableConfigT&& value) {
    m_targetTableConfigHasBeenSet = true;
    m_targetTableConfig = std::forward<TargetTableConfigT>(value);
  }
  template <typename TargetTableConfigT = TargetTableConfig>
  IntegrationTableProperties& WithTargetTableConfig(TargetTableConfigT&& value) {
    SetTargetTableConfig(std::forward<TargetTableConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_tableName;

  SourceTableConfig m_sourceTableConfig;

  TargetTableConfig m_targetTableConfig;
  bool m_resourceArnHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_sourceTableConfigHasBeenSet = false;
  bool m_targetTableConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
