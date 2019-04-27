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
#include <aws/ec2/model/AvailabilityZone.h>
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
  class AWS_EC2_API DescribeAvailabilityZonesResponse
  {
  public:
    DescribeAvailabilityZonesResponse();
    DescribeAvailabilityZonesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAvailabilityZonesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZones = value; }

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZones = std::move(value); }

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Information about the Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZones.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAvailabilityZonesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAvailabilityZonesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
