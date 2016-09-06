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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the AttachPrincipalPolicy operation.</p>
   */
  class AWS_IOT_API AttachPrincipalPolicyRequest : public IoTRequest
  {
  public:
    AttachPrincipalPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The policy name.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachPrincipalPolicyRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
