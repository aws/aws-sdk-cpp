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
    AWS_LAKEFORMATION_API AssumeDecoratedRoleWithSAMLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeDecoratedRoleWithSAML"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline const Aws::String& GetSAMLAssertion() const{ return m_sAMLAssertion; }

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline bool SAMLAssertionHasBeenSet() const { return m_sAMLAssertionHasBeenSet; }

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline void SetSAMLAssertion(const Aws::String& value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion = value; }

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline void SetSAMLAssertion(Aws::String&& value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion = std::move(value); }

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline void SetSAMLAssertion(const char* value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion.assign(value); }

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithSAMLAssertion(const Aws::String& value) { SetSAMLAssertion(value); return *this;}

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithSAMLAssertion(Aws::String&& value) { SetSAMLAssertion(std::move(value)); return *this;}

    /**
     * <p>A SAML assertion consisting of an assertion statement for the user who needs
     * temporary credentials. This must match the SAML assertion that was issued to
     * IAM. This must be Base64 encoded.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithSAMLAssertion(const char* value) { SetSAMLAssertion(value); return *this;}


    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role that represents an IAM principal whose scope down policy allows it
     * to call credential vending APIs such as
     * <code>GetTemporaryTableCredentials</code>. The caller must also have
     * iam:PassRole permission on this role. </p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline AssumeDecoratedRoleWithSAMLRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

  private:

    Aws::String m_sAMLAssertion;
    bool m_sAMLAssertionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
