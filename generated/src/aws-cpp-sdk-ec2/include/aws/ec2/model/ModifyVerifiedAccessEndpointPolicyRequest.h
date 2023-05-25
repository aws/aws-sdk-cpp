/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVerifiedAccessEndpointPolicyRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessEndpointPolicy"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}


    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline bool GetPolicyEnabled() const{ return m_policyEnabled; }

    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline bool PolicyEnabledHasBeenSet() const { return m_policyEnabledHasBeenSet; }

    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline void SetPolicyEnabled(bool value) { m_policyEnabledHasBeenSet = true; m_policyEnabled = value; }

    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithPolicyEnabled(bool value) { SetPolicyEnabled(value); return *this;}


    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyVerifiedAccessEndpointPolicyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_verifiedAccessEndpointId;
    bool m_verifiedAccessEndpointIdHasBeenSet = false;

    bool m_policyEnabled;
    bool m_policyEnabledHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
