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
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse() = default;
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockExtensionOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The recommended Capacity Block extension offerings for the dates
     * specified.</p>
     */
    inline const Aws::Vector<CapacityBlockExtensionOffering>& GetCapacityBlockExtensionOfferings() const { return m_capacityBlockExtensionOfferings; }
    template<typename CapacityBlockExtensionOfferingsT = Aws::Vector<CapacityBlockExtensionOffering>>
    void SetCapacityBlockExtensionOfferings(CapacityBlockExtensionOfferingsT&& value) { m_capacityBlockExtensionOfferingsHasBeenSet = true; m_capacityBlockExtensionOfferings = std::forward<CapacityBlockExtensionOfferingsT>(value); }
    template<typename CapacityBlockExtensionOfferingsT = Aws::Vector<CapacityBlockExtensionOffering>>
    DescribeCapacityBlockExtensionOfferingsResponse& WithCapacityBlockExtensionOfferings(CapacityBlockExtensionOfferingsT&& value) { SetCapacityBlockExtensionOfferings(std::forward<CapacityBlockExtensionOfferingsT>(value)); return *this;}
    template<typename CapacityBlockExtensionOfferingsT = CapacityBlockExtensionOffering>
    DescribeCapacityBlockExtensionOfferingsResponse& AddCapacityBlockExtensionOfferings(CapacityBlockExtensionOfferingsT&& value) { m_capacityBlockExtensionOfferingsHasBeenSet = true; m_capacityBlockExtensionOfferings.emplace_back(std::forward<CapacityBlockExtensionOfferingsT>(value)); return *this; }
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
    DescribeCapacityBlockExtensionOfferingsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityBlockExtensionOfferingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtensionOffering> m_capacityBlockExtensionOfferings;
    bool m_capacityBlockExtensionOfferingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
