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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/vitalservices/VitalServicesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API getStripeCustomerRequest : public VitalServicesRequest
  {
  public:
    getStripeCustomerRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetUserId() const{ return m_userId; }

    
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    
    inline getStripeCustomerRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    
    inline getStripeCustomerRequest& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    
    inline getStripeCustomerRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
