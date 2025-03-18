/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessInstanceUserTrustProviderClientConfiguration.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DeviceTrustProviderType.h>
#include <aws/ec2/model/VerifiedAccessInstanceOpenVpnClientConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ExportVerifiedAccessInstanceClientConfigurationResponse
  {
  public:
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse() = default;
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device trust providers.</p>
     */
    inline const Aws::Vector<DeviceTrustProviderType>& GetDeviceTrustProviders() const { return m_deviceTrustProviders; }
    template<typename DeviceTrustProvidersT = Aws::Vector<DeviceTrustProviderType>>
    void SetDeviceTrustProviders(DeviceTrustProvidersT&& value) { m_deviceTrustProvidersHasBeenSet = true; m_deviceTrustProviders = std::forward<DeviceTrustProvidersT>(value); }
    template<typename DeviceTrustProvidersT = Aws::Vector<DeviceTrustProviderType>>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithDeviceTrustProviders(DeviceTrustProvidersT&& value) { SetDeviceTrustProviders(std::forward<DeviceTrustProvidersT>(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& AddDeviceTrustProviders(DeviceTrustProviderType value) { m_deviceTrustProvidersHasBeenSet = true; m_deviceTrustProviders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user identity trust provider.</p>
     */
    inline const VerifiedAccessInstanceUserTrustProviderClientConfiguration& GetUserTrustProvider() const { return m_userTrustProvider; }
    template<typename UserTrustProviderT = VerifiedAccessInstanceUserTrustProviderClientConfiguration>
    void SetUserTrustProvider(UserTrustProviderT&& value) { m_userTrustProviderHasBeenSet = true; m_userTrustProvider = std::forward<UserTrustProviderT>(value); }
    template<typename UserTrustProviderT = VerifiedAccessInstanceUserTrustProviderClientConfiguration>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithUserTrustProvider(UserTrustProviderT&& value) { SetUserTrustProvider(std::forward<UserTrustProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open VPN configuration.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>& GetOpenVpnConfigurations() const { return m_openVpnConfigurations; }
    template<typename OpenVpnConfigurationsT = Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>>
    void SetOpenVpnConfigurations(OpenVpnConfigurationsT&& value) { m_openVpnConfigurationsHasBeenSet = true; m_openVpnConfigurations = std::forward<OpenVpnConfigurationsT>(value); }
    template<typename OpenVpnConfigurationsT = Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithOpenVpnConfigurations(OpenVpnConfigurationsT&& value) { SetOpenVpnConfigurations(std::forward<OpenVpnConfigurationsT>(value)); return *this;}
    template<typename OpenVpnConfigurationsT = VerifiedAccessInstanceOpenVpnClientConfiguration>
    ExportVerifiedAccessInstanceClientConfigurationResponse& AddOpenVpnConfigurations(OpenVpnConfigurationsT&& value) { m_openVpnConfigurationsHasBeenSet = true; m_openVpnConfigurations.emplace_back(std::forward<OpenVpnConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportVerifiedAccessInstanceClientConfigurationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<DeviceTrustProviderType> m_deviceTrustProviders;
    bool m_deviceTrustProvidersHasBeenSet = false;

    VerifiedAccessInstanceUserTrustProviderClientConfiguration m_userTrustProvider;
    bool m_userTrustProviderHasBeenSet = false;

    Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration> m_openVpnConfigurations;
    bool m_openVpnConfigurationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
