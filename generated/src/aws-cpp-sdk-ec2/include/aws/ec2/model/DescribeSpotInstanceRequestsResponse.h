/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotInstanceRequest.h>
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
   * <p>Contains the output of DescribeSpotInstanceRequests.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequestsResult">AWS
   * API Reference</a></p>
   */
  class DescribeSpotInstanceRequestsResponse
  {
  public:
    AWS_EC2_API DescribeSpotInstanceRequestsResponse();
    AWS_EC2_API DescribeSpotInstanceRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotInstanceRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance requests.</p>
     */
    inline const Aws::Vector<SpotInstanceRequest>& GetSpotInstanceRequests() const{ return m_spotInstanceRequests; }
    inline void SetSpotInstanceRequests(const Aws::Vector<SpotInstanceRequest>& value) { m_spotInstanceRequests = value; }
    inline void SetSpotInstanceRequests(Aws::Vector<SpotInstanceRequest>&& value) { m_spotInstanceRequests = std::move(value); }
    inline DescribeSpotInstanceRequestsResponse& WithSpotInstanceRequests(const Aws::Vector<SpotInstanceRequest>& value) { SetSpotInstanceRequests(value); return *this;}
    inline DescribeSpotInstanceRequestsResponse& WithSpotInstanceRequests(Aws::Vector<SpotInstanceRequest>&& value) { SetSpotInstanceRequests(std::move(value)); return *this;}
    inline DescribeSpotInstanceRequestsResponse& AddSpotInstanceRequests(const SpotInstanceRequest& value) { m_spotInstanceRequests.push_back(value); return *this; }
    inline DescribeSpotInstanceRequestsResponse& AddSpotInstanceRequests(SpotInstanceRequest&& value) { m_spotInstanceRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeSpotInstanceRequestsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSpotInstanceRequestsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSpotInstanceRequestsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSpotInstanceRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSpotInstanceRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpotInstanceRequest> m_spotInstanceRequests;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
