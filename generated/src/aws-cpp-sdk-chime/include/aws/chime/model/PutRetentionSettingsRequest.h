/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/RetentionSettings.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class PutRetentionSettingsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API PutRetentionSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRetentionSettings"; }

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
    PutRetentionSettingsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention settings.</p>
     */
    inline const RetentionSettings& GetRetentionSettings() const { return m_retentionSettings; }
    inline bool RetentionSettingsHasBeenSet() const { return m_retentionSettingsHasBeenSet; }
    template<typename RetentionSettingsT = RetentionSettings>
    void SetRetentionSettings(RetentionSettingsT&& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings = std::forward<RetentionSettingsT>(value); }
    template<typename RetentionSettingsT = RetentionSettings>
    PutRetentionSettingsRequest& WithRetentionSettings(RetentionSettingsT&& value) { SetRetentionSettings(std::forward<RetentionSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RetentionSettings m_retentionSettings;
    bool m_retentionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
