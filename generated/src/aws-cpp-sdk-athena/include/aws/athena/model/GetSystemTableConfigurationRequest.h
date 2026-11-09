/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaRequest.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/SystemTableName.h>

#include <utility>

namespace Aws {
namespace Athena {
namespace Model {

/**
 */
class GetSystemTableConfigurationRequest : public AthenaRequest {
 public:
  AWS_ATHENA_API GetSystemTableConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSystemTableConfiguration"; }

  AWS_ATHENA_API Aws::String SerializePayload() const override;

  AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The system table configuration to retrieve. The only accepted value is
   * <code>ALL</code>.</p>
   */
  inline SystemTableName GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  inline void SetTableName(SystemTableName value) {
    m_tableNameHasBeenSet = true;
    m_tableName = value;
  }
  inline GetSystemTableConfigurationRequest& WithTableName(SystemTableName value) {
    SetTableName(value);
    return *this;
  }
  ///@}
 private:
  SystemTableName m_tableName{SystemTableName::NOT_SET};
  bool m_tableNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
