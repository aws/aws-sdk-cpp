/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DescribePlacementGroupsResponse
  {
  public:
    DescribePlacementGroupsResponse();
    DescribePlacementGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribePlacementGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
