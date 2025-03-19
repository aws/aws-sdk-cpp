/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Action.h>
#include <aws/appstream/model/Permission.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an action and whether the action is enabled or disabled for users
   * during their streaming sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UserSetting">AWS
   * API Reference</a></p>
   */
  class UserSetting
  {
  public:
    AWS_APPSTREAM_API UserSetting() = default;
    AWS_APPSTREAM_API UserSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UserSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline Action GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(Action value) { m_actionHasBeenSet = true; m_action = value; }
    inline UserSetting& WithAction(Action value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline Permission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline UserSetting& WithPermission(Permission value) { SetPermission(value); return *this;}
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
    inline int GetMaximumLength() const { return m_maximumLength; }
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }
    inline UserSetting& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}
    ///@}
  private:

    Action m_action{Action::NOT_SET};
    bool m_actionHasBeenSet = false;

    Permission m_permission{Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    int m_maximumLength{0};
    bool m_maximumLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
