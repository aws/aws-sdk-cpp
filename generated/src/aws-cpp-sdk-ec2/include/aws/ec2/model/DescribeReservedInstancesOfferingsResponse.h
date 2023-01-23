/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstancesOffering.h>
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
  /**
   * <p>Contains the output of DescribeReservedInstancesOfferings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferingsResult">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse();
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline const Aws::Vector<ReservedInstancesOffering>& GetReservedInstancesOfferings() const{ return m_reservedInstancesOfferings; }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline void SetReservedInstancesOfferings(const Aws::Vector<ReservedInstancesOffering>& value) { m_reservedInstancesOfferings = value; }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline void SetReservedInstancesOfferings(Aws::Vector<ReservedInstancesOffering>&& value) { m_reservedInstancesOfferings = std::move(value); }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithReservedInstancesOfferings(const Aws::Vector<ReservedInstancesOffering>& value) { SetReservedInstancesOfferings(value); return *this;}

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithReservedInstancesOfferings(Aws::Vector<ReservedInstancesOffering>&& value) { SetReservedInstancesOfferings(std::move(value)); return *this;}

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& AddReservedInstancesOfferings(const ReservedInstancesOffering& value) { m_reservedInstancesOfferings.push_back(value); return *this; }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& AddReservedInstancesOfferings(ReservedInstancesOffering&& value) { m_reservedInstancesOfferings.push_back(std::move(value)); return *this; }


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
    inline DescribeReservedInstancesOfferingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedInstancesOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedInstancesOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReservedInstancesOffering> m_reservedInstancesOfferings;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
