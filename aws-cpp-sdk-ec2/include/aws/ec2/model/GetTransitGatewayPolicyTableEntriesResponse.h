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
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse();
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayPolicyTableEntriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline const Aws::Vector<TransitGatewayPolicyTableEntry>& GetTransitGatewayPolicyTableEntries() const{ return m_transitGatewayPolicyTableEntries; }

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableEntries(const Aws::Vector<TransitGatewayPolicyTableEntry>& value) { m_transitGatewayPolicyTableEntries = value; }

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableEntries(Aws::Vector<TransitGatewayPolicyTableEntry>&& value) { m_transitGatewayPolicyTableEntries = std::move(value); }

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline GetTransitGatewayPolicyTableEntriesResponse& WithTransitGatewayPolicyTableEntries(const Aws::Vector<TransitGatewayPolicyTableEntry>& value) { SetTransitGatewayPolicyTableEntries(value); return *this;}

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline GetTransitGatewayPolicyTableEntriesResponse& WithTransitGatewayPolicyTableEntries(Aws::Vector<TransitGatewayPolicyTableEntry>&& value) { SetTransitGatewayPolicyTableEntries(std::move(value)); return *this;}

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline GetTransitGatewayPolicyTableEntriesResponse& AddTransitGatewayPolicyTableEntries(const TransitGatewayPolicyTableEntry& value) { m_transitGatewayPolicyTableEntries.push_back(value); return *this; }

    /**
     * <p>The entries for the transit gateway policy table.</p>
     */
    inline GetTransitGatewayPolicyTableEntriesResponse& AddTransitGatewayPolicyTableEntries(TransitGatewayPolicyTableEntry&& value) { m_transitGatewayPolicyTableEntries.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetTransitGatewayPolicyTableEntriesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTransitGatewayPolicyTableEntriesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayPolicyTableEntry> m_transitGatewayPolicyTableEntries;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
