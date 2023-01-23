/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcClassicLink.h>
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
  class DescribeVpcClassicLinkResponse
  {
  public:
    AWS_EC2_API DescribeVpcClassicLinkResponse();
    AWS_EC2_API DescribeVpcClassicLinkResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcClassicLinkResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline const Aws::Vector<VpcClassicLink>& GetVpcs() const{ return m_vpcs; }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline void SetVpcs(const Aws::Vector<VpcClassicLink>& value) { m_vpcs = value; }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline void SetVpcs(Aws::Vector<VpcClassicLink>&& value) { m_vpcs = std::move(value); }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& WithVpcs(const Aws::Vector<VpcClassicLink>& value) { SetVpcs(value); return *this;}

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& WithVpcs(Aws::Vector<VpcClassicLink>&& value) { SetVpcs(std::move(value)); return *this;}

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& AddVpcs(const VpcClassicLink& value) { m_vpcs.push_back(value); return *this; }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& AddVpcs(VpcClassicLink&& value) { m_vpcs.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVpcClassicLinkResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcClassicLinkResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VpcClassicLink> m_vpcs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
