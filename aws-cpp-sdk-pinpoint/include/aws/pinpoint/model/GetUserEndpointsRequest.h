/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API GetUserEndpointsRequest : public PinpointRequest
  {
  public:
    GetUserEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUserEndpoints"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetUserEndpointsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetUserEndpointsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetUserEndpointsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline GetUserEndpointsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline GetUserEndpointsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline GetUserEndpointsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
