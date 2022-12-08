/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/DateRange.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This specifies criteria to assign a set of resources, such as resource types
   * or backup vaults.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointSelection">AWS
   * API Reference</a></p>
   */
  class RecoveryPointSelection
  {
  public:
    AWS_BACKUP_API RecoveryPointSelection();
    AWS_BACKUP_API RecoveryPointSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVaultNames() const{ return m_vaultNames; }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline bool VaultNamesHasBeenSet() const { return m_vaultNamesHasBeenSet; }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline void SetVaultNames(const Aws::Vector<Aws::String>& value) { m_vaultNamesHasBeenSet = true; m_vaultNames = value; }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline void SetVaultNames(Aws::Vector<Aws::String>&& value) { m_vaultNamesHasBeenSet = true; m_vaultNames = std::move(value); }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline RecoveryPointSelection& WithVaultNames(const Aws::Vector<Aws::String>& value) { SetVaultNames(value); return *this;}

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline RecoveryPointSelection& WithVaultNames(Aws::Vector<Aws::String>&& value) { SetVaultNames(std::move(value)); return *this;}

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline RecoveryPointSelection& AddVaultNames(const Aws::String& value) { m_vaultNamesHasBeenSet = true; m_vaultNames.push_back(value); return *this; }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline RecoveryPointSelection& AddVaultNames(Aws::String&& value) { m_vaultNamesHasBeenSet = true; m_vaultNames.push_back(std::move(value)); return *this; }

    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline RecoveryPointSelection& AddVaultNames(const char* value) { m_vaultNamesHasBeenSet = true; m_vaultNames.push_back(value); return *this; }


    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<Aws::String>& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = value; }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<Aws::String>&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::move(value); }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline RecoveryPointSelection& WithResourceIdentifiers(const Aws::Vector<Aws::String>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline RecoveryPointSelection& WithResourceIdentifiers(Aws::Vector<Aws::String>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline RecoveryPointSelection& AddResourceIdentifiers(const Aws::String& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline RecoveryPointSelection& AddResourceIdentifiers(Aws::String&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline RecoveryPointSelection& AddResourceIdentifiers(const char* value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }


    
    inline const DateRange& GetDateRange() const{ return m_dateRange; }

    
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    
    inline void SetDateRange(const DateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    
    inline void SetDateRange(DateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    
    inline RecoveryPointSelection& WithDateRange(const DateRange& value) { SetDateRange(value); return *this;}

    
    inline RecoveryPointSelection& WithDateRange(DateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_vaultNames;
    bool m_vaultNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;

    DateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
