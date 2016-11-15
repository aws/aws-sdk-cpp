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
   * <p>The input for the DetachPrincipalPolicy operation.</p>
   */
  class AWS_IOT_API DetachPrincipalPolicyRequest : public IoTRequest
  {
  public:
    DetachPrincipalPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy to detach.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal.</p> <p>If the principal is a certificate, specify the
     * certificate ARN. If the principal is an Amazon Cognito identity, specify the
     * identity ID.</p>
     */
    inline DetachPrincipalPolicyRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
