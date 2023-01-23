/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DhcpOptions.h>
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
  class CreateDhcpOptionsResponse
  {
  public:
    AWS_EC2_API CreateDhcpOptionsResponse();
    AWS_EC2_API CreateDhcpOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateDhcpOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A set of DHCP options.</p>
     */
    inline const DhcpOptions& GetDhcpOptions() const{ return m_dhcpOptions; }

    /**
     * <p>A set of DHCP options.</p>
     */
    inline void SetDhcpOptions(const DhcpOptions& value) { m_dhcpOptions = value; }

    /**
     * <p>A set of DHCP options.</p>
     */
    inline void SetDhcpOptions(DhcpOptions&& value) { m_dhcpOptions = std::move(value); }

    /**
     * <p>A set of DHCP options.</p>
     */
    inline CreateDhcpOptionsResponse& WithDhcpOptions(const DhcpOptions& value) { SetDhcpOptions(value); return *this;}

    /**
     * <p>A set of DHCP options.</p>
     */
    inline CreateDhcpOptionsResponse& WithDhcpOptions(DhcpOptions&& value) { SetDhcpOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDhcpOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDhcpOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DhcpOptions m_dhcpOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
