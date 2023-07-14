﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnGateway.h>
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
  /**
   * <p>Contains the output of DescribeVpnGateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGatewaysResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpnGatewaysResponse
  {
  public:
    DescribeVpnGatewaysResponse();
    DescribeVpnGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpnGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline const Aws::Vector<VpnGateway>& GetVpnGateways() const{ return m_vpnGateways; }

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline void SetVpnGateways(const Aws::Vector<VpnGateway>& value) { m_vpnGateways = value; }

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline void SetVpnGateways(Aws::Vector<VpnGateway>&& value) { m_vpnGateways = std::move(value); }

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysResponse& WithVpnGateways(const Aws::Vector<VpnGateway>& value) { SetVpnGateways(value); return *this;}

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysResponse& WithVpnGateways(Aws::Vector<VpnGateway>&& value) { SetVpnGateways(std::move(value)); return *this;}

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysResponse& AddVpnGateways(const VpnGateway& value) { m_vpnGateways.push_back(value); return *this; }

    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysResponse& AddVpnGateways(VpnGateway&& value) { m_vpnGateways.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVpnGatewaysResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpnGatewaysResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VpnGateway> m_vpnGateways;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
