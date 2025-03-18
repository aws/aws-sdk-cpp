/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservationGroup.h>
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
  class GetGroupsForCapacityReservationResponse
  {
  public:
    AWS_EC2_API GetGroupsForCapacityReservationResponse() = default;
    AWS_EC2_API GetGroupsForCapacityReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetGroupsForCapacityReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetGroupsForCapacityReservationResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline const Aws::Vector<CapacityReservationGroup>& GetCapacityReservationGroups() const { return m_capacityReservationGroups; }
    template<typename CapacityReservationGroupsT = Aws::Vector<CapacityReservationGroup>>
    void SetCapacityReservationGroups(CapacityReservationGroupsT&& value) { m_capacityReservationGroupsHasBeenSet = true; m_capacityReservationGroups = std::forward<CapacityReservationGroupsT>(value); }
    template<typename CapacityReservationGroupsT = Aws::Vector<CapacityReservationGroup>>
    GetGroupsForCapacityReservationResponse& WithCapacityReservationGroups(CapacityReservationGroupsT&& value) { SetCapacityReservationGroups(std::forward<CapacityReservationGroupsT>(value)); return *this;}
    template<typename CapacityReservationGroupsT = CapacityReservationGroup>
    GetGroupsForCapacityReservationResponse& AddCapacityReservationGroups(CapacityReservationGroupsT&& value) { m_capacityReservationGroupsHasBeenSet = true; m_capacityReservationGroups.emplace_back(std::forward<CapacityReservationGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetGroupsForCapacityReservationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CapacityReservationGroup> m_capacityReservationGroups;
    bool m_capacityReservationGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
