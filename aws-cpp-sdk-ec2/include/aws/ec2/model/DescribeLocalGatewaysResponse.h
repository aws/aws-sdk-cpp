/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGateway.h>
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
  class DescribeLocalGatewaysResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewaysResponse();
    AWS_EC2_API DescribeLocalGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the local gateways.</p>
     */
    inline const Aws::Vector<LocalGateway>& GetLocalGateways() const{ return m_localGateways; }

    /**
     * <p>Information about the local gateways.</p>
     */
    inline void SetLocalGateways(const Aws::Vector<LocalGateway>& value) { m_localGateways = value; }

    /**
     * <p>Information about the local gateways.</p>
     */
    inline void SetLocalGateways(Aws::Vector<LocalGateway>&& value) { m_localGateways = std::move(value); }

    /**
     * <p>Information about the local gateways.</p>
     */
    inline DescribeLocalGatewaysResponse& WithLocalGateways(const Aws::Vector<LocalGateway>& value) { SetLocalGateways(value); return *this;}

    /**
     * <p>Information about the local gateways.</p>
     */
    inline DescribeLocalGatewaysResponse& WithLocalGateways(Aws::Vector<LocalGateway>&& value) { SetLocalGateways(std::move(value)); return *this;}

    /**
     * <p>Information about the local gateways.</p>
     */
    inline DescribeLocalGatewaysResponse& AddLocalGateways(const LocalGateway& value) { m_localGateways.push_back(value); return *this; }

    /**
     * <p>Information about the local gateways.</p>
     */
    inline DescribeLocalGatewaysResponse& AddLocalGateways(LocalGateway&& value) { m_localGateways.push_back(std::move(value)); return *this; }


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
    inline DescribeLocalGatewaysResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewaysResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewaysResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLocalGatewaysResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLocalGatewaysResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LocalGateway> m_localGateways;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
