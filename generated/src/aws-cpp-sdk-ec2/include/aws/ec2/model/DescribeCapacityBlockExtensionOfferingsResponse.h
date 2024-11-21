/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlockExtensionOffering.h>
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
  class DescribeCapacityBlockExtensionOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse();
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The recommended Capacity Block extension offerings for the dates
     * specified.</p>
     */
    inline const Aws::Vector<CapacityBlockExtensionOffering>& GetCapacityBlockExtensionOfferings() const{ return m_capacityBlockExtensionOfferings; }
    inline void SetCapacityBlockExtensionOfferings(const Aws::Vector<CapacityBlockExtensionOffering>& value) { m_capacityBlockExtensionOfferings = value; }
    inline void SetCapacityBlockExtensionOfferings(Aws::Vector<CapacityBlockExtensionOffering>&& value) { m_capacityBlockExtensionOfferings = std::move(value); }
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithCapacityBlockExtensionOfferings(const Aws::Vector<CapacityBlockExtensionOffering>& value) { SetCapacityBlockExtensionOfferings(value); return *this;}
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithCapacityBlockExtensionOfferings(Aws::Vector<CapacityBlockExtensionOffering>&& value) { SetCapacityBlockExtensionOfferings(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionOfferingsResponse& AddCapacityBlockExtensionOfferings(const CapacityBlockExtensionOffering& value) { m_capacityBlockExtensionOfferings.push_back(value); return *this; }
    inline DescribeCapacityBlockExtensionOfferingsResponse& AddCapacityBlockExtensionOfferings(CapacityBlockExtensionOffering&& value) { m_capacityBlockExtensionOfferings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeCapacityBlockExtensionOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtensionOffering> m_capacityBlockExtensionOfferings;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
