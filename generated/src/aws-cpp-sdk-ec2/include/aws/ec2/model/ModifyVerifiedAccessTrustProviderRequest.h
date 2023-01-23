/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderOidcOptions.h>
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
  class ModifyVerifiedAccessTrustProviderRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessTrustProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessTrustProvider"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const{ return m_verifiedAccessTrustProviderId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(const Aws::String& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(Aws::String&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(const char* value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(const Aws::String& value) { SetVerifiedAccessTrustProviderId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(Aws::String&& value) { SetVerifiedAccessTrustProviderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(const char* value) { SetVerifiedAccessTrustProviderId(value); return *this;}


    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline const ModifyVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const{ return m_oidcOptions; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(const ModifyVerifiedAccessTrustProviderOidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(ModifyVerifiedAccessTrustProviderOidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithOidcOptions(const ModifyVerifiedAccessTrustProviderOidcOptions& value) { SetOidcOptions(value); return *this;}

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithOidcOptions(ModifyVerifiedAccessTrustProviderOidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline ModifyVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    ModifyVerifiedAccessTrustProviderOidcOptions m_oidcOptions;
    bool m_oidcOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
