/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/MovingAddressStatus.h>
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
  class DescribeMovingAddressesResponse
  {
  public:
    AWS_EC2_API DescribeMovingAddressesResponse();
    AWS_EC2_API DescribeMovingAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeMovingAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline const Aws::Vector<MovingAddressStatus>& GetMovingAddressStatuses() const{ return m_movingAddressStatuses; }

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline void SetMovingAddressStatuses(const Aws::Vector<MovingAddressStatus>& value) { m_movingAddressStatuses = value; }

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline void SetMovingAddressStatuses(Aws::Vector<MovingAddressStatus>&& value) { m_movingAddressStatuses = std::move(value); }

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline DescribeMovingAddressesResponse& WithMovingAddressStatuses(const Aws::Vector<MovingAddressStatus>& value) { SetMovingAddressStatuses(value); return *this;}

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline DescribeMovingAddressesResponse& WithMovingAddressStatuses(Aws::Vector<MovingAddressStatus>&& value) { SetMovingAddressStatuses(std::move(value)); return *this;}

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline DescribeMovingAddressesResponse& AddMovingAddressStatuses(const MovingAddressStatus& value) { m_movingAddressStatuses.push_back(value); return *this; }

    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline DescribeMovingAddressesResponse& AddMovingAddressStatuses(MovingAddressStatus&& value) { m_movingAddressStatuses.push_back(std::move(value)); return *this; }


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
    inline DescribeMovingAddressesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeMovingAddressesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeMovingAddressesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeMovingAddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeMovingAddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MovingAddressStatus> m_movingAddressStatuses;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
