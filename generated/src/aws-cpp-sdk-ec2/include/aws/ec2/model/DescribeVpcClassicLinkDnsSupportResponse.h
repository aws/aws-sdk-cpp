﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClassicLinkDnsSupport.h>
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
  class DescribeVpcClassicLinkDnsSupportResponse
  {
  public:
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse();
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline const Aws::Vector<ClassicLinkDnsSupport>& GetVpcs() const{ return m_vpcs; }
    inline void SetVpcs(const Aws::Vector<ClassicLinkDnsSupport>& value) { m_vpcs = value; }
    inline void SetVpcs(Aws::Vector<ClassicLinkDnsSupport>&& value) { m_vpcs = std::move(value); }
    inline DescribeVpcClassicLinkDnsSupportResponse& WithVpcs(const Aws::Vector<ClassicLinkDnsSupport>& value) { SetVpcs(value); return *this;}
    inline DescribeVpcClassicLinkDnsSupportResponse& WithVpcs(Aws::Vector<ClassicLinkDnsSupport>&& value) { SetVpcs(std::move(value)); return *this;}
    inline DescribeVpcClassicLinkDnsSupportResponse& AddVpcs(const ClassicLinkDnsSupport& value) { m_vpcs.push_back(value); return *this; }
    inline DescribeVpcClassicLinkDnsSupportResponse& AddVpcs(ClassicLinkDnsSupport&& value) { m_vpcs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpcClassicLinkDnsSupportResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpcClassicLinkDnsSupportResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ClassicLinkDnsSupport> m_vpcs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
