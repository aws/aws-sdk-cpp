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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
  */
  class AWS_SES_API GetIdentityNotificationAttributesRequest : public SESRequest
  {
  public:
    GetIdentityNotificationAttributesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>A list of one or more identities.</p>
    */
    inline const Aws::Vector<Aws::String>& GetIdentities() const{ return m_identities; }
    /*
     <p>A list of one or more identities.</p>
    */
    inline void SetIdentities(const Aws::Vector<Aws::String>& value) { m_identities = value; }

    /*
     <p>A list of one or more identities.</p>
    */
    inline GetIdentityNotificationAttributesRequest&  WithIdentities(const Aws::Vector<Aws::String>& value) { SetIdentities(value); return *this;}

    /*
     <p>A list of one or more identities.</p>
    */
    inline GetIdentityNotificationAttributesRequest& AddIdentities(const Aws::String& value) { m_identities.push_back(value); return *this; }

    /*
     <p>A list of one or more identities.</p>
    */
    inline GetIdentityNotificationAttributesRequest& AddIdentities(const char* value) { m_identities.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_identities;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
