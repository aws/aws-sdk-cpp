/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPrefixListReference.h>
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
  class GetTransitGatewayPrefixListReferencesResponse
  {
  public:
    AWS_EC2_API GetTransitGatewayPrefixListReferencesResponse();
    AWS_EC2_API GetTransitGatewayPrefixListReferencesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayPrefixListReferencesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the prefix list references.</p>
     */
    inline const Aws::Vector<TransitGatewayPrefixListReference>& GetTransitGatewayPrefixListReferences() const{ return m_transitGatewayPrefixListReferences; }

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline void SetTransitGatewayPrefixListReferences(const Aws::Vector<TransitGatewayPrefixListReference>& value) { m_transitGatewayPrefixListReferences = value; }

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline void SetTransitGatewayPrefixListReferences(Aws::Vector<TransitGatewayPrefixListReference>&& value) { m_transitGatewayPrefixListReferences = std::move(value); }

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& WithTransitGatewayPrefixListReferences(const Aws::Vector<TransitGatewayPrefixListReference>& value) { SetTransitGatewayPrefixListReferences(value); return *this;}

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& WithTransitGatewayPrefixListReferences(Aws::Vector<TransitGatewayPrefixListReference>&& value) { SetTransitGatewayPrefixListReferences(std::move(value)); return *this;}

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& AddTransitGatewayPrefixListReferences(const TransitGatewayPrefixListReference& value) { m_transitGatewayPrefixListReferences.push_back(value); return *this; }

    /**
     * <p>Information about the prefix list references.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& AddTransitGatewayPrefixListReferences(TransitGatewayPrefixListReference&& value) { m_transitGatewayPrefixListReferences.push_back(std::move(value)); return *this; }


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
    inline GetTransitGatewayPrefixListReferencesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetTransitGatewayPrefixListReferencesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetTransitGatewayPrefixListReferencesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTransitGatewayPrefixListReferencesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayPrefixListReference> m_transitGatewayPrefixListReferences;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
