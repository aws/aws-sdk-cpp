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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>The input for the <code>CheckIfPhoneNumberIsOptedOut</code> action.</p>
   */
  class AWS_SNS_API CheckIfPhoneNumberIsOptedOutRequest : public SNSRequest
  {
  public:
    CheckIfPhoneNumberIsOptedOutRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline CheckIfPhoneNumberIsOptedOutRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline CheckIfPhoneNumberIsOptedOutRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number for which you want to check the opt out status.</p>
     */
    inline CheckIfPhoneNumberIsOptedOutRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:
    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
