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
    AWS_EC2_API DescribeAddressTransfersResponse();
    AWS_EC2_API DescribeAddressTransfersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAddressTransfersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline const Aws::Vector<AddressTransfer>& GetAddressTransfers() const{ return m_addressTransfers; }

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline void SetAddressTransfers(const Aws::Vector<AddressTransfer>& value) { m_addressTransfers = value; }

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline void SetAddressTransfers(Aws::Vector<AddressTransfer>&& value) { m_addressTransfers = std::move(value); }

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline DescribeAddressTransfersResponse& WithAddressTransfers(const Aws::Vector<AddressTransfer>& value) { SetAddressTransfers(value); return *this;}

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline DescribeAddressTransfersResponse& WithAddressTransfers(Aws::Vector<AddressTransfer>&& value) { SetAddressTransfers(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline DescribeAddressTransfersResponse& AddAddressTransfers(const AddressTransfer& value) { m_addressTransfers.push_back(value); return *this; }

    /**
     * <p>The Elastic IP address transfer.</p>
     */
    inline DescribeAddressTransfersResponse& AddAddressTransfers(AddressTransfer&& value) { m_addressTransfers.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeAddressTransfersResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeAddressTransfersResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeAddressTransfersResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAddressTransfersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAddressTransfersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AddressTransfer> m_addressTransfers;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
