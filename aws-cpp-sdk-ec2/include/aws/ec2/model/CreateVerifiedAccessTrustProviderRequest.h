/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/TrustProviderType.h>
#include <aws/ec2/model/UserTrustProviderType.h>
#include <aws/ec2/model/DeviceTrustProviderType.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderOidcOptions.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderDeviceOptions.h>
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
  class CreateVerifiedAccessTrustProviderRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVerifiedAccessTrustProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVerifiedAccessTrustProvider"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline const TrustProviderType& GetTrustProviderType() const{ return m_trustProviderType; }

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline void SetTrustProviderType(const TrustProviderType& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline void SetTrustProviderType(TrustProviderType&& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = std::move(value); }

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithTrustProviderType(const TrustProviderType& value) { SetTrustProviderType(value); return *this;}

    /**
     * <p>The type of trust provider can be either user or device-based.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithTrustProviderType(TrustProviderType&& value) { SetTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline const UserTrustProviderType& GetUserTrustProviderType() const{ return m_userTrustProviderType; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline void SetUserTrustProviderType(const UserTrustProviderType& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline void SetUserTrustProviderType(UserTrustProviderType&& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = std::move(value); }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithUserTrustProviderType(const UserTrustProviderType& value) { SetUserTrustProviderType(value); return *this;}

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithUserTrustProviderType(UserTrustProviderType&& value) { SetUserTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline const DeviceTrustProviderType& GetDeviceTrustProviderType() const{ return m_deviceTrustProviderType; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline void SetDeviceTrustProviderType(const DeviceTrustProviderType& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType&& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = std::move(value); }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceTrustProviderType(const DeviceTrustProviderType& value) { SetDeviceTrustProviderType(value); return *this;}

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceTrustProviderType(DeviceTrustProviderType&& value) { SetDeviceTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline const CreateVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const{ return m_oidcOptions; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(const CreateVerifiedAccessTrustProviderOidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(CreateVerifiedAccessTrustProviderOidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithOidcOptions(const CreateVerifiedAccessTrustProviderOidcOptions& value) { SetOidcOptions(value); return *this;}

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithOidcOptions(CreateVerifiedAccessTrustProviderOidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}


    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline const CreateVerifiedAccessTrustProviderDeviceOptions& GetDeviceOptions() const{ return m_deviceOptions; }

    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }

    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline void SetDeviceOptions(const CreateVerifiedAccessTrustProviderDeviceOptions& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = value; }

    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline void SetDeviceOptions(CreateVerifiedAccessTrustProviderDeviceOptions&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::move(value); }

    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceOptions(const CreateVerifiedAccessTrustProviderDeviceOptions& value) { SetDeviceOptions(value); return *this;}

    /**
     * <p>The options for device identity based trust providers.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceOptions(CreateVerifiedAccessTrustProviderDeviceOptions&& value) { SetDeviceOptions(std::move(value)); return *this;}


    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const{ return m_policyReferenceName; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(const Aws::String& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = value; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(Aws::String&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::move(value); }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(const char* value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName.assign(value); }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(const Aws::String& value) { SetPolicyReferenceName(value); return *this;}

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(Aws::String&& value) { SetPolicyReferenceName(std::move(value)); return *this;}

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(const char* value) { SetPolicyReferenceName(value); return *this;}


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
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access trust
     * provider.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    TrustProviderType m_trustProviderType;
    bool m_trustProviderTypeHasBeenSet = false;

    UserTrustProviderType m_userTrustProviderType;
    bool m_userTrustProviderTypeHasBeenSet = false;

    DeviceTrustProviderType m_deviceTrustProviderType;
    bool m_deviceTrustProviderTypeHasBeenSet = false;

    CreateVerifiedAccessTrustProviderOidcOptions m_oidcOptions;
    bool m_oidcOptionsHasBeenSet = false;

    CreateVerifiedAccessTrustProviderDeviceOptions m_deviceOptions;
    bool m_deviceOptionsHasBeenSet = false;

    Aws::String m_policyReferenceName;
    bool m_policyReferenceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
