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
    AWS_EC2_API CreatePlacementGroupResponse();
    AWS_EC2_API CreatePlacementGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreatePlacementGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the placement group.</p>
     */
    inline const PlacementGroup& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>Information about the placement group.</p>
     */
    inline void SetPlacementGroup(const PlacementGroup& value) { m_placementGroup = value; }

    /**
     * <p>Information about the placement group.</p>
     */
    inline void SetPlacementGroup(PlacementGroup&& value) { m_placementGroup = std::move(value); }

    /**
     * <p>Information about the placement group.</p>
     */
    inline CreatePlacementGroupResponse& WithPlacementGroup(const PlacementGroup& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>Information about the placement group.</p>
     */
    inline CreatePlacementGroupResponse& WithPlacementGroup(PlacementGroup&& value) { SetPlacementGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreatePlacementGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreatePlacementGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PlacementGroup m_placementGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
