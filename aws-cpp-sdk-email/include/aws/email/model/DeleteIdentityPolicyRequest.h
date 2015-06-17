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
    <p>Represents a request instructing the service to delete an authorization policy applying to an identity.</p> <p>This request succeeds regardless of whether the specified policy exists.</p>
  */
  class AWS_SES_API DeleteIdentityPolicyRequest : public SESRequest
  {
  public:
    DeleteIdentityPolicyRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The email address or domain whose policy will be deleted.</p> <p>The identity must be owned by the caller.</p>
    */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    /*
     <p>The email address or domain whose policy will be deleted.</p> <p>The identity must be owned by the caller.</p>
    */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /*
     <p>The email address or domain whose policy will be deleted.</p> <p>The identity must be owned by the caller.</p>
    */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /*
     <p>The email address or domain whose policy will be deleted.</p> <p>The identity must be owned by the caller.</p>
    */
    inline DeleteIdentityPolicyRequest&  WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /*
     <p>The email address or domain whose policy will be deleted.</p> <p>The identity must be owned by the caller.</p>
    */
    inline DeleteIdentityPolicyRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /*
     <p>The name of the policy to be deleted.</p>
    */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    /*
     <p>The name of the policy to be deleted.</p>
    */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /*
     <p>The name of the policy to be deleted.</p>
    */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /*
     <p>The name of the policy to be deleted.</p>
    */
    inline DeleteIdentityPolicyRequest&  WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /*
     <p>The name of the policy to be deleted.</p>
    */
    inline DeleteIdentityPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
