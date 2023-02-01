/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamAddressHistoryRecord.h>
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
  class GetIpamAddressHistoryResponse
  {
  public:
    AWS_EC2_API GetIpamAddressHistoryResponse();
    AWS_EC2_API GetIpamAddressHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamAddressHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline const Aws::Vector<IpamAddressHistoryRecord>& GetHistoryRecords() const{ return m_historyRecords; }

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline void SetHistoryRecords(const Aws::Vector<IpamAddressHistoryRecord>& value) { m_historyRecords = value; }

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline void SetHistoryRecords(Aws::Vector<IpamAddressHistoryRecord>&& value) { m_historyRecords = std::move(value); }

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline GetIpamAddressHistoryResponse& WithHistoryRecords(const Aws::Vector<IpamAddressHistoryRecord>& value) { SetHistoryRecords(value); return *this;}

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline GetIpamAddressHistoryResponse& WithHistoryRecords(Aws::Vector<IpamAddressHistoryRecord>&& value) { SetHistoryRecords(std::move(value)); return *this;}

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline GetIpamAddressHistoryResponse& AddHistoryRecords(const IpamAddressHistoryRecord& value) { m_historyRecords.push_back(value); return *this; }

    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline GetIpamAddressHistoryResponse& AddHistoryRecords(IpamAddressHistoryRecord&& value) { m_historyRecords.push_back(std::move(value)); return *this; }


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
    inline GetIpamAddressHistoryResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamAddressHistoryResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamAddressHistoryResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamAddressHistoryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamAddressHistoryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamAddressHistoryRecord> m_historyRecords;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
