﻿/*
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

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>A request to UnsubscribeFromDataset.</p>
   */
  class AWS_COGNITOSYNC_API UnsubscribeFromDatasetRequest : public CognitoSyncRequest
  {
  public:
    UnsubscribeFromDatasetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. The
     * ID of the pool to which this identity belongs.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * <p>Unique ID for this identity.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset from which to unsubcribe.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline UnsubscribeFromDatasetRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;
    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
