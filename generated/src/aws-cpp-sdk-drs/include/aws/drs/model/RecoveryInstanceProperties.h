/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/IdentificationHints.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/OS.h>
#include <aws/drs/model/CPU.h>
#include <aws/drs/model/RecoveryInstanceDisk.h>
#include <aws/drs/model/NetworkInterface.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of the Recovery Instance machine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceProperties">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceProperties
  {
  public:
    AWS_DRS_API RecoveryInstanceProperties() = default;
    AWS_DRS_API RecoveryInstanceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of CPUs.</p>
     */
    inline const Aws::Vector<CPU>& GetCpus() const { return m_cpus; }
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }
    template<typename CpusT = Aws::Vector<CPU>>
    void SetCpus(CpusT&& value) { m_cpusHasBeenSet = true; m_cpus = std::forward<CpusT>(value); }
    template<typename CpusT = Aws::Vector<CPU>>
    RecoveryInstanceProperties& WithCpus(CpusT&& value) { SetCpus(std::forward<CpusT>(value)); return *this;}
    template<typename CpusT = CPU>
    RecoveryInstanceProperties& AddCpus(CpusT&& value) { m_cpusHasBeenSet = true; m_cpus.emplace_back(std::forward<CpusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of disks.</p>
     */
    inline const Aws::Vector<RecoveryInstanceDisk>& GetDisks() const { return m_disks; }
    inline bool DisksHasBeenSet() const { return m_disksHasBeenSet; }
    template<typename DisksT = Aws::Vector<RecoveryInstanceDisk>>
    void SetDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks = std::forward<DisksT>(value); }
    template<typename DisksT = Aws::Vector<RecoveryInstanceDisk>>
    RecoveryInstanceProperties& WithDisks(DisksT&& value) { SetDisks(std::forward<DisksT>(value)); return *this;}
    template<typename DisksT = RecoveryInstanceDisk>
    RecoveryInstanceProperties& AddDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks.emplace_back(std::forward<DisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline const IdentificationHints& GetIdentificationHints() const { return m_identificationHints; }
    inline bool IdentificationHintsHasBeenSet() const { return m_identificationHintsHasBeenSet; }
    template<typename IdentificationHintsT = IdentificationHints>
    void SetIdentificationHints(IdentificationHintsT&& value) { m_identificationHintsHasBeenSet = true; m_identificationHints = std::forward<IdentificationHintsT>(value); }
    template<typename IdentificationHintsT = IdentificationHints>
    RecoveryInstanceProperties& WithIdentificationHints(IdentificationHintsT&& value) { SetIdentificationHints(std::forward<IdentificationHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Recovery Instance properties were last updated on.</p>
     */
    inline const Aws::String& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::String>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::String>
    RecoveryInstanceProperties& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    RecoveryInstanceProperties& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    RecoveryInstanceProperties& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Operating system.</p>
     */
    inline const OS& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = OS>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = OS>
    RecoveryInstanceProperties& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM in bytes.</p>
     */
    inline long long GetRamBytes() const { return m_ramBytes; }
    inline bool RamBytesHasBeenSet() const { return m_ramBytesHasBeenSet; }
    inline void SetRamBytes(long long value) { m_ramBytesHasBeenSet = true; m_ramBytes = value; }
    inline RecoveryInstanceProperties& WithRamBytes(long long value) { SetRamBytes(value); return *this;}
    ///@}
  private:

    Aws::Vector<CPU> m_cpus;
    bool m_cpusHasBeenSet = false;

    Aws::Vector<RecoveryInstanceDisk> m_disks;
    bool m_disksHasBeenSet = false;

    IdentificationHints m_identificationHints;
    bool m_identificationHintsHasBeenSet = false;

    Aws::String m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    OS m_os;
    bool m_osHasBeenSet = false;

    long long m_ramBytes{0};
    bool m_ramBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
