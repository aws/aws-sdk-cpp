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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return the requested sending authorization policies
   * for an identity. Sending authorization is an Amazon SES feature that enables you
   * to authorize other senders to use your identities. For information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API GetIdentityPoliciesRequest : public SESRequest
  {
  public:
    GetIdentityPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityPolicies"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline GetIdentityPoliciesRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline GetIdentityPoliciesRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The identity for which the policies will be retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline GetIdentityPoliciesRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline GetIdentityPoliciesRequest& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline GetIdentityPoliciesRequest& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline GetIdentityPoliciesRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline GetIdentityPoliciesRequest& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
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
