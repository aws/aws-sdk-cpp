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
    AWS_EC2_API CreateVerifiedAccessTrustProviderRequest() = default;

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
    inline TrustProviderType GetTrustProviderType() const { return m_trustProviderType; }
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
    inline void SetTrustProviderType(TrustProviderType value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }
    inline CreateVerifiedAccessTrustProviderRequest& WithTrustProviderType(TrustProviderType value) { SetTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user-based trust provider. This parameter is required when the
     * provider type is <code>user</code>.</p>
     */
    inline UserTrustProviderType GetUserTrustProviderType() const { return m_userTrustProviderType; }
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }
    inline void SetUserTrustProviderType(UserTrustProviderType value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }
    inline CreateVerifiedAccessTrustProviderRequest& WithUserTrustProviderType(UserTrustProviderType value) { SetUserTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device-based trust provider. This parameter is required when the
     * provider type is <code>device</code>.</p>
     */
    inline DeviceTrustProviderType GetDeviceTrustProviderType() const { return m_deviceTrustProviderType; }
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }
    inline CreateVerifiedAccessTrustProviderRequest& WithDeviceTrustProviderType(DeviceTrustProviderType value) { SetDeviceTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a OpenID Connect-compatible user-identity trust provider.
     * This parameter is required when the provider type is <code>user</code>.</p>
     */
    inline const CreateVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const { return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    template<typename OidcOptionsT = CreateVerifiedAccessTrustProviderOidcOptions>
    void SetOidcOptions(OidcOptionsT&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::forward<OidcOptionsT>(value); }
    template<typename OidcOptionsT = CreateVerifiedAccessTrustProviderOidcOptions>
    CreateVerifiedAccessTrustProviderRequest& WithOidcOptions(OidcOptionsT&& value) { SetOidcOptions(std::forward<OidcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a device-based trust provider. This parameter is required
     * when the provider type is <code>device</code>.</p>
     */
    inline const CreateVerifiedAccessTrustProviderDeviceOptions& GetDeviceOptions() const { return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    template<typename DeviceOptionsT = CreateVerifiedAccessTrustProviderDeviceOptions>
    void SetDeviceOptions(DeviceOptionsT&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::forward<DeviceOptionsT>(value); }
    template<typename DeviceOptionsT = CreateVerifiedAccessTrustProviderDeviceOptions>
    CreateVerifiedAccessTrustProviderRequest& WithDeviceOptions(DeviceOptionsT&& value) { SetDeviceOptions(std::forward<DeviceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const { return m_policyReferenceName; }
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }
    template<typename PolicyReferenceNameT = Aws::String>
    void SetPolicyReferenceName(PolicyReferenceNameT&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::forward<PolicyReferenceNameT>(value); }
    template<typename PolicyReferenceNameT = Aws::String>
    CreateVerifiedAccessTrustProviderRequest& WithPolicyReferenceName(PolicyReferenceNameT&& value) { SetPolicyReferenceName(std::forward<PolicyReferenceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateVerifiedAccessTrustProviderRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the Verified Access trust provider.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVerifiedAccessTrustProviderRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVerifiedAccessTrustProviderRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVerifiedAccessTrustProviderRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationRequest& GetSseSpecification() const { return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationRequest>
    void SetSseSpecification(SseSpecificationT&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::forward<SseSpecificationT>(value); }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationRequest>
    CreateVerifiedAccessTrustProviderRequest& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const CreateVerifiedAccessNativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const { return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    template<typename NativeApplicationOidcOptionsT = CreateVerifiedAccessNativeApplicationOidcOptions>
    void SetNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::forward<NativeApplicationOidcOptionsT>(value); }
    template<typename NativeApplicationOidcOptionsT = CreateVerifiedAccessNativeApplicationOidcOptions>
    CreateVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { SetNativeApplicationOidcOptions(std::forward<NativeApplicationOidcOptionsT>(value)); return *this;}
    ///@}
  private:

    TrustProviderType m_trustProviderType{TrustProviderType::NOT_SET};
    bool m_trustProviderTypeHasBeenSet = false;

    UserTrustProviderType m_userTrustProviderType{UserTrustProviderType::NOT_SET};
    bool m_userTrustProviderTypeHasBeenSet = false;

    DeviceTrustProviderType m_deviceTrustProviderType{DeviceTrustProviderType::NOT_SET};
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    VerifiedAccessSseSpecificationRequest m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    CreateVerifiedAccessNativeApplicationOidcOptions m_nativeApplicationOidcOptions;
    bool m_nativeApplicationOidcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
