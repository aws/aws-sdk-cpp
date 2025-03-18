/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AddressTransfer.h>
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
  class EnableAddressTransferResponse
  {
  public:
    AWS_EC2_API EnableAddressTransferResponse() = default;
    AWS_EC2_API EnableAddressTransferResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableAddressTransferResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline const AddressTransfer& GetAddressTransfer() const { return m_addressTransfer; }
    template<typename AddressTransferT = AddressTransfer>
    void SetAddressTransfer(AddressTransferT&& value) { m_addressTransferHasBeenSet = true; m_addressTransfer = std::forward<AddressTransferT>(value); }
    template<typename AddressTransferT = AddressTransfer>
    EnableAddressTransferResponse& WithAddressTransfer(AddressTransferT&& value) { SetAddressTransfer(std::forward<AddressTransferT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableAddressTransferResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AddressTransfer m_addressTransfer;
    bool m_addressTransferHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
