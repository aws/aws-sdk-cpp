/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessEndpointTarget.h>
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
  class GetVerifiedAccessEndpointTargetsResponse
  {
  public:
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse() = default;
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Verified Access targets.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpointTarget>& GetVerifiedAccessEndpointTargets() const { return m_verifiedAccessEndpointTargets; }
    template<typename VerifiedAccessEndpointTargetsT = Aws::Vector<VerifiedAccessEndpointTarget>>
    void SetVerifiedAccessEndpointTargets(VerifiedAccessEndpointTargetsT&& value) { m_verifiedAccessEndpointTargetsHasBeenSet = true; m_verifiedAccessEndpointTargets = std::forward<VerifiedAccessEndpointTargetsT>(value); }
    template<typename VerifiedAccessEndpointTargetsT = Aws::Vector<VerifiedAccessEndpointTarget>>
    GetVerifiedAccessEndpointTargetsResponse& WithVerifiedAccessEndpointTargets(VerifiedAccessEndpointTargetsT&& value) { SetVerifiedAccessEndpointTargets(std::forward<VerifiedAccessEndpointTargetsT>(value)); return *this;}
    template<typename VerifiedAccessEndpointTargetsT = VerifiedAccessEndpointTarget>
    GetVerifiedAccessEndpointTargetsResponse& AddVerifiedAccessEndpointTargets(VerifiedAccessEndpointTargetsT&& value) { m_verifiedAccessEndpointTargetsHasBeenSet = true; m_verifiedAccessEndpointTargets.emplace_back(std::forward<VerifiedAccessEndpointTargetsT>(value)); return *this; }
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
    GetVerifiedAccessEndpointTargetsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetVerifiedAccessEndpointTargetsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VerifiedAccessEndpointTarget> m_verifiedAccessEndpointTargets;
    bool m_verifiedAccessEndpointTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
