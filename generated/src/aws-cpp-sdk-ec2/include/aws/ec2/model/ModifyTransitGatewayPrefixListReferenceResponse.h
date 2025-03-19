/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPrefixListReference.h>
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
  class ModifyTransitGatewayPrefixListReferenceResponse
  {
  public:
    AWS_EC2_API ModifyTransitGatewayPrefixListReferenceResponse() = default;
    AWS_EC2_API ModifyTransitGatewayPrefixListReferenceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTransitGatewayPrefixListReferenceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline const TransitGatewayPrefixListReference& GetTransitGatewayPrefixListReference() const { return m_transitGatewayPrefixListReference; }
    template<typename TransitGatewayPrefixListReferenceT = TransitGatewayPrefixListReference>
    void SetTransitGatewayPrefixListReference(TransitGatewayPrefixListReferenceT&& value) { m_transitGatewayPrefixListReferenceHasBeenSet = true; m_transitGatewayPrefixListReference = std::forward<TransitGatewayPrefixListReferenceT>(value); }
    template<typename TransitGatewayPrefixListReferenceT = TransitGatewayPrefixListReference>
    ModifyTransitGatewayPrefixListReferenceResponse& WithTransitGatewayPrefixListReference(TransitGatewayPrefixListReferenceT&& value) { SetTransitGatewayPrefixListReference(std::forward<TransitGatewayPrefixListReferenceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyTransitGatewayPrefixListReferenceResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPrefixListReference m_transitGatewayPrefixListReference;
    bool m_transitGatewayPrefixListReferenceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
