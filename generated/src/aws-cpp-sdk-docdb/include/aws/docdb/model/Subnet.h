/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/AvailabilityZone.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p> Detailed information about a subnet. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/Subnet">AWS API
   * Reference</a></p>
   */
  class Subnet
  {
  public:
    AWS_DOCDB_API Subnet();
    AWS_DOCDB_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the identifier of the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const{ return m_subnetIdentifier; }
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::move(value); }
    inline void SetSubnetIdentifier(const char* value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier.assign(value); }
    inline Subnet& WithSubnetIdentifier(const Aws::String& value) { SetSubnetIdentifier(value); return *this;}
    inline Subnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(std::move(value)); return *this;}
    inline Subnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Availability Zone for the subnet.</p>
     */
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    inline void SetSubnetAvailabilityZone(const AvailabilityZone& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }
    inline void SetSubnetAvailabilityZone(AvailabilityZone&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }
    inline Subnet& WithSubnetAvailabilityZone(const AvailabilityZone& value) { SetSubnetAvailabilityZone(value); return *this;}
    inline Subnet& WithSubnetAvailabilityZone(AvailabilityZone&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the subnet.</p>
     */
    inline const Aws::String& GetSubnetStatus() const{ return m_subnetStatus; }
    inline bool SubnetStatusHasBeenSet() const { return m_subnetStatusHasBeenSet; }
    inline void SetSubnetStatus(const Aws::String& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = value; }
    inline void SetSubnetStatus(Aws::String&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = std::move(value); }
    inline void SetSubnetStatus(const char* value) { m_subnetStatusHasBeenSet = true; m_subnetStatus.assign(value); }
    inline Subnet& WithSubnetStatus(const Aws::String& value) { SetSubnetStatus(value); return *this;}
    inline Subnet& WithSubnetStatus(Aws::String&& value) { SetSubnetStatus(std::move(value)); return *this;}
    inline Subnet& WithSubnetStatus(const char* value) { SetSubnetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet = false;

    AvailabilityZone m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_subnetStatus;
    bool m_subnetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
