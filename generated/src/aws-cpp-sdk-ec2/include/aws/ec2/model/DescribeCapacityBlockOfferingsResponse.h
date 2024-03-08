/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlockOffering.h>
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
  class DescribeCapacityBlockOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeCapacityBlockOfferingsResponse();
    AWS_EC2_API DescribeCapacityBlockOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline const Aws::Vector<CapacityBlockOffering>& GetCapacityBlockOfferings() const{ return m_capacityBlockOfferings; }

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline void SetCapacityBlockOfferings(const Aws::Vector<CapacityBlockOffering>& value) { m_capacityBlockOfferings = value; }

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline void SetCapacityBlockOfferings(Aws::Vector<CapacityBlockOffering>&& value) { m_capacityBlockOfferings = std::move(value); }

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& WithCapacityBlockOfferings(const Aws::Vector<CapacityBlockOffering>& value) { SetCapacityBlockOfferings(value); return *this;}

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& WithCapacityBlockOfferings(Aws::Vector<CapacityBlockOffering>&& value) { SetCapacityBlockOfferings(std::move(value)); return *this;}

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& AddCapacityBlockOfferings(const CapacityBlockOffering& value) { m_capacityBlockOfferings.push_back(value); return *this; }

    /**
     * <p>The recommended Capacity Block offering for the dates specified.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& AddCapacityBlockOfferings(CapacityBlockOffering&& value) { m_capacityBlockOfferings.push_back(std::move(value)); return *this; }


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
    inline DescribeCapacityBlockOfferingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityBlockOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCapacityBlockOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCapacityBlockOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CapacityBlockOffering> m_capacityBlockOfferings;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
