/*
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
#include <aws/ec2/model/ReservedInstancesOffering.h>

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
   * <p>Contains the output of DescribeReservedInstancesOfferings.</p>
   */
  class AWS_EC2_API DescribeReservedInstancesOfferingsResponse
  {
  public:
    DescribeReservedInstancesOfferingsResponse();
    DescribeReservedInstancesOfferingsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedInstancesOfferingsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetReservedInstancesOfferings(Aws::Vector<ReservedInstancesOffering>&& value) { m_reservedInstancesOfferings = value; }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithReservedInstancesOfferings(const Aws::Vector<ReservedInstancesOffering>& value) { SetReservedInstancesOfferings(value); return *this;}

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithReservedInstancesOfferings(Aws::Vector<ReservedInstancesOffering>&& value) { SetReservedInstancesOfferings(value); return *this;}

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& AddReservedInstancesOfferings(const ReservedInstancesOffering& value) { m_reservedInstancesOfferings.push_back(value); return *this; }

    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& AddReservedInstancesOfferings(ReservedInstancesOffering&& value) { m_reservedInstancesOfferings.push_back(value); return *this; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

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
    inline DescribeReservedInstancesOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeReservedInstancesOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeReservedInstancesOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedInstancesOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ReservedInstancesOffering> m_reservedInstancesOfferings;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws