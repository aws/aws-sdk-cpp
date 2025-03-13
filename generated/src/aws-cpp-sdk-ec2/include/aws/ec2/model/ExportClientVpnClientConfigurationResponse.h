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
    AWS_EC2_API ExportClientVpnClientConfigurationResponse() = default;
    AWS_EC2_API ExportClientVpnClientConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportClientVpnClientConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The contents of the Client VPN endpoint configuration file.</p>
     */
    inline const Aws::String& GetClientConfiguration() const { return m_clientConfiguration; }
    template<typename ClientConfigurationT = Aws::String>
    void SetClientConfiguration(ClientConfigurationT&& value) { m_clientConfigurationHasBeenSet = true; m_clientConfiguration = std::forward<ClientConfigurationT>(value); }
    template<typename ClientConfigurationT = Aws::String>
    ExportClientVpnClientConfigurationResponse& WithClientConfiguration(ClientConfigurationT&& value) { SetClientConfiguration(std::forward<ClientConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportClientVpnClientConfigurationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientConfiguration;
    bool m_clientConfigurationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
