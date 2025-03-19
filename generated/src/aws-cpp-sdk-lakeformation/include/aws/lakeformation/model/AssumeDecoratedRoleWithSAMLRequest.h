/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class AssumeDecoratedRoleWithSAMLRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API AssumeDecoratedRoleWithSAMLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeDecoratedRoleWithSAML"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline const Aws::String& GetSAMLAssertion() const { return m_sAMLAssertion; }
    inline bool SAMLAssertionHasBeenSet() const { return m_sAMLAssertionHasBeenSet; }
    template<typename SAMLAssertionT = Aws::String>
    void SetSAMLAssertion(SAMLAssertionT&& value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion = std::forward<SAMLAssertionT>(value); }
    template<typename SAMLAssertionT = Aws::String>
    AssumeDecoratedRoleWithSAMLRequest& WithSAMLAssertion(SAMLAssertionT&& value) { SetSAMLAssertion(std::forward<SAMLAssertionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AssumeDecoratedRoleWithSAMLRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    AssumeDecoratedRoleWithSAMLRequest& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline AssumeDecoratedRoleWithSAMLRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_sAMLAssertion;
    bool m_sAMLAssertionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
