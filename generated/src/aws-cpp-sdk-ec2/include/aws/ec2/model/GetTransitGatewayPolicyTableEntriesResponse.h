/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPolicyTableEntry.h>
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
  class GetTransitGatewayPolicyTableEntriesResponse
  {
  public:
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse() = default;
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline const Aws::Vector<TransitGatewayPolicyTableEntry>& GetTransitGatewayPolicyTableEntries() const { return m_transitGatewayPolicyTableEntries; }
    template<typename TransitGatewayPolicyTableEntriesT = Aws::Vector<TransitGatewayPolicyTableEntry>>
    void SetTransitGatewayPolicyTableEntries(TransitGatewayPolicyTableEntriesT&& value) { m_transitGatewayPolicyTableEntriesHasBeenSet = true; m_transitGatewayPolicyTableEntries = std::forward<TransitGatewayPolicyTableEntriesT>(value); }
    template<typename TransitGatewayPolicyTableEntriesT = Aws::Vector<TransitGatewayPolicyTableEntry>>
    GetTransitGatewayPolicyTableEntriesResponse& WithTransitGatewayPolicyTableEntries(TransitGatewayPolicyTableEntriesT&& value) { SetTransitGatewayPolicyTableEntries(std::forward<TransitGatewayPolicyTableEntriesT>(value)); return *this;}
    template<typename TransitGatewayPolicyTableEntriesT = TransitGatewayPolicyTableEntry>
    GetTransitGatewayPolicyTableEntriesResponse& AddTransitGatewayPolicyTableEntries(TransitGatewayPolicyTableEntriesT&& value) { m_transitGatewayPolicyTableEntriesHasBeenSet = true; m_transitGatewayPolicyTableEntries.emplace_back(std::forward<TransitGatewayPolicyTableEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetTransitGatewayPolicyTableEntriesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayPolicyTableEntry> m_transitGatewayPolicyTableEntries;
    bool m_transitGatewayPolicyTableEntriesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
