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
 * <p>The Amazon Q properties of the connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AmazonQPropertiesPatch">AWS
 * API Reference</a></p>
 */
class AmazonQPropertiesPatch {
 public:
  AWS_DATAZONE_API AmazonQPropertiesPatch() = default;
  AWS_DATAZONE_API AmazonQPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API AmazonQPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Amazon Q is enabled for the connection.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline AmazonQPropertiesPatch& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The profile ARN of the connection's Amazon Q properties.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  AmazonQPropertiesPatch& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication mode of the connection's Amazon Q properties.</p>
   */
  inline const Aws::String& GetAuthMode() const { return m_authMode; }
  inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
  template <typename AuthModeT = Aws::String>
  void SetAuthMode(AuthModeT&& value) {
    m_authModeHasBeenSet = true;
    m_authMode = std::forward<AuthModeT>(value);
  }
  template <typename AuthModeT = Aws::String>
  AmazonQPropertiesPatch& WithAuthMode(AuthModeT&& value) {
    SetAuthMode(std::forward<AuthModeT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isEnabled{false};

  Aws::String m_profileArn;

  Aws::String m_authMode;
  bool m_isEnabledHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_authModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
