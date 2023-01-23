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
  class ExportClientVpnClientConfigurationResponse
  {
  public:
    AWS_EC2_API ExportClientVpnClientConfigurationResponse();
    AWS_EC2_API ExportClientVpnClientConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportClientVpnClientConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline const Aws::String& GetClientConfiguration() const{ return m_clientConfiguration; }

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline void SetClientConfiguration(const Aws::String& value) { m_clientConfiguration = value; }

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline void SetClientConfiguration(Aws::String&& value) { m_clientConfiguration = std::move(value); }

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline void SetClientConfiguration(const char* value) { m_clientConfiguration.assign(value); }

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline ExportClientVpnClientConfigurationResponse& WithClientConfiguration(const Aws::String& value) { SetClientConfiguration(value); return *this;}

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline ExportClientVpnClientConfigurationResponse& WithClientConfiguration(Aws::String&& value) { SetClientConfiguration(std::move(value)); return *this;}

    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline ExportClientVpnClientConfigurationResponse& WithClientConfiguration(const char* value) { SetClientConfiguration(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ExportClientVpnClientConfigurationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExportClientVpnClientConfigurationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientConfiguration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
