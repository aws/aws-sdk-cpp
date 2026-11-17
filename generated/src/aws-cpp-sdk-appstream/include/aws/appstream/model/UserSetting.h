/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Action.h>
#include <aws/appstream/model/Permission.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes an action and whether the action is enabled or disabled for users
 * during their streaming sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UserSetting">AWS
 * API Reference</a></p>
 */
class UserSetting {
 public:
  AWS_APPSTREAM_API UserSetting() = default;
  AWS_APPSTREAM_API UserSetting(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API UserSetting& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The action you want to enable or disable. Choose from the following:</p> <dl>
   * <dt>AUTO_TIME_ZONE_REDIRECTION</dt> <dd> <p>Controls whether the streaming
   * session's time zone matches the time zone of your local device.</p> </dd>
   * <dt>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</dt> <dd> <p>Controls whether you can copy
   * data from your local device and paste it into the streaming session.</p> </dd>
   * <dt>CLIPBOARD_COPY_TO_LOCAL_DEVICE</dt> <dd> <p>Controls whether you can copy
   * data from the streaming session and paste it to your local device.</p> </dd>
   * <dt>DOMAIN_PASSWORD_SIGNIN</dt> <dd> <p>Controls whether you can sign in to a
   * domain-joined streaming session by using your password.</p> </dd>
   * <dt>DOMAIN_SMART_CARD_SIGNIN</dt> <dd> <p>Controls whether you can sign in to a
   * domain-joined streaming session by using a smart card.</p> </dd>
   * <dt>FILE_DOWNLOAD</dt> <dd> <p>Controls whether you can download files from the
   * streaming session to your local device.</p> </dd> <dt>FILE_UPLOAD</dt> <dd>
   * <p>Controls whether you can upload files from your local device to the streaming
   * session.</p> </dd> <dt>PRINTING_TO_LOCAL_DEVICE</dt> <dd> <p>Controls whether
   * you can print from the streaming session to a printer on your local device.</p>
   * </dd> <dt>SMART_CARD_REDIRECTION</dt> <dd> <p>Controls whether smart cards
   * connected to your local device are redirected into the streaming session.
   * Applications in the session can access the local smart card for use cases such
   * as authentication, digital signing, and email encryption.</p> </dd> </dl>
   * <p>Smart card redirection was on by default for existing streaming sessions that
   * use a Windows single-session fleet. To preserve that behavior,
   * <code>SMART_CARD_REDIRECTION</code> is <code>ENABLED</code> by default on
   * existing stacks associated with Windows single-session fleets. To turn it off,
   * call <code>UpdateStack</code> with <code>SMART_CARD_REDIRECTION</code> set to
   * <code>DISABLED</code>, and use an image that includes the latest WorkSpaces
   * Applications agent version.</p>
   */
  inline Action GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(Action value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UserSetting& WithAction(Action value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to turn the action on or off.</p>
   */
  inline Permission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(Permission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline UserSetting& WithPermission(Permission value) {
    SetPermission(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the number of characters that can be copied by end users from the
   * local device to the remote session, and to the local device from the remote
   * session.</p> <p>This can be specified only for the
   * <code>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</code> and
   * <code>CLIPBOARD_COPY_TO_LOCAL_DEVICE</code> actions.</p> <p>This defaults to
   * 20,971,520 (20 MB) when unspecified and the permission is <code>ENABLED</code>.
   * This can't be specified when the permission is <code>DISABLED</code>. </p>
   * <p>The value can be between 1 and 20,971,520 (20 MB).</p>
   */
  inline int64_t GetMaximumLength() const { return m_maximumLength; }
  inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }
  inline void SetMaximumLength(int64_t value) {
    m_maximumLengthHasBeenSet = true;
    m_maximumLength = value;
  }
  inline UserSetting& WithMaximumLength(int64_t value) {
    SetMaximumLength(value);
    return *this;
  }
  ///@}
 private:
  Action m_action{Action::NOT_SET};

  Permission m_permission{Permission::NOT_SET};

  int64_t m_maximumLength{0};
  bool m_actionHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
  bool m_maximumLengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
