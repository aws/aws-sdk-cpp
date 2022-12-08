/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TargetNetwork.h>
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
  class DescribeClientVpnTargetNetworksResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnTargetNetworksResponse();
    AWS_EC2_API DescribeClientVpnTargetNetworksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnTargetNetworksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the associated target networks.</p>
     */
    inline const Aws::Vector<TargetNetwork>& GetClientVpnTargetNetworks() const{ return m_clientVpnTargetNetworks; }

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline void SetClientVpnTargetNetworks(const Aws::Vector<TargetNetwork>& value) { m_clientVpnTargetNetworks = value; }

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline void SetClientVpnTargetNetworks(Aws::Vector<TargetNetwork>&& value) { m_clientVpnTargetNetworks = std::move(value); }

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& WithClientVpnTargetNetworks(const Aws::Vector<TargetNetwork>& value) { SetClientVpnTargetNetworks(value); return *this;}

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& WithClientVpnTargetNetworks(Aws::Vector<TargetNetwork>&& value) { SetClientVpnTargetNetworks(std::move(value)); return *this;}

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& AddClientVpnTargetNetworks(const TargetNetwork& value) { m_clientVpnTargetNetworks.push_back(value); return *this; }

    /**
     * <p>Information about the associated target networks.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& AddClientVpnTargetNetworks(TargetNetwork&& value) { m_clientVpnTargetNetworks.push_back(std::move(value)); return *this; }


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
    inline DescribeClientVpnTargetNetworksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnTargetNetworksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClientVpnTargetNetworksResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClientVpnTargetNetworksResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TargetNetwork> m_clientVpnTargetNetworks;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
