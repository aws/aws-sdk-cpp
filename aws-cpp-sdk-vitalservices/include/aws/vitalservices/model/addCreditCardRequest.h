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
  class AWS_VITALSERVICES_API addCreditCardRequest : public VitalServicesRequest
  {
  public:
    addCreditCardRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetCardToken() const{ return m_cardToken; }

    
    inline void SetCardToken(const Aws::String& value) { m_cardTokenHasBeenSet = true; m_cardToken = value; }

    
    inline void SetCardToken(Aws::String&& value) { m_cardTokenHasBeenSet = true; m_cardToken = value; }

    
    inline void SetCardToken(const char* value) { m_cardTokenHasBeenSet = true; m_cardToken.assign(value); }

    
    inline addCreditCardRequest& WithCardToken(const Aws::String& value) { SetCardToken(value); return *this;}

    
    inline addCreditCardRequest& WithCardToken(Aws::String&& value) { SetCardToken(value); return *this;}

    
    inline addCreditCardRequest& WithCardToken(const char* value) { SetCardToken(value); return *this;}

  private:
    Aws::String m_cardToken;
    bool m_cardTokenHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
