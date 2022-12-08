/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceTypeOffering.h>
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
  class DescribeInstanceTypeOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeInstanceTypeOfferingsResponse();
    AWS_EC2_API DescribeInstanceTypeOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceTypeOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The instance types offered.</p>
     */
    inline const Aws::Vector<InstanceTypeOffering>& GetInstanceTypeOfferings() const{ return m_instanceTypeOfferings; }

    /**
     * <p>The instance types offered.</p>
     */
    inline void SetInstanceTypeOfferings(const Aws::Vector<InstanceTypeOffering>& value) { m_instanceTypeOfferings = value; }

    /**
     * <p>The instance types offered.</p>
     */
    inline void SetInstanceTypeOfferings(Aws::Vector<InstanceTypeOffering>&& value) { m_instanceTypeOfferings = std::move(value); }

    /**
     * <p>The instance types offered.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& WithInstanceTypeOfferings(const Aws::Vector<InstanceTypeOffering>& value) { SetInstanceTypeOfferings(value); return *this;}

    /**
     * <p>The instance types offered.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& WithInstanceTypeOfferings(Aws::Vector<InstanceTypeOffering>&& value) { SetInstanceTypeOfferings(std::move(value)); return *this;}

    /**
     * <p>The instance types offered.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& AddInstanceTypeOfferings(const InstanceTypeOffering& value) { m_instanceTypeOfferings.push_back(value); return *this; }

    /**
     * <p>The instance types offered.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& AddInstanceTypeOfferings(InstanceTypeOffering&& value) { m_instanceTypeOfferings.push_back(std::move(value)); return *this; }


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
    inline DescribeInstanceTypeOfferingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeInstanceTypeOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceTypeOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceTypeOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceTypeOffering> m_instanceTypeOfferings;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
