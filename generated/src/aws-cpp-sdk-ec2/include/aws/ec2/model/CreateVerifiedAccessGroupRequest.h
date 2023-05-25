/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
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
  class CreateVerifiedAccessGroupRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVerifiedAccessGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVerifiedAccessGroup"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateVerifiedAccessGroupRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateVerifiedAccessGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateVerifiedAccessGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
