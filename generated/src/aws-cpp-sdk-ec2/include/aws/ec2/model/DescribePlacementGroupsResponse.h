/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PlacementGroup.h>
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
  class DescribePlacementGroupsResponse
  {
  public:
    AWS_EC2_API DescribePlacementGroupsResponse() = default;
    AWS_EC2_API DescribePlacementGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribePlacementGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the placement groups.</p>
     */
    inline const Aws::Vector<PlacementGroup>& GetPlacementGroups() const { return m_placementGroups; }
    template<typename PlacementGroupsT = Aws::Vector<PlacementGroup>>
    void SetPlacementGroups(PlacementGroupsT&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups = std::forward<PlacementGroupsT>(value); }
    template<typename PlacementGroupsT = Aws::Vector<PlacementGroup>>
    DescribePlacementGroupsResponse& WithPlacementGroups(PlacementGroupsT&& value) { SetPlacementGroups(std::forward<PlacementGroupsT>(value)); return *this;}
    template<typename PlacementGroupsT = PlacementGroup>
    DescribePlacementGroupsResponse& AddPlacementGroups(PlacementGroupsT&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups.emplace_back(std::forward<PlacementGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePlacementGroupsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlacementGroup> m_placementGroups;
    bool m_placementGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
