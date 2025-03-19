/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AddressTransfer.h>
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
  class DescribeAddressTransfersResponse
  {
  public:
    AWS_EC2_API DescribeAddressTransfersResponse() = default;
    AWS_EC2_API DescribeAddressTransfersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAddressTransfersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline const Aws::Vector<AddressTransfer>& GetAddressTransfers() const { return m_addressTransfers; }
    template<typename AddressTransfersT = Aws::Vector<AddressTransfer>>
    void SetAddressTransfers(AddressTransfersT&& value) { m_addressTransfersHasBeenSet = true; m_addressTransfers = std::forward<AddressTransfersT>(value); }
    template<typename AddressTransfersT = Aws::Vector<AddressTransfer>>
    DescribeAddressTransfersResponse& WithAddressTransfers(AddressTransfersT&& value) { SetAddressTransfers(std::forward<AddressTransfersT>(value)); return *this;}
    template<typename AddressTransfersT = AddressTransfer>
    DescribeAddressTransfersResponse& AddAddressTransfers(AddressTransfersT&& value) { m_addressTransfersHasBeenSet = true; m_addressTransfers.emplace_back(std::forward<AddressTransfersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAddressTransfersResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAddressTransfersResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AddressTransfer> m_addressTransfers;
    bool m_addressTransfersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
