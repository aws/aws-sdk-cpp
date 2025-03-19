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
    AWS_EC2_API MaintenanceDetails() = default;
    AWS_EC2_API MaintenanceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MaintenanceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Verify existence of a pending maintenance.</p>
     */
    inline const Aws::String& GetPendingMaintenance() const { return m_pendingMaintenance; }
    inline bool PendingMaintenanceHasBeenSet() const { return m_pendingMaintenanceHasBeenSet; }
    template<typename PendingMaintenanceT = Aws::String>
    void SetPendingMaintenance(PendingMaintenanceT&& value) { m_pendingMaintenanceHasBeenSet = true; m_pendingMaintenance = std::forward<PendingMaintenanceT>(value); }
    template<typename PendingMaintenanceT = Aws::String>
    MaintenanceDetails& WithPendingMaintenance(PendingMaintenanceT&& value) { SetPendingMaintenance(std::forward<PendingMaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp after which Amazon Web Services will automatically apply
     * maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetMaintenanceAutoAppliedAfter() const { return m_maintenanceAutoAppliedAfter; }
    inline bool MaintenanceAutoAppliedAfterHasBeenSet() const { return m_maintenanceAutoAppliedAfterHasBeenSet; }
    template<typename MaintenanceAutoAppliedAfterT = Aws::Utils::DateTime>
    void SetMaintenanceAutoAppliedAfter(MaintenanceAutoAppliedAfterT&& value) { m_maintenanceAutoAppliedAfterHasBeenSet = true; m_maintenanceAutoAppliedAfter = std::forward<MaintenanceAutoAppliedAfterT>(value); }
    template<typename MaintenanceAutoAppliedAfterT = Aws::Utils::DateTime>
    MaintenanceDetails& WithMaintenanceAutoAppliedAfter(MaintenanceAutoAppliedAfterT&& value) { SetMaintenanceAutoAppliedAfter(std::forward<MaintenanceAutoAppliedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of last applied maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMaintenanceApplied() const { return m_lastMaintenanceApplied; }
    inline bool LastMaintenanceAppliedHasBeenSet() const { return m_lastMaintenanceAppliedHasBeenSet; }
    template<typename LastMaintenanceAppliedT = Aws::Utils::DateTime>
    void SetLastMaintenanceApplied(LastMaintenanceAppliedT&& value) { m_lastMaintenanceAppliedHasBeenSet = true; m_lastMaintenanceApplied = std::forward<LastMaintenanceAppliedT>(value); }
    template<typename LastMaintenanceAppliedT = Aws::Utils::DateTime>
    MaintenanceDetails& WithLastMaintenanceApplied(LastMaintenanceAppliedT&& value) { SetLastMaintenanceApplied(std::forward<LastMaintenanceAppliedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pendingMaintenance;
    bool m_pendingMaintenanceHasBeenSet = false;

    Aws::Utils::DateTime m_maintenanceAutoAppliedAfter{};
    bool m_maintenanceAutoAppliedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastMaintenanceApplied{};
    bool m_lastMaintenanceAppliedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
