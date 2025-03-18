/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstancesOffering.h>
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
  /**
   * <p>Contains the output of DescribeReservedInstancesOfferings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferingsResult">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse() = default;
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeReservedInstancesOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedInstancesOfferingsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Reserved Instances offerings.</p>
     */
    inline const Aws::Vector<ReservedInstancesOffering>& GetReservedInstancesOfferings() const { return m_reservedInstancesOfferings; }
    template<typename ReservedInstancesOfferingsT = Aws::Vector<ReservedInstancesOffering>>
    void SetReservedInstancesOfferings(ReservedInstancesOfferingsT&& value) { m_reservedInstancesOfferingsHasBeenSet = true; m_reservedInstancesOfferings = std::forward<ReservedInstancesOfferingsT>(value); }
    template<typename ReservedInstancesOfferingsT = Aws::Vector<ReservedInstancesOffering>>
    DescribeReservedInstancesOfferingsResponse& WithReservedInstancesOfferings(ReservedInstancesOfferingsT&& value) { SetReservedInstancesOfferings(std::forward<ReservedInstancesOfferingsT>(value)); return *this;}
    template<typename ReservedInstancesOfferingsT = ReservedInstancesOffering>
    DescribeReservedInstancesOfferingsResponse& AddReservedInstancesOfferings(ReservedInstancesOfferingsT&& value) { m_reservedInstancesOfferingsHasBeenSet = true; m_reservedInstancesOfferings.emplace_back(std::forward<ReservedInstancesOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedInstancesOfferingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservedInstancesOffering> m_reservedInstancesOfferings;
    bool m_reservedInstancesOfferingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
