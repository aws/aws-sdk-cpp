/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Details for Site-to-Site VPN tunnel endpoint maintenance
   * events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MaintenanceDetails">AWS
   * API Reference</a></p>
   */
  class MaintenanceDetails
  {
  public:
    AWS_EC2_API MaintenanceDetails();
    AWS_EC2_API MaintenanceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MaintenanceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline const Aws::String& GetPendingMaintenance() const{ return m_pendingMaintenance; }

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline bool PendingMaintenanceHasBeenSet() const { return m_pendingMaintenanceHasBeenSet; }

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline void SetPendingMaintenance(const Aws::String& value) { m_pendingMaintenanceHasBeenSet = true; m_pendingMaintenance = value; }

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline void SetPendingMaintenance(Aws::String&& value) { m_pendingMaintenanceHasBeenSet = true; m_pendingMaintenance = std::move(value); }

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline void SetPendingMaintenance(const char* value) { m_pendingMaintenanceHasBeenSet = true; m_pendingMaintenance.assign(value); }

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline MaintenanceDetails& WithPendingMaintenance(const Aws::String& value) { SetPendingMaintenance(value); return *this;}

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline MaintenanceDetails& WithPendingMaintenance(Aws::String&& value) { SetPendingMaintenance(std::move(value)); return *this;}

    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline MaintenanceDetails& WithPendingMaintenance(const char* value) { SetPendingMaintenance(value); return *this;}


    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetMaintenanceAutoAppliedAfter() const{ return m_maintenanceAutoAppliedAfter; }

    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline bool MaintenanceAutoAppliedAfterHasBeenSet() const { return m_maintenanceAutoAppliedAfterHasBeenSet; }

    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline void SetMaintenanceAutoAppliedAfter(const Aws::Utils::DateTime& value) { m_maintenanceAutoAppliedAfterHasBeenSet = true; m_maintenanceAutoAppliedAfter = value; }

    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline void SetMaintenanceAutoAppliedAfter(Aws::Utils::DateTime&& value) { m_maintenanceAutoAppliedAfterHasBeenSet = true; m_maintenanceAutoAppliedAfter = std::move(value); }

    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline MaintenanceDetails& WithMaintenanceAutoAppliedAfter(const Aws::Utils::DateTime& value) { SetMaintenanceAutoAppliedAfter(value); return *this;}

    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline MaintenanceDetails& WithMaintenanceAutoAppliedAfter(Aws::Utils::DateTime&& value) { SetMaintenanceAutoAppliedAfter(std::move(value)); return *this;}


    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMaintenanceApplied() const{ return m_lastMaintenanceApplied; }

    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline bool LastMaintenanceAppliedHasBeenSet() const { return m_lastMaintenanceAppliedHasBeenSet; }

    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline void SetLastMaintenanceApplied(const Aws::Utils::DateTime& value) { m_lastMaintenanceAppliedHasBeenSet = true; m_lastMaintenanceApplied = value; }

    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline void SetLastMaintenanceApplied(Aws::Utils::DateTime&& value) { m_lastMaintenanceAppliedHasBeenSet = true; m_lastMaintenanceApplied = std::move(value); }

    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline MaintenanceDetails& WithLastMaintenanceApplied(const Aws::Utils::DateTime& value) { SetLastMaintenanceApplied(value); return *this;}

    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline MaintenanceDetails& WithLastMaintenanceApplied(Aws::Utils::DateTime&& value) { SetLastMaintenanceApplied(std::move(value)); return *this;}

  private:

    Aws::String m_pendingMaintenance;
    bool m_pendingMaintenanceHasBeenSet = false;

    Aws::Utils::DateTime m_maintenanceAutoAppliedAfter;
    bool m_maintenanceAutoAppliedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastMaintenanceApplied;
    bool m_lastMaintenanceAppliedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
