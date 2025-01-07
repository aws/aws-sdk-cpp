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
#include <aws/ec2/model/VerifiedAccessSseSpecificationRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessNativeApplicationOidcOptions.h>
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

    ///@{
    /**
     * <p>The type of trust provider.</p>
     */
    inline const TrustProviderType& GetTrustProviderType() const{ return m_trustProviderType; }
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
    inline void SetTrustProviderType(const TrustProviderType& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }
    inline void SetTrustProviderType(TrustProviderType&& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithTrustProviderType(const TrustProviderType& value) { SetTrustProviderType(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithTrustProviderType(TrustProviderType&& value) { SetTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user-based trust provider. This parameter is required when the
     * provider type is <code>user</code>.</p>
     */
    inline const UserTrustProviderType& GetUserTrustProviderType() const{ return m_userTrustProviderType; }
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }
    inline void SetUserTrustProviderType(const UserTrustProviderType& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }
    inline void SetUserTrustProviderType(UserTrustProviderType&& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithUserTrustProviderType(const UserTrustProviderType& value) { SetUserTrustProviderType(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithUserTrustProviderType(UserTrustProviderType&& value) { SetUserTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device-based trust provider. This parameter is required when the
     * provider type is <code>device</code>.</p>
     */
    inline const DeviceTrustProviderType& GetDeviceTrustProviderType() const{ return m_deviceTrustProviderType; }
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }
    inline void SetDeviceTrustProviderType(const DeviceTrustProviderType& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType&& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceTrustProviderType(const DeviceTrustProviderType& value) { SetDeviceTrustProviderType(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceTrustProviderType(DeviceTrustProviderType&& value) { SetDeviceTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a OpenID Connect-compatible user-identity trust provider.
     * This parameter is required when the provider type is <code>user</code>.</p>
     */
    inline const CreateVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const{ return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    inline void SetOidcOptions(const CreateVerifiedAccessTrustProviderOidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }
    inline void SetOidcOptions(CreateVerifiedAccessTrustProviderOidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithOidcOptions(const CreateVerifiedAccessTrustProviderOidcOptions& value) { SetOidcOptions(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithOidcOptions(CreateVerifiedAccessTrustProviderOidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a device-based trust provider. This parameter is required
     * when the provider type is <code>device</code>.</p>
     */
    inline const CreateVerifiedAccessTrustProviderDeviceOptions& GetDeviceOptions() const{ return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    inline void SetDeviceOptions(const CreateVerifiedAccessTrustProviderDeviceOptions& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = value; }
    inline void SetDeviceOptions(CreateVerifiedAccessTrustProviderDeviceOptions&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceOptions(const CreateVerifiedAccessTrustProviderDeviceOptions& value) { SetDeviceOptions(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceOptions(CreateVerifiedAccessTrustProviderDeviceOptions&& value) { SetDeviceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const{ return m_policyReferenceName; }
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }
    inline void SetPolicyReferenceName(const Aws::String& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = value; }
    inline void SetPolicyReferenceName(Aws::String&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::move(value); }
    inline void SetPolicyReferenceName(const char* value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName.assign(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(const Aws::String& value) { SetPolicyReferenceName(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(Aws::String&& value) { SetPolicyReferenceName(std::move(value)); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(const char* value) { SetPolicyReferenceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the Verified Access trust provider.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVerifiedAccessTrustProviderRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationRequest& GetSseSpecification() const{ return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationRequest& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationRequest&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithSseSpecification(const VerifiedAccessSseSpecificationRequest& value) { SetSseSpecification(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithSseSpecification(VerifiedAccessSseSpecificationRequest&& value) { SetSseSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const CreateVerifiedAccessNativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const{ return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    inline void SetNativeApplicationOidcOptions(const CreateVerifiedAccessNativeApplicationOidcOptions& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = value; }
    inline void SetNativeApplicationOidcOptions(CreateVerifiedAccessNativeApplicationOidcOptions&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::move(value); }
    inline CreateVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(const CreateVerifiedAccessNativeApplicationOidcOptions& value) { SetNativeApplicationOidcOptions(value); return *this;}
    inline CreateVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(CreateVerifiedAccessNativeApplicationOidcOptions&& value) { SetNativeApplicationOidcOptions(std::move(value)); return *this;}
    ///@}
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

    VerifiedAccessSseSpecificationRequest m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    CreateVerifiedAccessNativeApplicationOidcOptions m_nativeApplicationOidcOptions;
    bool m_nativeApplicationOidcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
