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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateStreamingURLRequest : public AppStreamRequest
  {
  public:
    CreateStreamingURLRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The stack for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(Aws::String&& value) { SetFleetName(value); return *this;}

    /**
     * <p>The fleet for which the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>A unique user ID for whom the URL is generated.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application that must be launched after the session starts.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

    /**
     * <p>The validity duration of the URL in seconds. After this duration, the URL
     * returned by this operation becomes invalid.</p>
     */
    inline long long GetValidity() const{ return m_validity; }

    /**
     * <p>The validity duration of the URL in seconds. After this duration, the URL
     * returned by this operation becomes invalid.</p>
     */
    inline void SetValidity(long long value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>The validity duration of the URL in seconds. After this duration, the URL
     * returned by this operation becomes invalid.</p>
     */
    inline CreateStreamingURLRequest& WithValidity(long long value) { SetValidity(value); return *this;}

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline const Aws::String& GetSessionContext() const{ return m_sessionContext; }

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline void SetSessionContext(const Aws::String& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline void SetSessionContext(Aws::String&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline void SetSessionContext(const char* value) { m_sessionContextHasBeenSet = true; m_sessionContext.assign(value); }

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(const Aws::String& value) { SetSessionContext(value); return *this;}

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(Aws::String&& value) { SetSessionContext(value); return *this;}

    /**
     * <p>The sessionContext of the streaming URL.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(const char* value) { SetSessionContext(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
    long long m_validity;
    bool m_validityHasBeenSet;
    Aws::String m_sessionContext;
    bool m_sessionContextHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
