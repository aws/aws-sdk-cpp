/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class GetVpnConnectionDeviceSampleConfigurationResponse
  {
  public:
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse() = default;
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceSampleConfiguration() const { return m_vpnConnectionDeviceSampleConfiguration; }
    template<typename VpnConnectionDeviceSampleConfigurationT = Aws::String>
    void SetVpnConnectionDeviceSampleConfiguration(VpnConnectionDeviceSampleConfigurationT&& value) { m_vpnConnectionDeviceSampleConfigurationHasBeenSet = true; m_vpnConnectionDeviceSampleConfiguration = std::forward<VpnConnectionDeviceSampleConfigurationT>(value); }
    template<typename VpnConnectionDeviceSampleConfigurationT = Aws::String>
    GetVpnConnectionDeviceSampleConfigurationResponse& WithVpnConnectionDeviceSampleConfiguration(VpnConnectionDeviceSampleConfigurationT&& value) { SetVpnConnectionDeviceSampleConfiguration(std::forward<VpnConnectionDeviceSampleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetVpnConnectionDeviceSampleConfigurationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionDeviceSampleConfiguration;
    bool m_vpnConnectionDeviceSampleConfigurationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
