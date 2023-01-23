/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AddressAttribute.h>
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
  class DescribeAddressesAttributeResponse
  {
  public:
    AWS_EC2_API DescribeAddressesAttributeResponse();
    AWS_EC2_API DescribeAddressesAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAddressesAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IP addresses.</p>
     */
    inline const Aws::Vector<AddressAttribute>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline void SetAddresses(const Aws::Vector<AddressAttribute>& value) { m_addresses = value; }

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline void SetAddresses(Aws::Vector<AddressAttribute>&& value) { m_addresses = std::move(value); }

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline DescribeAddressesAttributeResponse& WithAddresses(const Aws::Vector<AddressAttribute>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline DescribeAddressesAttributeResponse& WithAddresses(Aws::Vector<AddressAttribute>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline DescribeAddressesAttributeResponse& AddAddresses(const AddressAttribute& value) { m_addresses.push_back(value); return *this; }

    /**
     * <p>Information about the IP addresses.</p>
     */
    inline DescribeAddressesAttributeResponse& AddAddresses(AddressAttribute&& value) { m_addresses.push_back(std::move(value)); return *this; }


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
    inline DescribeAddressesAttributeResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeAddressesAttributeResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeAddressesAttributeResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAddressesAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAddressesAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AddressAttribute> m_addresses;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
