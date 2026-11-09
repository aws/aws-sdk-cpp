/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/SystemTableType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Athena {
namespace Model {

/**
 * <p>The enablement status of a single system table. Because system tables are
 * enabled at the account level, every status reflects the same account-wide
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SystemTableStatus">AWS
 * API Reference</a></p>
 */
class SystemTableStatus {
 public:
  AWS_ATHENA_API SystemTableStatus() = default;
  AWS_ATHENA_API SystemTableStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API SystemTableStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the system table, such as <code>QUERY_EXECUTIONS</code>.</p>
   */
  inline SystemTableType GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  inline void SetTableName(SystemTableType value) {
    m_tableNameHasBeenSet = true;
    m_tableName = value;
  }
  inline SystemTableStatus& WithTableName(SystemTableType value) {
    SetTableName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the system table is enabled for the account.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SystemTableStatus& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  SystemTableType m_tableName{SystemTableType::NOT_SET};

  bool m_enabled{false};
  bool m_tableNameHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
