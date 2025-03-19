/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessEndpoint.h>
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
  class DescribeVerifiedAccessEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse() = default;
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access endpoints.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpoint>& GetVerifiedAccessEndpoints() const { return m_verifiedAccessEndpoints; }
    template<typename VerifiedAccessEndpointsT = Aws::Vector<VerifiedAccessEndpoint>>
    void SetVerifiedAccessEndpoints(VerifiedAccessEndpointsT&& value) { m_verifiedAccessEndpointsHasBeenSet = true; m_verifiedAccessEndpoints = std::forward<VerifiedAccessEndpointsT>(value); }
    template<typename VerifiedAccessEndpointsT = Aws::Vector<VerifiedAccessEndpoint>>
    DescribeVerifiedAccessEndpointsResponse& WithVerifiedAccessEndpoints(VerifiedAccessEndpointsT&& value) { SetVerifiedAccessEndpoints(std::forward<VerifiedAccessEndpointsT>(value)); return *this;}
    template<typename VerifiedAccessEndpointsT = VerifiedAccessEndpoint>
    DescribeVerifiedAccessEndpointsResponse& AddVerifiedAccessEndpoints(VerifiedAccessEndpointsT&& value) { m_verifiedAccessEndpointsHasBeenSet = true; m_verifiedAccessEndpoints.emplace_back(std::forward<VerifiedAccessEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVerifiedAccessEndpointsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVerifiedAccessEndpointsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VerifiedAccessEndpoint> m_verifiedAccessEndpoints;
    bool m_verifiedAccessEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
