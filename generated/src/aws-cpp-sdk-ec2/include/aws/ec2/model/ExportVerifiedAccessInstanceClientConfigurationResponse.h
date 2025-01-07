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
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse();
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportVerifiedAccessInstanceClientConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceId = value; }
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceId = std::move(value); }
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceId.assign(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device trust providers.</p>
     */
    inline const Aws::Vector<DeviceTrustProviderType>& GetDeviceTrustProviders() const{ return m_deviceTrustProviders; }
    inline void SetDeviceTrustProviders(const Aws::Vector<DeviceTrustProviderType>& value) { m_deviceTrustProviders = value; }
    inline void SetDeviceTrustProviders(Aws::Vector<DeviceTrustProviderType>&& value) { m_deviceTrustProviders = std::move(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithDeviceTrustProviders(const Aws::Vector<DeviceTrustProviderType>& value) { SetDeviceTrustProviders(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithDeviceTrustProviders(Aws::Vector<DeviceTrustProviderType>&& value) { SetDeviceTrustProviders(std::move(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& AddDeviceTrustProviders(const DeviceTrustProviderType& value) { m_deviceTrustProviders.push_back(value); return *this; }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& AddDeviceTrustProviders(DeviceTrustProviderType&& value) { m_deviceTrustProviders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user identity trust provider.</p>
     */
    inline const VerifiedAccessInstanceUserTrustProviderClientConfiguration& GetUserTrustProvider() const{ return m_userTrustProvider; }
    inline void SetUserTrustProvider(const VerifiedAccessInstanceUserTrustProviderClientConfiguration& value) { m_userTrustProvider = value; }
    inline void SetUserTrustProvider(VerifiedAccessInstanceUserTrustProviderClientConfiguration&& value) { m_userTrustProvider = std::move(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithUserTrustProvider(const VerifiedAccessInstanceUserTrustProviderClientConfiguration& value) { SetUserTrustProvider(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithUserTrustProvider(VerifiedAccessInstanceUserTrustProviderClientConfiguration&& value) { SetUserTrustProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open VPN configuration.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>& GetOpenVpnConfigurations() const{ return m_openVpnConfigurations; }
    inline void SetOpenVpnConfigurations(const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>& value) { m_openVpnConfigurations = value; }
    inline void SetOpenVpnConfigurations(Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>&& value) { m_openVpnConfigurations = std::move(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithOpenVpnConfigurations(const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>& value) { SetOpenVpnConfigurations(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithOpenVpnConfigurations(Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration>&& value) { SetOpenVpnConfigurations(std::move(value)); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& AddOpenVpnConfigurations(const VerifiedAccessInstanceOpenVpnClientConfiguration& value) { m_openVpnConfigurations.push_back(value); return *this; }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& AddOpenVpnConfigurations(VerifiedAccessInstanceOpenVpnClientConfiguration&& value) { m_openVpnConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ExportVerifiedAccessInstanceClientConfigurationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;

    Aws::String m_verifiedAccessInstanceId;

    Aws::String m_region;

    Aws::Vector<DeviceTrustProviderType> m_deviceTrustProviders;

    VerifiedAccessInstanceUserTrustProviderClientConfiguration m_userTrustProvider;

    Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfiguration> m_openVpnConfigurations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
