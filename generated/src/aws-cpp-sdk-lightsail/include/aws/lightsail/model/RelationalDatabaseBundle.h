/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a database bundle. A bundle describes the performance
   * specifications of the database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseBundle">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseBundle
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseBundle() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the database bundle.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    RelationalDatabaseBundle& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the database bundle.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RelationalDatabaseBundle& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of the database bundle in US currency.</p>
     */
    inline double GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline RelationalDatabaseBundle& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM in GB (for example, <code>2.0</code>) for the database
     * bundle.</p>
     */
    inline double GetRamSizeInGb() const { return m_ramSizeInGb; }
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }
    inline RelationalDatabaseBundle& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk for the database bundle.</p>
     */
    inline int GetDiskSizeInGb() const { return m_diskSizeInGb; }
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }
    inline RelationalDatabaseBundle& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer rate per month in GB for the database bundle.</p>
     */
    inline int GetTransferPerMonthInGb() const { return m_transferPerMonthInGb; }
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }
    inline RelationalDatabaseBundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of virtual CPUs (vCPUs) for the database bundle.</p>
     */
    inline int GetCpuCount() const { return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline RelationalDatabaseBundle& WithCpuCount(int value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the database bundle is encrypted.</p>
     */
    inline bool GetIsEncrypted() const { return m_isEncrypted; }
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }
    inline RelationalDatabaseBundle& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the database bundle is active.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline RelationalDatabaseBundle& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_price{0.0};
    bool m_priceHasBeenSet = false;

    double m_ramSizeInGb{0.0};
    bool m_ramSizeInGbHasBeenSet = false;

    int m_diskSizeInGb{0};
    bool m_diskSizeInGbHasBeenSet = false;

    int m_transferPerMonthInGb{0};
    bool m_transferPerMonthInGbHasBeenSet = false;

    int m_cpuCount{0};
    bool m_cpuCountHasBeenSet = false;

    bool m_isEncrypted{false};
    bool m_isEncryptedHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
