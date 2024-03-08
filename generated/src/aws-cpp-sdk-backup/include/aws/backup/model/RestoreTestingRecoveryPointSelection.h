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
   * <p>Required: Algorithm; Required: Recovery point types; IncludeVaults(one or
   * more). Optional: SelectionWindowDays ('30' if not specified);ExcludeVaults (list
   * of selectors), defaults to empty list if not listed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingRecoveryPointSelection">AWS
   * API Reference</a></p>
   */
  class RestoreTestingRecoveryPointSelection
  {
  public:
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection();
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingRecoveryPointSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline const RestoreTestingRecoveryPointSelectionAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline void SetAlgorithm(const RestoreTestingRecoveryPointSelectionAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline void SetAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithAlgorithm(const RestoreTestingRecoveryPointSelectionAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>Acceptable values include "LATEST_WITHIN_WINDOW" or
     * "RANDOM_WITHIN_WINDOW"</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeVaults() const{ return m_excludeVaults; }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline bool ExcludeVaultsHasBeenSet() const { return m_excludeVaultsHasBeenSet; }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline void SetExcludeVaults(const Aws::Vector<Aws::String>& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults = value; }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline void SetExcludeVaults(Aws::Vector<Aws::String>&& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults = std::move(value); }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithExcludeVaults(const Aws::Vector<Aws::String>& value) { SetExcludeVaults(value); return *this;}

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithExcludeVaults(Aws::Vector<Aws::String>&& value) { SetExcludeVaults(std::move(value)); return *this;}

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddExcludeVaults(const Aws::String& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults.push_back(value); return *this; }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddExcludeVaults(Aws::String&& value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults.push_back(std::move(value)); return *this; }

    /**
     * <p>Accepted values include specific ARNs or list of selectors. Defaults to empty
     * list if not listed.</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddExcludeVaults(const char* value) { m_excludeVaultsHasBeenSet = true; m_excludeVaults.push_back(value); return *this; }


    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeVaults() const{ return m_includeVaults; }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline bool IncludeVaultsHasBeenSet() const { return m_includeVaultsHasBeenSet; }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline void SetIncludeVaults(const Aws::Vector<Aws::String>& value) { m_includeVaultsHasBeenSet = true; m_includeVaults = value; }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline void SetIncludeVaults(Aws::Vector<Aws::String>&& value) { m_includeVaultsHasBeenSet = true; m_includeVaults = std::move(value); }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithIncludeVaults(const Aws::Vector<Aws::String>& value) { SetIncludeVaults(value); return *this;}

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithIncludeVaults(Aws::Vector<Aws::String>&& value) { SetIncludeVaults(std::move(value)); return *this;}

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddIncludeVaults(const Aws::String& value) { m_includeVaultsHasBeenSet = true; m_includeVaults.push_back(value); return *this; }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddIncludeVaults(Aws::String&& value) { m_includeVaultsHasBeenSet = true; m_includeVaults.push_back(std::move(value)); return *this; }

    /**
     * <p>Accepted values include wildcard ["*"] or by specific ARNs or ARN wilcard
     * replacement ["arn:aws:backup:us-west-2:123456789012:backup-vault:asdf", ...]
     * ["arn:aws:backup:*:*:backup-vault:asdf-*", ...]</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddIncludeVaults(const char* value) { m_includeVaultsHasBeenSet = true; m_includeVaults.push_back(value); return *this; }


    /**
     * <p>These are the types of recovery points.</p>
     */
    inline const Aws::Vector<RestoreTestingRecoveryPointType>& GetRecoveryPointTypes() const{ return m_recoveryPointTypes; }

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline bool RecoveryPointTypesHasBeenSet() const { return m_recoveryPointTypesHasBeenSet; }

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline void SetRecoveryPointTypes(const Aws::Vector<RestoreTestingRecoveryPointType>& value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes = value; }

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline void SetRecoveryPointTypes(Aws::Vector<RestoreTestingRecoveryPointType>&& value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes = std::move(value); }

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithRecoveryPointTypes(const Aws::Vector<RestoreTestingRecoveryPointType>& value) { SetRecoveryPointTypes(value); return *this;}

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithRecoveryPointTypes(Aws::Vector<RestoreTestingRecoveryPointType>&& value) { SetRecoveryPointTypes(std::move(value)); return *this;}

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddRecoveryPointTypes(const RestoreTestingRecoveryPointType& value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes.push_back(value); return *this; }

    /**
     * <p>These are the types of recovery points.</p>
     */
    inline RestoreTestingRecoveryPointSelection& AddRecoveryPointTypes(RestoreTestingRecoveryPointType&& value) { m_recoveryPointTypesHasBeenSet = true; m_recoveryPointTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Accepted values are integers from 1 to 365.</p>
     */
    inline int GetSelectionWindowDays() const{ return m_selectionWindowDays; }

    /**
     * <p>Accepted values are integers from 1 to 365.</p>
     */
    inline bool SelectionWindowDaysHasBeenSet() const { return m_selectionWindowDaysHasBeenSet; }

    /**
     * <p>Accepted values are integers from 1 to 365.</p>
     */
    inline void SetSelectionWindowDays(int value) { m_selectionWindowDaysHasBeenSet = true; m_selectionWindowDays = value; }

    /**
     * <p>Accepted values are integers from 1 to 365.</p>
     */
    inline RestoreTestingRecoveryPointSelection& WithSelectionWindowDays(int value) { SetSelectionWindowDays(value); return *this;}

  private:

    RestoreTestingRecoveryPointSelectionAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeVaults;
    bool m_excludeVaultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeVaults;
    bool m_includeVaultsHasBeenSet = false;

    Aws::Vector<RestoreTestingRecoveryPointType> m_recoveryPointTypes;
    bool m_recoveryPointTypesHasBeenSet = false;

    int m_selectionWindowDays;
    bool m_selectionWindowDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
