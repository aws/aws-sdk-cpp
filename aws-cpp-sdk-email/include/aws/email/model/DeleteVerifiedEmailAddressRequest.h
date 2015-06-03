/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
    <p>Represents a request instructing the service to delete an address from the list of verified email addresses.</p>
  */
  class AWS_SES_API DeleteVerifiedEmailAddressRequest : public SESRequest
  {
  public:
    DeleteVerifiedEmailAddressRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>An email address to be removed from the list of verified addresses.</p>
    */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    /*
     <p>An email address to be removed from the list of verified addresses.</p>
    */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }

    /*
     <p>An email address to be removed from the list of verified addresses.</p>
    */
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }

    /*
     <p>An email address to be removed from the list of verified addresses.</p>
    */
    inline DeleteVerifiedEmailAddressRequest&  WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /*
     <p>An email address to be removed from the list of verified addresses.</p>
    */
    inline DeleteVerifiedEmailAddressRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:
    Aws::String m_emailAddress;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
