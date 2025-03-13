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
    AWS_BACKUP_API RecoveryPointSelection() = default;
    AWS_BACKUP_API RecoveryPointSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are the names of the vaults in which the selected recovery points are
     * contained.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVaultNames() const { return m_vaultNames; }
    inline bool VaultNamesHasBeenSet() const { return m_vaultNamesHasBeenSet; }
    template<typename VaultNamesT = Aws::Vector<Aws::String>>
    void SetVaultNames(VaultNamesT&& value) { m_vaultNamesHasBeenSet = true; m_vaultNames = std::forward<VaultNamesT>(value); }
    template<typename VaultNamesT = Aws::Vector<Aws::String>>
    RecoveryPointSelection& WithVaultNames(VaultNamesT&& value) { SetVaultNames(std::forward<VaultNamesT>(value)); return *this;}
    template<typename VaultNamesT = Aws::String>
    RecoveryPointSelection& AddVaultNames(VaultNamesT&& value) { m_vaultNamesHasBeenSet = true; m_vaultNames.emplace_back(std::forward<VaultNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the resources included in the resource selection (including type of
     * resources and vaults).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdentifiers() const { return m_resourceIdentifiers; }
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }
    template<typename ResourceIdentifiersT = Aws::Vector<Aws::String>>
    void SetResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::forward<ResourceIdentifiersT>(value); }
    template<typename ResourceIdentifiersT = Aws::Vector<Aws::String>>
    RecoveryPointSelection& WithResourceIdentifiers(ResourceIdentifiersT&& value) { SetResourceIdentifiers(std::forward<ResourceIdentifiersT>(value)); return *this;}
    template<typename ResourceIdentifiersT = Aws::String>
    RecoveryPointSelection& AddResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.emplace_back(std::forward<ResourceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DateRange& GetDateRange() const { return m_dateRange; }
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
    template<typename DateRangeT = DateRange>
    void SetDateRange(DateRangeT&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::forward<DateRangeT>(value); }
    template<typename DateRangeT = DateRange>
    RecoveryPointSelection& WithDateRange(DateRangeT&& value) { SetDateRange(std::forward<DateRangeT>(value)); return *this;}
    ///@}
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
