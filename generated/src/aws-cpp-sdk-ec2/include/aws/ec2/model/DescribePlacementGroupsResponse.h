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
    AWS_EC2_API DescribePlacementGroupsResponse();
    AWS_EC2_API DescribePlacementGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribePlacementGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the placement groups.</p>
     */
    inline const Aws::Vector<PlacementGroup>& GetPlacementGroups() const{ return m_placementGroups; }

    /**
     * <p>Information about the placement groups.</p>
     */
    inline void SetPlacementGroups(const Aws::Vector<PlacementGroup>& value) { m_placementGroups = value; }

    /**
     * <p>Information about the placement groups.</p>
     */
    inline void SetPlacementGroups(Aws::Vector<PlacementGroup>&& value) { m_placementGroups = std::move(value); }

    /**
     * <p>Information about the placement groups.</p>
     */
    inline DescribePlacementGroupsResponse& WithPlacementGroups(const Aws::Vector<PlacementGroup>& value) { SetPlacementGroups(value); return *this;}

    /**
     * <p>Information about the placement groups.</p>
     */
    inline DescribePlacementGroupsResponse& WithPlacementGroups(Aws::Vector<PlacementGroup>&& value) { SetPlacementGroups(std::move(value)); return *this;}

    /**
     * <p>Information about the placement groups.</p>
     */
    inline DescribePlacementGroupsResponse& AddPlacementGroups(const PlacementGroup& value) { m_placementGroups.push_back(value); return *this; }

    /**
     * <p>Information about the placement groups.</p>
     */
    inline DescribePlacementGroupsResponse& AddPlacementGroups(PlacementGroup&& value) { m_placementGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePlacementGroupsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePlacementGroupsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PlacementGroup> m_placementGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
