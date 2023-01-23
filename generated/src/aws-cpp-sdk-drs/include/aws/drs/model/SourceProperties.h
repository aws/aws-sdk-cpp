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
#include <aws/drs/model/Disk.h>
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
   * <p>Properties of the Source Server machine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/SourceProperties">AWS
   * API Reference</a></p>
   */
  class SourceProperties
  {
  public:
    AWS_DRS_API SourceProperties();
    AWS_DRS_API SourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of CPUs.</p>
     */
    inline const Aws::Vector<CPU>& GetCpus() const{ return m_cpus; }

    /**
     * <p>An array of CPUs.</p>
     */
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }

    /**
     * <p>An array of CPUs.</p>
     */
    inline void SetCpus(const Aws::Vector<CPU>& value) { m_cpusHasBeenSet = true; m_cpus = value; }

    /**
     * <p>An array of CPUs.</p>
     */
    inline void SetCpus(Aws::Vector<CPU>&& value) { m_cpusHasBeenSet = true; m_cpus = std::move(value); }

    /**
     * <p>An array of CPUs.</p>
     */
    inline SourceProperties& WithCpus(const Aws::Vector<CPU>& value) { SetCpus(value); return *this;}

    /**
     * <p>An array of CPUs.</p>
     */
    inline SourceProperties& WithCpus(Aws::Vector<CPU>&& value) { SetCpus(std::move(value)); return *this;}

    /**
     * <p>An array of CPUs.</p>
     */
    inline SourceProperties& AddCpus(const CPU& value) { m_cpusHasBeenSet = true; m_cpus.push_back(value); return *this; }

    /**
     * <p>An array of CPUs.</p>
     */
    inline SourceProperties& AddCpus(CPU&& value) { m_cpusHasBeenSet = true; m_cpus.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of disks.</p>
     */
    inline const Aws::Vector<Disk>& GetDisks() const{ return m_disks; }

    /**
     * <p>An array of disks.</p>
     */
    inline bool DisksHasBeenSet() const { return m_disksHasBeenSet; }

    /**
     * <p>An array of disks.</p>
     */
    inline void SetDisks(const Aws::Vector<Disk>& value) { m_disksHasBeenSet = true; m_disks = value; }

    /**
     * <p>An array of disks.</p>
     */
    inline void SetDisks(Aws::Vector<Disk>&& value) { m_disksHasBeenSet = true; m_disks = std::move(value); }

    /**
     * <p>An array of disks.</p>
     */
    inline SourceProperties& WithDisks(const Aws::Vector<Disk>& value) { SetDisks(value); return *this;}

    /**
     * <p>An array of disks.</p>
     */
    inline SourceProperties& WithDisks(Aws::Vector<Disk>&& value) { SetDisks(std::move(value)); return *this;}

    /**
     * <p>An array of disks.</p>
     */
    inline SourceProperties& AddDisks(const Disk& value) { m_disksHasBeenSet = true; m_disks.push_back(value); return *this; }

    /**
     * <p>An array of disks.</p>
     */
    inline SourceProperties& AddDisks(Disk&& value) { m_disksHasBeenSet = true; m_disks.push_back(std::move(value)); return *this; }


    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline const IdentificationHints& GetIdentificationHints() const{ return m_identificationHints; }

    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline bool IdentificationHintsHasBeenSet() const { return m_identificationHintsHasBeenSet; }

    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline void SetIdentificationHints(const IdentificationHints& value) { m_identificationHintsHasBeenSet = true; m_identificationHints = value; }

    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline void SetIdentificationHints(IdentificationHints&& value) { m_identificationHintsHasBeenSet = true; m_identificationHints = std::move(value); }

    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline SourceProperties& WithIdentificationHints(const IdentificationHints& value) { SetIdentificationHints(value); return *this;}

    /**
     * <p>Hints used to uniquely identify a machine.</p>
     */
    inline SourceProperties& WithIdentificationHints(IdentificationHints&& value) { SetIdentificationHints(std::move(value)); return *this;}


    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline const Aws::String& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::String& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::String&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline void SetLastUpdatedDateTime(const char* value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime.assign(value); }

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline SourceProperties& WithLastUpdatedDateTime(const Aws::String& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline SourceProperties& WithLastUpdatedDateTime(Aws::String&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the Source Properties were last updated on.</p>
     */
    inline SourceProperties& WithLastUpdatedDateTime(const char* value) { SetLastUpdatedDateTime(value); return *this;}


    /**
     * <p>An array of network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>An array of network interfaces.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>An array of network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>An array of network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>An array of network interfaces.</p>
     */
    inline SourceProperties& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>An array of network interfaces.</p>
     */
    inline SourceProperties& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>An array of network interfaces.</p>
     */
    inline SourceProperties& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>An array of network interfaces.</p>
     */
    inline SourceProperties& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>Operating system.</p>
     */
    inline const OS& GetOs() const{ return m_os; }

    /**
     * <p>Operating system.</p>
     */
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }

    /**
     * <p>Operating system.</p>
     */
    inline void SetOs(const OS& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>Operating system.</p>
     */
    inline void SetOs(OS&& value) { m_osHasBeenSet = true; m_os = std::move(value); }

    /**
     * <p>Operating system.</p>
     */
    inline SourceProperties& WithOs(const OS& value) { SetOs(value); return *this;}

    /**
     * <p>Operating system.</p>
     */
    inline SourceProperties& WithOs(OS&& value) { SetOs(std::move(value)); return *this;}


    /**
     * <p>The amount of RAM in bytes.</p>
     */
    inline long long GetRamBytes() const{ return m_ramBytes; }

    /**
     * <p>The amount of RAM in bytes.</p>
     */
    inline bool RamBytesHasBeenSet() const { return m_ramBytesHasBeenSet; }

    /**
     * <p>The amount of RAM in bytes.</p>
     */
    inline void SetRamBytes(long long value) { m_ramBytesHasBeenSet = true; m_ramBytes = value; }

    /**
     * <p>The amount of RAM in bytes.</p>
     */
    inline SourceProperties& WithRamBytes(long long value) { SetRamBytes(value); return *this;}


    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline const Aws::String& GetRecommendedInstanceType() const{ return m_recommendedInstanceType; }

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline bool RecommendedInstanceTypeHasBeenSet() const { return m_recommendedInstanceTypeHasBeenSet; }

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline void SetRecommendedInstanceType(const Aws::String& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = value; }

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline void SetRecommendedInstanceType(Aws::String&& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = std::move(value); }

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline void SetRecommendedInstanceType(const char* value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType.assign(value); }

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline SourceProperties& WithRecommendedInstanceType(const Aws::String& value) { SetRecommendedInstanceType(value); return *this;}

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline SourceProperties& WithRecommendedInstanceType(Aws::String&& value) { SetRecommendedInstanceType(std::move(value)); return *this;}

    /**
     * <p>The recommended EC2 instance type that will be used when recovering the
     * Source Server.</p>
     */
    inline SourceProperties& WithRecommendedInstanceType(const char* value) { SetRecommendedInstanceType(value); return *this;}

  private:

    Aws::Vector<CPU> m_cpus;
    bool m_cpusHasBeenSet = false;

    Aws::Vector<Disk> m_disks;
    bool m_disksHasBeenSet = false;

    IdentificationHints m_identificationHints;
    bool m_identificationHintsHasBeenSet = false;

    Aws::String m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    OS m_os;
    bool m_osHasBeenSet = false;

    long long m_ramBytes;
    bool m_ramBytesHasBeenSet = false;

    Aws::String m_recommendedInstanceType;
    bool m_recommendedInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
