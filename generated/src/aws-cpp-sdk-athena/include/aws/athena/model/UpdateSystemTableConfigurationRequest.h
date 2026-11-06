/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaRequest.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/SystemTableName.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Athena {
namespace Model {

/**
 */
class UpdateSystemTableConfigurationRequest : public AthenaRequest {
 public:
  AWS_ATHENA_API UpdateSystemTableConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSystemTableConfiguration"; }

  AWS_ATHENA_API Aws::String SerializePayload() const override;

  AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The system table configuration to update. The only accepted value is
   * <code>ALL</code>.</p>
   */
  inline SystemTableName GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  inline void SetTableName(SystemTableName value) {
    m_tableNameHasBeenSet = true;
    m_tableName = value;
  }
  inline UpdateSystemTableConfigurationRequest& WithTableName(SystemTableName value) {
    SetTableName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
   * key to use for encrypting the system table data. The encryption key is immutable
   * while the system table exists, so a change takes effect only after the table has
   * been deleted.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  UpdateSystemTableConfigurationRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  SystemTableName m_tableName{SystemTableName::NOT_SET};

  Aws::String m_kmsKeyArn;
  bool m_tableNameHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
