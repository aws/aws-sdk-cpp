/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The IAM properties of a connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IamPropertiesInput">AWS
 * API Reference</a></p>
 */
class IamPropertiesInput {
 public:
  AWS_DATAZONE_API IamPropertiesInput() = default;
  AWS_DATAZONE_API IamPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API IamPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Amazon Web Services Glue lineage sync is enabled for a
   * connection.</p>
   */
  inline bool GetGlueLineageSyncEnabled() const { return m_glueLineageSyncEnabled; }
  inline bool GlueLineageSyncEnabledHasBeenSet() const { return m_glueLineageSyncEnabledHasBeenSet; }
  inline void SetGlueLineageSyncEnabled(bool value) {
    m_glueLineageSyncEnabledHasBeenSet = true;
    m_glueLineageSyncEnabled = value;
  }
  inline IamPropertiesInput& WithGlueLineageSyncEnabled(bool value) {
    SetGlueLineageSyncEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role to associate with the connection as the project user
   * role. To use this operation, you must have <code>iam:PassRole</code> permission
   * for this role.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  IamPropertiesInput& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_glueLineageSyncEnabled{false};

  Aws::String m_roleArn;
  bool m_glueLineageSyncEnabledHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
