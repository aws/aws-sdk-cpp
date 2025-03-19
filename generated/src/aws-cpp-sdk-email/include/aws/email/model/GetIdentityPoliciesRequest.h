/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class GetIdentityPoliciesRequest : public SESRequest
  {
  public:
    AWS_SES_API GetIdentityPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityPolicies"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity for which the policies are retrieved. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this operation, you must own the identity.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    GetIdentityPoliciesRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the names of policies to be retrieved. You can retrieve a maximum
     * of 20 policies at a time. If you do not know the names of the policies that are
     * attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const { return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    void SetPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::forward<PolicyNamesT>(value); }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    GetIdentityPoliciesRequest& WithPolicyNames(PolicyNamesT&& value) { SetPolicyNames(std::forward<PolicyNamesT>(value)); return *this;}
    template<typename PolicyNamesT = Aws::String>
    GetIdentityPoliciesRequest& AddPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames.emplace_back(std::forward<PolicyNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
