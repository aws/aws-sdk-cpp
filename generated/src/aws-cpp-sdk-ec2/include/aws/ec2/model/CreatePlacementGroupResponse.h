/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PlacementGroup.h>
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
  class CreatePlacementGroupResponse
  {
  public:
    AWS_EC2_API CreatePlacementGroupResponse() = default;
    AWS_EC2_API CreatePlacementGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreatePlacementGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the placement group.</p>
     */
    inline const PlacementGroup& GetPlacementGroup() const { return m_placementGroup; }
    template<typename PlacementGroupT = PlacementGroup>
    void SetPlacementGroup(PlacementGroupT&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::forward<PlacementGroupT>(value); }
    template<typename PlacementGroupT = PlacementGroup>
    CreatePlacementGroupResponse& WithPlacementGroup(PlacementGroupT&& value) { SetPlacementGroup(std::forward<PlacementGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreatePlacementGroupResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    PlacementGroup m_placementGroup;
    bool m_placementGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
