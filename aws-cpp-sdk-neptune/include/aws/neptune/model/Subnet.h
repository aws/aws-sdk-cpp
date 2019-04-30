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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/AvailabilityZone.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Specifies a subnet.</p> <p> This data type is used as a response element in
   * the <a>DescribeDBSubnetGroups</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/Subnet">AWS API
   * Reference</a></p>
   */
  class AWS_NEPTUNE_API Subnet
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
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::move(value); }

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
    inline Subnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}


    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline void SetSubnetAvailabilityZone(const AvailabilityZone& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline void SetSubnetAvailabilityZone(AvailabilityZone&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(const AvailabilityZone& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the EC2 Availability Zone that the subnet is in.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(AvailabilityZone&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}


    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline const Aws::String& GetSubnetStatus() const{ return m_subnetStatus; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline bool SubnetStatusHasBeenSet() const { return m_subnetStatusHasBeenSet; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline void SetSubnetStatus(const Aws::String& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = value; }

    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline void SetSubnetStatus(Aws::String&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = std::move(value); }

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
    inline Subnet& WithSubnetStatus(Aws::String&& value) { SetSubnetStatus(std::move(value)); return *this;}

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
} // namespace Neptune
} // namespace Aws
