/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/UserSettings.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateUserSettingsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateUserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserSettings"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserSettingsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserSettingsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserSettingsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserSettingsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserSettingsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserSettingsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The user settings to update.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>The user settings to update.</p>
     */
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }

    /**
     * <p>The user settings to update.</p>
     */
    inline void SetUserSettings(const UserSettings& value) { m_userSettingsHasBeenSet = true; m_userSettings = value; }

    /**
     * <p>The user settings to update.</p>
     */
    inline void SetUserSettings(UserSettings&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::move(value); }

    /**
     * <p>The user settings to update.</p>
     */
    inline UpdateUserSettingsRequest& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}

    /**
     * <p>The user settings to update.</p>
     */
    inline UpdateUserSettingsRequest& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserSettings m_userSettings;
    bool m_userSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
