/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessEndpoint.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class CreateVerifiedAccessEndpointResponse
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointResponse() = default;
    AWS_EC2_API CreateVerifiedAccessEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVerifiedAccessEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access endpoint.</p>
     */
    inline const VerifiedAccessEndpoint& GetVerifiedAccessEndpoint() const { return m_verifiedAccessEndpoint; }
    template<typename VerifiedAccessEndpointT = VerifiedAccessEndpoint>
    void SetVerifiedAccessEndpoint(VerifiedAccessEndpointT&& value) { m_verifiedAccessEndpointHasBeenSet = true; m_verifiedAccessEndpoint = std::forward<VerifiedAccessEndpointT>(value); }
    template<typename VerifiedAccessEndpointT = VerifiedAccessEndpoint>
    CreateVerifiedAccessEndpointResponse& WithVerifiedAccessEndpoint(VerifiedAccessEndpointT&& value) { SetVerifiedAccessEndpoint(std::forward<VerifiedAccessEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVerifiedAccessEndpointResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VerifiedAccessEndpoint m_verifiedAccessEndpoint;
    bool m_verifiedAccessEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
