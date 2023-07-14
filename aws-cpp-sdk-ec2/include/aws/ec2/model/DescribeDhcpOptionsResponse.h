﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DhcpOptions.h>
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
  class AWS_EC2_API DescribeDhcpOptionsResponse
  {
  public:
    DescribeDhcpOptionsResponse();
    DescribeDhcpOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDhcpOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline const Aws::Vector<DhcpOptions>& GetDhcpOptions() const{ return m_dhcpOptions; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline void SetDhcpOptions(const Aws::Vector<DhcpOptions>& value) { m_dhcpOptions = value; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline void SetDhcpOptions(Aws::Vector<DhcpOptions>&& value) { m_dhcpOptions = std::move(value); }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& WithDhcpOptions(const Aws::Vector<DhcpOptions>& value) { SetDhcpOptions(value); return *this;}

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& WithDhcpOptions(Aws::Vector<DhcpOptions>&& value) { SetDhcpOptions(std::move(value)); return *this;}

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& AddDhcpOptions(const DhcpOptions& value) { m_dhcpOptions.push_back(value); return *this; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& AddDhcpOptions(DhcpOptions&& value) { m_dhcpOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDhcpOptionsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDhcpOptionsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDhcpOptionsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDhcpOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDhcpOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DhcpOptions> m_dhcpOptions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
