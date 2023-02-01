/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AddressAttribute.h>
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
  class ResetAddressAttributeResponse
  {
  public:
    AWS_EC2_API ResetAddressAttributeResponse();
    AWS_EC2_API ResetAddressAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ResetAddressAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IP address.</p>
     */
    inline const AddressAttribute& GetAddress() const{ return m_address; }

    /**
     * <p>Information about the IP address.</p>
     */
    inline void SetAddress(const AddressAttribute& value) { m_address = value; }

    /**
     * <p>Information about the IP address.</p>
     */
    inline void SetAddress(AddressAttribute&& value) { m_address = std::move(value); }

    /**
     * <p>Information about the IP address.</p>
     */
    inline ResetAddressAttributeResponse& WithAddress(const AddressAttribute& value) { SetAddress(value); return *this;}

    /**
     * <p>Information about the IP address.</p>
     */
    inline ResetAddressAttributeResponse& WithAddress(AddressAttribute&& value) { SetAddress(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetAddressAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetAddressAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AddressAttribute m_address;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
