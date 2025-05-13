/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderOidcOptions.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderDeviceOptions.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessNativeApplicationOidcOptions.h>
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
    AWS_EC2_API ModifyVerifiedAccessTrustProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessTrustProvider"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const { return m_verifiedAccessTrustProviderId; }
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }
    template<typename VerifiedAccessTrustProviderIdT = Aws::String>
    void SetVerifiedAccessTrustProviderId(VerifiedAccessTrustProviderIdT&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::forward<VerifiedAccessTrustProviderIdT>(value); }
    template<typename VerifiedAccessTrustProviderIdT = Aws::String>
    ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(VerifiedAccessTrustProviderIdT&& value) { SetVerifiedAccessTrustProviderId(std::forward<VerifiedAccessTrustProviderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an OpenID Connect-compatible user-identity trust
     * provider.</p>
     */
    inline const ModifyVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const { return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    template<typename OidcOptionsT = ModifyVerifiedAccessTrustProviderOidcOptions>
    void SetOidcOptions(OidcOptionsT&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::forward<OidcOptionsT>(value); }
    template<typename OidcOptionsT = ModifyVerifiedAccessTrustProviderOidcOptions>
    ModifyVerifiedAccessTrustProviderRequest& WithOidcOptions(OidcOptionsT&& value) { SetOidcOptions(std::forward<OidcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a device-based trust provider. This parameter is required
     * when the provider type is <code>device</code>.</p>
     */
    inline const ModifyVerifiedAccessTrustProviderDeviceOptions& GetDeviceOptions() const { return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    template<typename DeviceOptionsT = ModifyVerifiedAccessTrustProviderDeviceOptions>
    void SetDeviceOptions(DeviceOptionsT&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::forward<DeviceOptionsT>(value); }
    template<typename DeviceOptionsT = ModifyVerifiedAccessTrustProviderDeviceOptions>
    ModifyVerifiedAccessTrustProviderRequest& WithDeviceOptions(DeviceOptionsT&& value) { SetDeviceOptions(std::forward<DeviceOptionsT>(value)); return *this;}
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
    ModifyVerifiedAccessTrustProviderRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ModifyVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    ModifyVerifiedAccessTrustProviderRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    ModifyVerifiedAccessTrustProviderRequest& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const ModifyVerifiedAccessNativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const { return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    template<typename NativeApplicationOidcOptionsT = ModifyVerifiedAccessNativeApplicationOidcOptions>
    void SetNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::forward<NativeApplicationOidcOptionsT>(value); }
    template<typename NativeApplicationOidcOptionsT = ModifyVerifiedAccessNativeApplicationOidcOptions>
    ModifyVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { SetNativeApplicationOidcOptions(std::forward<NativeApplicationOidcOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    ModifyVerifiedAccessTrustProviderOidcOptions m_oidcOptions;
    bool m_oidcOptionsHasBeenSet = false;

    ModifyVerifiedAccessTrustProviderDeviceOptions m_deviceOptions;
    bool m_deviceOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    VerifiedAccessSseSpecificationRequest m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    ModifyVerifiedAccessNativeApplicationOidcOptions m_nativeApplicationOidcOptions;
    bool m_nativeApplicationOidcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
