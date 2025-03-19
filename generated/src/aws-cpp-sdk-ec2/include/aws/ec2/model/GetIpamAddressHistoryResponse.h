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
    AWS_EC2_API GetIpamAddressHistoryResponse() = default;
    AWS_EC2_API GetIpamAddressHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamAddressHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A historical record for a CIDR within an IPAM scope. If the CIDR is
     * associated with an EC2 instance, you will see an object in the response for the
     * instance and one for the network interface.</p>
     */
    inline const Aws::Vector<IpamAddressHistoryRecord>& GetHistoryRecords() const { return m_historyRecords; }
    template<typename HistoryRecordsT = Aws::Vector<IpamAddressHistoryRecord>>
    void SetHistoryRecords(HistoryRecordsT&& value) { m_historyRecordsHasBeenSet = true; m_historyRecords = std::forward<HistoryRecordsT>(value); }
    template<typename HistoryRecordsT = Aws::Vector<IpamAddressHistoryRecord>>
    GetIpamAddressHistoryResponse& WithHistoryRecords(HistoryRecordsT&& value) { SetHistoryRecords(std::forward<HistoryRecordsT>(value)); return *this;}
    template<typename HistoryRecordsT = IpamAddressHistoryRecord>
    GetIpamAddressHistoryResponse& AddHistoryRecords(HistoryRecordsT&& value) { m_historyRecordsHasBeenSet = true; m_historyRecords.emplace_back(std::forward<HistoryRecordsT>(value)); return *this; }
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
    GetIpamAddressHistoryResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamAddressHistoryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamAddressHistoryRecord> m_historyRecords;
    bool m_historyRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
