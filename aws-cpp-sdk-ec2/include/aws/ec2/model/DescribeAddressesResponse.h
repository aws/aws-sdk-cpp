/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Address.h>
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
  class DescribeAddressesResponse
  {
  public:
    AWS_EC2_API DescribeAddressesResponse();
    AWS_EC2_API DescribeAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addresses = value; }

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addresses = std::move(value); }

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline DescribeAddressesResponse& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline DescribeAddressesResponse& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline DescribeAddressesResponse& AddAddresses(const Address& value) { m_addresses.push_back(value); return *this; }

    /**
     * <p>Information about the Elastic IP addresses.</p>
     */
    inline DescribeAddressesResponse& AddAddresses(Address&& value) { m_addresses.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Address> m_addresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
