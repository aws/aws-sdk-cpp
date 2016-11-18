﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcClassicLink.h>

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
   * <p>Contains the output of DescribeVpcClassicLink.</p>
   */
  class AWS_EC2_API DescribeVpcClassicLinkResponse
  {
  public:
    DescribeVpcClassicLinkResponse();
    DescribeVpcClassicLinkResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcClassicLinkResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetVpcs(Aws::Vector<VpcClassicLink>&& value) { m_vpcs = value; }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& WithVpcs(const Aws::Vector<VpcClassicLink>& value) { SetVpcs(value); return *this;}

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& WithVpcs(Aws::Vector<VpcClassicLink>&& value) { SetVpcs(value); return *this;}

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& AddVpcs(const VpcClassicLink& value) { m_vpcs.push_back(value); return *this; }

    /**
     * <p>The ClassicLink status of one or more VPCs.</p>
     */
    inline DescribeVpcClassicLinkResponse& AddVpcs(VpcClassicLink&& value) { m_vpcs.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpcClassicLinkResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcClassicLinkResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<VpcClassicLink> m_vpcs;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws