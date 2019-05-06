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
#include <aws/pinpoint/model/NumberValidateRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API PhoneNumberValidateRequest : public PinpointRequest
  {
  public:
    PhoneNumberValidateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PhoneNumberValidate"; }

    Aws::String SerializePayload() const override;


    
    inline const NumberValidateRequest& GetNumberValidateRequest() const{ return m_numberValidateRequest; }

    
    inline bool NumberValidateRequestHasBeenSet() const { return m_numberValidateRequestHasBeenSet; }

    
    inline void SetNumberValidateRequest(const NumberValidateRequest& value) { m_numberValidateRequestHasBeenSet = true; m_numberValidateRequest = value; }

    
    inline void SetNumberValidateRequest(NumberValidateRequest&& value) { m_numberValidateRequestHasBeenSet = true; m_numberValidateRequest = std::move(value); }

    
    inline PhoneNumberValidateRequest& WithNumberValidateRequest(const NumberValidateRequest& value) { SetNumberValidateRequest(value); return *this;}

    
    inline PhoneNumberValidateRequest& WithNumberValidateRequest(NumberValidateRequest&& value) { SetNumberValidateRequest(std::move(value)); return *this;}

  private:

    NumberValidateRequest m_numberValidateRequest;
    bool m_numberValidateRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
