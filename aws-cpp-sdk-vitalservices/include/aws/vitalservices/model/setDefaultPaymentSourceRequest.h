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
  class AWS_VITALSERVICES_API setDefaultPaymentSourceRequest : public VitalServicesRequest
  {
  public:
    setDefaultPaymentSourceRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetPaymentMethodId() const{ return m_paymentMethodId; }

    
    inline void SetPaymentMethodId(const Aws::String& value) { m_paymentMethodIdHasBeenSet = true; m_paymentMethodId = value; }

    
    inline void SetPaymentMethodId(Aws::String&& value) { m_paymentMethodIdHasBeenSet = true; m_paymentMethodId = value; }

    
    inline void SetPaymentMethodId(const char* value) { m_paymentMethodIdHasBeenSet = true; m_paymentMethodId.assign(value); }

    
    inline setDefaultPaymentSourceRequest& WithPaymentMethodId(const Aws::String& value) { SetPaymentMethodId(value); return *this;}

    
    inline setDefaultPaymentSourceRequest& WithPaymentMethodId(Aws::String&& value) { SetPaymentMethodId(value); return *this;}

    
    inline setDefaultPaymentSourceRequest& WithPaymentMethodId(const char* value) { SetPaymentMethodId(value); return *this;}

  private:
    Aws::String m_paymentMethodId;
    bool m_paymentMethodIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
