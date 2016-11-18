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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClassicLinkDnsSupport.h>

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
   * <p>Contains the output of DescribeVpcClassicLinkDnsSupport.</p>
   */
  class AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse
  {
  public:
    DescribeVpcClassicLinkDnsSupportResponse();
    DescribeVpcClassicLinkDnsSupportResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcClassicLinkDnsSupportResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline const Aws::Vector<ClassicLinkDnsSupport>& GetVpcs() const{ return m_vpcs; }

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline void SetVpcs(const Aws::Vector<ClassicLinkDnsSupport>& value) { m_vpcs = value; }

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline void SetVpcs(Aws::Vector<ClassicLinkDnsSupport>&& value) { m_vpcs = value; }

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& WithVpcs(const Aws::Vector<ClassicLinkDnsSupport>& value) { SetVpcs(value); return *this;}

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& WithVpcs(Aws::Vector<ClassicLinkDnsSupport>&& value) { SetVpcs(value); return *this;}

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& AddVpcs(const ClassicLinkDnsSupport& value) { m_vpcs.push_back(value); return *this; }

    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& AddVpcs(ClassicLinkDnsSupport&& value) { m_vpcs.push_back(value); return *this; }

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpcClassicLinkDnsSupportResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcClassicLinkDnsSupportResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ClassicLinkDnsSupport> m_vpcs;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws