﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/Region.h>

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
   * <p>Contains the output of DescribeRegions.</p>
   */
  class AWS_EC2_API DescribeRegionsResponse
  {
  public:
    DescribeRegionsResponse();
    DescribeRegionsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeRegionsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about one or more regions.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>Information about one or more regions.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regions = value; }

    /**
     * <p>Information about one or more regions.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regions = value; }

    /**
     * <p>Information about one or more regions.</p>
     */
    inline DescribeRegionsResponse& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>Information about one or more regions.</p>
     */
    inline DescribeRegionsResponse& WithRegions(Aws::Vector<Region>&& value) { SetRegions(value); return *this;}

    /**
     * <p>Information about one or more regions.</p>
     */
    inline DescribeRegionsResponse& AddRegions(const Region& value) { m_regions.push_back(value); return *this; }

    /**
     * <p>Information about one or more regions.</p>
     */
    inline DescribeRegionsResponse& AddRegions(Region&& value) { m_regions.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeRegionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeRegionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Region> m_regions;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws