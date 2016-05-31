/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/AvailabilityZone.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> This data type is used as a response element in the
   * <a>DescribeDBSubnetGroups</a> action. </p>
   */
  class AWS_RDS_API Subnet
  {
  public:
    Subnet();
    Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const{ return m_subnetIdentifier; }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline void SetSubnetIdentifier(const char* value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const Aws::String& value) { SetSubnetIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}

    
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    
    inline void SetSubnetAvailabilityZone(const AvailabilityZone& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    
    inline void SetSubnetAvailabilityZone(AvailabilityZone&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    
    inline Subnet& WithSubnetAvailabilityZone(const AvailabilityZone& value) { SetSubnetAvailabilityZone(value); return *this;}

    
    inline Subnet& WithSubnetAvailabilityZone(AvailabilityZone&& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline const Aws::String& GetSubnetStatus() const{ return m_subnetStatus; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline void SetSubnetStatus(const Aws::String& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = value; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline void SetSubnetStatus(Aws::String&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = value; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline void SetSubnetStatus(const char* value) { m_subnetStatusHasBeenSet = true; m_subnetStatus.assign(value); }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline Subnet& WithSubnetStatus(const Aws::String& value) { SetSubnetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline Subnet& WithSubnetStatus(Aws::String&& value) { SetSubnetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline Subnet& WithSubnetStatus(const char* value) { SetSubnetStatus(value); return *this;}

  private:
    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet;
    AvailabilityZone m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet;
    Aws::String m_subnetStatus;
    bool m_subnetStatusHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
