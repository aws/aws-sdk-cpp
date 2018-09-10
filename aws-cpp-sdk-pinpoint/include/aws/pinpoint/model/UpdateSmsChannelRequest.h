﻿/*
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
#include <aws/pinpoint/model/SMSChannelRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API UpdateSmsChannelRequest : public PinpointRequest
  {
  public:
    UpdateSmsChannelRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSmsChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline UpdateSmsChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline UpdateSmsChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline UpdateSmsChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const SMSChannelRequest& GetSMSChannelRequest() const{ return m_sMSChannelRequest; }

    
    inline void SetSMSChannelRequest(const SMSChannelRequest& value) { m_sMSChannelRequestHasBeenSet = true; m_sMSChannelRequest = value; }

    
    inline void SetSMSChannelRequest(SMSChannelRequest&& value) { m_sMSChannelRequestHasBeenSet = true; m_sMSChannelRequest = std::move(value); }

    
    inline UpdateSmsChannelRequest& WithSMSChannelRequest(const SMSChannelRequest& value) { SetSMSChannelRequest(value); return *this;}

    
    inline UpdateSmsChannelRequest& WithSMSChannelRequest(SMSChannelRequest&& value) { SetSMSChannelRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    SMSChannelRequest m_sMSChannelRequest;
    bool m_sMSChannelRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
