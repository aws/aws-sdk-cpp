/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceRetentionSettings.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class PutAppInstanceRetentionSettingsRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API PutAppInstanceRetentionSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppInstanceRetentionSettings"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }
    inline PutAppInstanceRetentionSettingsRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline PutAppInstanceRetentionSettingsRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline PutAppInstanceRetentionSettingsRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline const AppInstanceRetentionSettings& GetAppInstanceRetentionSettings() const{ return m_appInstanceRetentionSettings; }
    inline bool AppInstanceRetentionSettingsHasBeenSet() const { return m_appInstanceRetentionSettingsHasBeenSet; }
    inline void SetAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { m_appInstanceRetentionSettingsHasBeenSet = true; m_appInstanceRetentionSettings = value; }
    inline void SetAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { m_appInstanceRetentionSettingsHasBeenSet = true; m_appInstanceRetentionSettings = std::move(value); }
    inline PutAppInstanceRetentionSettingsRequest& WithAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { SetAppInstanceRetentionSettings(value); return *this;}
    inline PutAppInstanceRetentionSettingsRequest& WithAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { SetAppInstanceRetentionSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    AppInstanceRetentionSettings m_appInstanceRetentionSettings;
    bool m_appInstanceRetentionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
