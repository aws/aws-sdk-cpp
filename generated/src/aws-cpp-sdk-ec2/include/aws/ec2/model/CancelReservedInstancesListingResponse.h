/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstancesListing.h>
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
   * <p>Contains the output of CancelReservedInstancesListing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListingResult">AWS
   * API Reference</a></p>
   */
  class CancelReservedInstancesListingResponse
  {
  public:
    AWS_EC2_API CancelReservedInstancesListingResponse() = default;
    AWS_EC2_API CancelReservedInstancesListingResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelReservedInstancesListingResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline const Aws::Vector<ReservedInstancesListing>& GetReservedInstancesListings() const { return m_reservedInstancesListings; }
    template<typename ReservedInstancesListingsT = Aws::Vector<ReservedInstancesListing>>
    void SetReservedInstancesListings(ReservedInstancesListingsT&& value) { m_reservedInstancesListingsHasBeenSet = true; m_reservedInstancesListings = std::forward<ReservedInstancesListingsT>(value); }
    template<typename ReservedInstancesListingsT = Aws::Vector<ReservedInstancesListing>>
    CancelReservedInstancesListingResponse& WithReservedInstancesListings(ReservedInstancesListingsT&& value) { SetReservedInstancesListings(std::forward<ReservedInstancesListingsT>(value)); return *this;}
    template<typename ReservedInstancesListingsT = ReservedInstancesListing>
    CancelReservedInstancesListingResponse& AddReservedInstancesListings(ReservedInstancesListingsT&& value) { m_reservedInstancesListingsHasBeenSet = true; m_reservedInstancesListings.emplace_back(std::forward<ReservedInstancesListingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CancelReservedInstancesListingResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReservedInstancesListing> m_reservedInstancesListings;
    bool m_reservedInstancesListingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
