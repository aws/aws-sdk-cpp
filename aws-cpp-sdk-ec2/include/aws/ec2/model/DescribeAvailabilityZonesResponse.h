/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAvailabilityZonesResponse
  {
  public:
    AWS_EC2_API DescribeAvailabilityZonesResponse();
    AWS_EC2_API DescribeAvailabilityZonesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAvailabilityZonesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZones = value; }

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZones = std::move(value); }

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
     */
    inline DescribeAvailabilityZonesResponse& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Information about the Availability Zones, Local Zones, and Wavelength
     * Zones.</p>
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
