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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
    <p>Represents a request instructing the service to retrieve the text of a list of authorization policies applying to an identity. </p>
  */
  class AWS_SES_API GetIdentityPoliciesRequest : public SESRequest
  {
  public:
    GetIdentityPoliciesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The email address or domain for which policies will be retrieved.</p> <p>The identity must be owned by the caller.</p>
    */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    /*
     <p>The email address or domain for which policies will be retrieved.</p> <p>The identity must be owned by the caller.</p>
    */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /*
     <p>The email address or domain for which policies will be retrieved.</p> <p>The identity must be owned by the caller.</p>
    */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /*
     <p>The email address or domain for which policies will be retrieved.</p> <p>The identity must be owned by the caller.</p>
    */
    inline GetIdentityPoliciesRequest&  WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /*
     <p>The email address or domain for which policies will be retrieved.</p> <p>The identity must be owned by the caller.</p>
    */
    inline GetIdentityPoliciesRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /*
     <p>A list of policies by name to be retrieved.</p> <p>Up to 20 can be retrieved.</p>
    */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }
    /*
     <p>A list of policies by name to be retrieved.</p> <p>Up to 20 can be retrieved.</p>
    */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /*
     <p>A list of policies by name to be retrieved.</p> <p>Up to 20 can be retrieved.</p>
    */
    inline GetIdentityPoliciesRequest&  WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /*
     <p>A list of policies by name to be retrieved.</p> <p>Up to 20 can be retrieved.</p>
    */
    inline GetIdentityPoliciesRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /*
     <p>A list of policies by name to be retrieved.</p> <p>Up to 20 can be retrieved.</p>
    */
    inline GetIdentityPoliciesRequest& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
