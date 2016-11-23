/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/Platform.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>A request to RegisterDevice.</p>
   */
  class AWS_COGNITOSYNC_API RegisterDeviceRequest : public CognitoSyncRequest
  {
  public:
    RegisterDeviceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline RegisterDeviceRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline RegisterDeviceRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. Here,
     * the ID of the pool that the identity belongs to.</p>
     */
    inline RegisterDeviceRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline RegisterDeviceRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline RegisterDeviceRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The unique ID for this identity.</p>
     */
    inline RegisterDeviceRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>The SNS platform type (e.g. GCM, SDM, APNS, APNS_SANDBOX).</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The SNS platform type (e.g. GCM, SDM, APNS, APNS_SANDBOX).</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The SNS platform type (e.g. GCM, SDM, APNS, APNS_SANDBOX).</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The SNS platform type (e.g. GCM, SDM, APNS, APNS_SANDBOX).</p>
     */
    inline RegisterDeviceRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The SNS platform type (e.g. GCM, SDM, APNS, APNS_SANDBOX).</p>
     */
    inline RegisterDeviceRequest& WithPlatform(Platform&& value) { SetPlatform(value); return *this;}

    /**
     * <p>The push token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The push token.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The push token.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The push token.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The push token.</p>
     */
    inline RegisterDeviceRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The push token.</p>
     */
    inline RegisterDeviceRequest& WithToken(Aws::String&& value) { SetToken(value); return *this;}

    /**
     * <p>The push token.</p>
     */
    inline RegisterDeviceRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Platform m_platform;
    bool m_platformHasBeenSet;
    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
