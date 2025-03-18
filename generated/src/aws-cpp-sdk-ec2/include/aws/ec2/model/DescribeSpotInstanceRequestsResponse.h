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
    AWS_EC2_API DescribeSpotInstanceRequestsResponse() = default;
    AWS_EC2_API DescribeSpotInstanceRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotInstanceRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance requests.</p>
     */
    inline const Aws::Vector<SpotInstanceRequest>& GetSpotInstanceRequests() const { return m_spotInstanceRequests; }
    template<typename SpotInstanceRequestsT = Aws::Vector<SpotInstanceRequest>>
    void SetSpotInstanceRequests(SpotInstanceRequestsT&& value) { m_spotInstanceRequestsHasBeenSet = true; m_spotInstanceRequests = std::forward<SpotInstanceRequestsT>(value); }
    template<typename SpotInstanceRequestsT = Aws::Vector<SpotInstanceRequest>>
    DescribeSpotInstanceRequestsResponse& WithSpotInstanceRequests(SpotInstanceRequestsT&& value) { SetSpotInstanceRequests(std::forward<SpotInstanceRequestsT>(value)); return *this;}
    template<typename SpotInstanceRequestsT = SpotInstanceRequest>
    DescribeSpotInstanceRequestsResponse& AddSpotInstanceRequests(SpotInstanceRequestsT&& value) { m_spotInstanceRequestsHasBeenSet = true; m_spotInstanceRequests.emplace_back(std::forward<SpotInstanceRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSpotInstanceRequestsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSpotInstanceRequestsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpotInstanceRequest> m_spotInstanceRequests;
    bool m_spotInstanceRequestsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
