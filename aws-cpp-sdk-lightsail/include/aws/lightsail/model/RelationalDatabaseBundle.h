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
  class AWS_LIGHTSAIL_API RelationalDatabaseBundle
  {
  public:
    RelationalDatabaseBundle();
    RelationalDatabaseBundle(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for the database bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The ID for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The name for the database bundle.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the database bundle.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the database bundle.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the database bundle.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the database bundle.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The cost of the database bundle in US currency.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The cost of the database bundle in US currency.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The cost of the database bundle in US currency.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The cost of the database bundle in US currency.</p>
     */
    inline RelationalDatabaseBundle& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The amount of RAM in GB (for example, <code>2.0</code>) for the database
     * bundle.</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }

    /**
     * <p>The amount of RAM in GB (for example, <code>2.0</code>) for the database
     * bundle.</p>
     */
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }

    /**
     * <p>The amount of RAM in GB (for example, <code>2.0</code>) for the database
     * bundle.</p>
     */
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }

    /**
     * <p>The amount of RAM in GB (for example, <code>2.0</code>) for the database
     * bundle.</p>
     */
    inline RelationalDatabaseBundle& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}


    /**
     * <p>The size of the disk for the database bundle.</p>
     */
    inline int GetDiskSizeInGb() const{ return m_diskSizeInGb; }

    /**
     * <p>The size of the disk for the database bundle.</p>
     */
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk for the database bundle.</p>
     */
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }

    /**
     * <p>The size of the disk for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}


    /**
     * <p>The data transfer rate per month in GB for the database bundle.</p>
     */
    inline int GetTransferPerMonthInGb() const{ return m_transferPerMonthInGb; }

    /**
     * <p>The data transfer rate per month in GB for the database bundle.</p>
     */
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }

    /**
     * <p>The data transfer rate per month in GB for the database bundle.</p>
     */
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }

    /**
     * <p>The data transfer rate per month in GB for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}


    /**
     * <p>The number of virtual CPUs (vCPUs) for the database bundle.</p>
     */
    inline int GetCpuCount() const{ return m_cpuCount; }

    /**
     * <p>The number of virtual CPUs (vCPUs) for the database bundle.</p>
     */
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }

    /**
     * <p>The number of virtual CPUs (vCPUs) for the database bundle.</p>
     */
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }

    /**
     * <p>The number of virtual CPUs (vCPUs) for the database bundle.</p>
     */
    inline RelationalDatabaseBundle& WithCpuCount(int value) { SetCpuCount(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the database bundle is encrypted.</p>
     */
    inline bool GetIsEncrypted() const{ return m_isEncrypted; }

    /**
     * <p>A Boolean value indicating whether the database bundle is encrypted.</p>
     */
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the database bundle is encrypted.</p>
     */
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }

    /**
     * <p>A Boolean value indicating whether the database bundle is encrypted.</p>
     */
    inline RelationalDatabaseBundle& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the database bundle is active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value indicating whether the database bundle is active.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the database bundle is active.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value indicating whether the database bundle is active.</p>
     */
    inline RelationalDatabaseBundle& WithIsActive(bool value) { SetIsActive(value); return *this;}

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_price;
    bool m_priceHasBeenSet;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet;

    int m_diskSizeInGb;
    bool m_diskSizeInGbHasBeenSet;

    int m_transferPerMonthInGb;
    bool m_transferPerMonthInGbHasBeenSet;

    int m_cpuCount;
    bool m_cpuCountHasBeenSet;

    bool m_isEncrypted;
    bool m_isEncryptedHasBeenSet;

    bool m_isActive;
    bool m_isActiveHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
