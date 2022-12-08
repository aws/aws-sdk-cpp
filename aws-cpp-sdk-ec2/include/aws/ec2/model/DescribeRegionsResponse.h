/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Region.h>
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
  class DescribeRegionsResponse
  {
  public:
    AWS_EC2_API DescribeRegionsResponse();
    AWS_EC2_API DescribeRegionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeRegionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Regions.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>Information about the Regions.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regions = value; }

    /**
     * <p>Information about the Regions.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regions = std::move(value); }

    /**
     * <p>Information about the Regions.</p>
     */
    inline DescribeRegionsResponse& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>Information about the Regions.</p>
     */
    inline DescribeRegionsResponse& WithRegions(Aws::Vector<Region>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>Information about the Regions.</p>
     */
    inline DescribeRegionsResponse& AddRegions(const Region& value) { m_regions.push_back(value); return *this; }

    /**
     * <p>Information about the Regions.</p>
     */
    inline DescribeRegionsResponse& AddRegions(Region&& value) { m_regions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeRegionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeRegionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Region> m_regions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
