﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InternetGateway.h>
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
  class AWS_EC2_API DescribeInternetGatewaysResponse
  {
  public:
    DescribeInternetGatewaysResponse();
    DescribeInternetGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInternetGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline const Aws::Vector<InternetGateway>& GetInternetGateways() const{ return m_internetGateways; }

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline void SetInternetGateways(const Aws::Vector<InternetGateway>& value) { m_internetGateways = value; }

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline void SetInternetGateways(Aws::Vector<InternetGateway>&& value) { m_internetGateways = std::move(value); }

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline DescribeInternetGatewaysResponse& WithInternetGateways(const Aws::Vector<InternetGateway>& value) { SetInternetGateways(value); return *this;}

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline DescribeInternetGatewaysResponse& WithInternetGateways(Aws::Vector<InternetGateway>&& value) { SetInternetGateways(std::move(value)); return *this;}

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline DescribeInternetGatewaysResponse& AddInternetGateways(const InternetGateway& value) { m_internetGateways.push_back(value); return *this; }

    /**
     * <p>Information about one or more internet gateways.</p>
     */
    inline DescribeInternetGatewaysResponse& AddInternetGateways(InternetGateway&& value) { m_internetGateways.push_back(std::move(value)); return *this; }


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
    inline DescribeInternetGatewaysResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeInternetGatewaysResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeInternetGatewaysResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInternetGatewaysResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInternetGatewaysResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InternetGateway> m_internetGateways;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
