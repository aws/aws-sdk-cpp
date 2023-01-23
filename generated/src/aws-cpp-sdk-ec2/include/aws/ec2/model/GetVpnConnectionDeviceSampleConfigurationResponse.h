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
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse();
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceSampleConfiguration() const{ return m_vpnConnectionDeviceSampleConfiguration; }

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline void SetVpnConnectionDeviceSampleConfiguration(const Aws::String& value) { m_vpnConnectionDeviceSampleConfiguration = value; }

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline void SetVpnConnectionDeviceSampleConfiguration(Aws::String&& value) { m_vpnConnectionDeviceSampleConfiguration = std::move(value); }

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline void SetVpnConnectionDeviceSampleConfiguration(const char* value) { m_vpnConnectionDeviceSampleConfiguration.assign(value); }

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationResponse& WithVpnConnectionDeviceSampleConfiguration(const Aws::String& value) { SetVpnConnectionDeviceSampleConfiguration(value); return *this;}

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationResponse& WithVpnConnectionDeviceSampleConfiguration(Aws::String&& value) { SetVpnConnectionDeviceSampleConfiguration(std::move(value)); return *this;}

    /**
     * <p>Sample configuration file for the specified customer gateway device.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationResponse& WithVpnConnectionDeviceSampleConfiguration(const char* value) { SetVpnConnectionDeviceSampleConfiguration(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetVpnConnectionDeviceSampleConfigurationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetVpnConnectionDeviceSampleConfigurationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_vpnConnectionDeviceSampleConfiguration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
