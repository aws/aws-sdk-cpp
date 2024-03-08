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
    AWS_APPSTREAM_API UserSetting();
    AWS_APPSTREAM_API UserSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UserSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline UserSetting& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline UserSetting& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline UserSetting& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline UserSetting& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>Specifies the number of characters that can be copied by end users from the
     * local device to the remote session, and to the local device from the remote
     * session.</p> <p>This can be specified only for the
     * <code>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</code> and
     * <code>CLIPBOARD_COPY_TO_LOCAL_DEVICE</code> actions.</p> <p>This defaults to
     * 20,971,520 (20 MB) when unspecified and the permission is <code>ENABLED</code>.
     * This can't be specified when the permission is <code>DISABLED</code>. </p>
     * <p>This can only be specified for AlwaysOn and OnDemand fleets. The attribute is
     * not supported on Elastic fleets.</p> <p>The value can be between 1 and
     * 20,971,520 (20 MB).</p>
     */
    inline int GetMaximumLength() const{ return m_maximumLength; }

    /**
     * <p>Specifies the number of characters that can be copied by end users from the
     * local device to the remote session, and to the local device from the remote
     * session.</p> <p>This can be specified only for the
     * <code>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</code> and
     * <code>CLIPBOARD_COPY_TO_LOCAL_DEVICE</code> actions.</p> <p>This defaults to
     * 20,971,520 (20 MB) when unspecified and the permission is <code>ENABLED</code>.
     * This can't be specified when the permission is <code>DISABLED</code>. </p>
     * <p>This can only be specified for AlwaysOn and OnDemand fleets. The attribute is
     * not supported on Elastic fleets.</p> <p>The value can be between 1 and
     * 20,971,520 (20 MB).</p>
     */
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }

    /**
     * <p>Specifies the number of characters that can be copied by end users from the
     * local device to the remote session, and to the local device from the remote
     * session.</p> <p>This can be specified only for the
     * <code>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</code> and
     * <code>CLIPBOARD_COPY_TO_LOCAL_DEVICE</code> actions.</p> <p>This defaults to
     * 20,971,520 (20 MB) when unspecified and the permission is <code>ENABLED</code>.
     * This can't be specified when the permission is <code>DISABLED</code>. </p>
     * <p>This can only be specified for AlwaysOn and OnDemand fleets. The attribute is
     * not supported on Elastic fleets.</p> <p>The value can be between 1 and
     * 20,971,520 (20 MB).</p>
     */
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }

    /**
     * <p>Specifies the number of characters that can be copied by end users from the
     * local device to the remote session, and to the local device from the remote
     * session.</p> <p>This can be specified only for the
     * <code>CLIPBOARD_COPY_FROM_LOCAL_DEVICE</code> and
     * <code>CLIPBOARD_COPY_TO_LOCAL_DEVICE</code> actions.</p> <p>This defaults to
     * 20,971,520 (20 MB) when unspecified and the permission is <code>ENABLED</code>.
     * This can't be specified when the permission is <code>DISABLED</code>. </p>
     * <p>This can only be specified for AlwaysOn and OnDemand fleets. The attribute is
     * not supported on Elastic fleets.</p> <p>The value can be between 1 and
     * 20,971,520 (20 MB).</p>
     */
    inline UserSetting& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    int m_maximumLength;
    bool m_maximumLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
