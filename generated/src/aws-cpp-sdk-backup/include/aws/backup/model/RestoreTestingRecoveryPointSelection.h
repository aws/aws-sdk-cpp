/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/RestoreTestingRecoveryPointSelectionAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingRecoveryPointType.h>
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
   * <p> <code>RecoveryPointSelection</code> has five parameters (three required and
   * two optional). The values you specify determine which recovery point is included
   * in the restore test. You must indicate with <code>Algorithm</code> if you want
   * the latest recovery point within your <code>SelectionWindowDays</code> or if you
   * want a random recovery point, and you must indicate through
   * <code>IncludeVaults</code> from which vaults the recovery points can be
   * chosen.</p> <p> <code>Algorithm</code> (<i>required</i>) Valid values:
   * "<code>LATEST_WITHIN_WINDOW</code>" or "<code>RANDOM_WITHIN_WINDOW</code>".</p>
   * <p> <code>Recovery point types</code> (<i>required</i>) Valid values:
   * "<code>SNAPSHOT</code>" and/or "<code>CONTINUOUS</code>". Include
   * <code>SNAPSHOT</code> to restore only snapshot recovery points; include
   * <code>CONTINUOUS</code> to restore continuous recovery points (point in time
   * restore / PITR); use both to restore either a snapshot or a continuous recovery
   * point. The recovery point will be determined by the value for
   * <code>Algorithm</code>.</p> <p> <code>IncludeVaults</code> (<i>required</i>).
   * You must include one or more backup vaults. Use the wildcard ["*"] or specific
   * ARNs.</p> <p> <code>SelectionWindowDays</code> (<i>optional</i>) Value must be
   * an integer (in days) from 1 to 365. If not included, the value defaults to
   * <code>30</code>.</p> <p> <code>ExcludeVaults</code> (<i>optional</i>). You can
   * choose to input one or more specific backup vault ARNs to exclude those vaults'
   * contents from restore eligibility. Or, you can include a list of selectors. If
   * this parameter and its value are not included, it defaults to empty
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingRecoveryPointSelection">AWS
   * API Reference</a></p>
   */
  class RestoreTestingRecoveryPointSelection
  {
  public:
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection() = default;
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline RestoreTestingRecoveryPointSelectionAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline RestoreTestingRecoveryPointSelection& WithAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeVaults() const { return m_excludeVaults; }
    inline bool ExcludeVaultsHasBeenSet() const { return m_excludeVaultsHasBeenSet; }
    template<typename ExcludeVaultsT = Aws::Vector<Aws::String>>
    void SetExcludeVaults(ExcludeVaultsT&& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults = std::forward<ExcludeVaultsT>(value); }
    template<typename ExcludeVaultsT = Aws::Vector<Aws::String>>
    RestoreTestingRecoveryPointSelection& WithExcludeVaults(ExcludeVaultsT&& value) { SetExcludeVaults(std::forward<ExcludeVaultsT>(value)); return *this;}
    template<typename ExcludeVaultsT = Aws::String>
    RestoreTestingRecoveryPointSelection& AddExcludeVaults(ExcludeVaultsT&& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults.emplace_back(std::forward<ExcludeVaultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeVaults() const { return m_includeVaults; }
    inline bool IncludeVaultsHasBeenSet() const { return m_includeVaultsHasBeenSet; }
    template<typename IncludeVaultsT = Aws::Vector<Aws::String>>
    void SetIncludeVaults(IncludeVaultsT&& value) { m_includeVaultsHasBeenSet = true; m_includeVaults = std::forward<IncludeVaultsT>(value); }
    template<typename IncludeVaultsT = Aws::Vector<Aws::String>>
    RestoreTestingRecoveryPointSelection& WithIncludeVaults(IncludeVaultsT&& value) { SetIncludeVaults(std::forward<IncludeVaultsT>(value)); return *this;}
    template<typename IncludeVaultsT = Aws::String>
    RestoreTestingRecoveryPointSelection& AddIncludeVaults(IncludeVaultsT&& value) { m_includeVaultsHasBeenSet = true; m_includeVaults.emplace_back(std::forward<IncludeVaultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the types of recovery points.</p> <p>Include <code>SNAPSHOT</code>
     * to restore only snapshot recovery points; include <code>CONTINUOUS</code> to
     * restore continuous recovery points (point in time restore / PITR); use both to
     * restore either a snapshot or a continuous recovery point. The recovery point
     * will be determined by the value for <code>Algorithm</code>.</p>
     */
    inline const Aws::Vector<RestoreTestingRecoveryPointType>& GetRecoveryPointTypes() const { return m_recoveryPointTypes; }
    inline bool RecoveryPointTypesHasBeenSet() const { return m_recoveryPointTypesHasBeenSet; }
    template<typename RecoveryPointTypesT = Aws::Vector<RestoreTestingRecoveryPointType>>
    void SetRecoveryPointTypes(RecoveryPointTypesT&& value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes = std::forward<RecoveryPointTypesT>(value); }
    template<typename RecoveryPointTypesT = Aws::Vector<RestoreTestingRecoveryPointType>>
    RestoreTestingRecoveryPointSelection& WithRecoveryPointTypes(RecoveryPointTypesT&& value) { SetRecoveryPointTypes(std::forward<RecoveryPointTypesT>(value)); return *this;}
    inline RestoreTestingRecoveryPointSelection& AddRecoveryPointTypes(RestoreTestingRecoveryPointType value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Accepted values are integers from 1 to 365.</p>
     */
    inline int GetSelectionWindowDays() const { return m_selectionWindowDays; }
    inline bool SelectionWindowDaysHasBeenSet() const { return m_selectionWindowDaysHasBeenSet; }
    inline void SetSelectionWindowDays(int value) { m_selectionWindowDaysHasBeenSet = true; m_selectionWindowDays = value; }
    inline RestoreTestingRecoveryPointSelection& WithSelectionWindowDays(int value) { SetSelectionWindowDays(value); return *this;}
    ///@}
  private:

    RestoreTestingRecoveryPointSelectionAlgorithm m_algorithm{RestoreTestingRecoveryPointSelectionAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeVaults;
    bool m_excludeVaultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeVaults;
    bool m_includeVaultsHasBeenSet = false;

    Aws::Vector<RestoreTestingRecoveryPointType> m_recoveryPointTypes;
    bool m_recoveryPointTypesHasBeenSet = false;

    int m_selectionWindowDays{0};
    bool m_selectionWindowDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
