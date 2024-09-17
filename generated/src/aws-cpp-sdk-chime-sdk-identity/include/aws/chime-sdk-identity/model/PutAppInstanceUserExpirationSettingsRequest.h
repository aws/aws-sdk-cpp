/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/ExpirationSettings.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class PutAppInstanceUserExpirationSettingsRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API PutAppInstanceUserExpirationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppInstanceUserExpirationSettings"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline PutAppInstanceUserExpirationSettingsRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline PutAppInstanceUserExpirationSettingsRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline PutAppInstanceUserExpirationSettingsRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const{ return m_expirationSettings; }
    inline bool ExpirationSettingsHasBeenSet() const { return m_expirationSettingsHasBeenSet; }
    inline void SetExpirationSettings(const ExpirationSettings& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = value; }
    inline void SetExpirationSettings(ExpirationSettings&& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = std::move(value); }
    inline PutAppInstanceUserExpirationSettingsRequest& WithExpirationSettings(const ExpirationSettings& value) { SetExpirationSettings(value); return *this;}
    inline PutAppInstanceUserExpirationSettingsRequest& WithExpirationSettings(ExpirationSettings&& value) { SetExpirationSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    ExpirationSettings m_expirationSettings;
    bool m_expirationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
