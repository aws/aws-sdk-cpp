﻿/**
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
  class AWS_EC2_API EnableAddressTransferResponse
  {
  public:
    EnableAddressTransferResponse();
    EnableAddressTransferResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    EnableAddressTransferResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline const AddressTransfer& GetAddressTransfer() const{ return m_addressTransfer; }

    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline void SetAddressTransfer(const AddressTransfer& value) { m_addressTransfer = value; }

    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline void SetAddressTransfer(AddressTransfer&& value) { m_addressTransfer = std::move(value); }

    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline EnableAddressTransferResponse& WithAddressTransfer(const AddressTransfer& value) { SetAddressTransfer(value); return *this;}

    /**
     * <p>An Elastic IP address transfer.</p>
     */
    inline EnableAddressTransferResponse& WithAddressTransfer(AddressTransfer&& value) { SetAddressTransfer(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableAddressTransferResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableAddressTransferResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AddressTransfer m_addressTransfer;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
