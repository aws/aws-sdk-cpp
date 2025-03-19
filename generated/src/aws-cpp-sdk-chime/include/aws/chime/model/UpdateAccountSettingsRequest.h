/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/AccountSettings.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateAccountSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateAccountSettingsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account settings to update.</p>
     */
    inline const AccountSettings& GetAccountSettings() const { return m_accountSettings; }
    inline bool AccountSettingsHasBeenSet() const { return m_accountSettingsHasBeenSet; }
    template<typename AccountSettingsT = AccountSettings>
    void SetAccountSettings(AccountSettingsT&& value) { m_accountSettingsHasBeenSet = true; m_accountSettings = std::forward<AccountSettingsT>(value); }
    template<typename AccountSettingsT = AccountSettings>
    UpdateAccountSettingsRequest& WithAccountSettings(AccountSettingsT&& value) { SetAccountSettings(std::forward<AccountSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AccountSettings m_accountSettings;
    bool m_accountSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
