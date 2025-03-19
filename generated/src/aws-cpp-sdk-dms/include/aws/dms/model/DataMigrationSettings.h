/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Options for configuring a data migration, including whether to enable
   * CloudWatch logs, and the selection rules to use to include or exclude database
   * objects from the migration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataMigrationSettings">AWS
   * API Reference</a></p>
   */
  class DataMigrationSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of parallel jobs that trigger parallel threads to unload the
     * tables from the source, and then load them to the target.</p>
     */
    inline int GetNumberOfJobs() const { return m_numberOfJobs; }
    inline bool NumberOfJobsHasBeenSet() const { return m_numberOfJobsHasBeenSet; }
    inline void SetNumberOfJobs(int value) { m_numberOfJobsHasBeenSet = true; m_numberOfJobs = value; }
    inline DataMigrationSettings& WithNumberOfJobs(int value) { SetNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable CloudWatch logging for the data migration.</p>
     */
    inline bool GetCloudwatchLogsEnabled() const { return m_cloudwatchLogsEnabled; }
    inline bool CloudwatchLogsEnabledHasBeenSet() const { return m_cloudwatchLogsEnabledHasBeenSet; }
    inline void SetCloudwatchLogsEnabled(bool value) { m_cloudwatchLogsEnabledHasBeenSet = true; m_cloudwatchLogsEnabled = value; }
    inline DataMigrationSettings& WithCloudwatchLogsEnabled(bool value) { SetCloudwatchLogsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string that defines what objects to include and exclude from
     * the migration.</p>
     */
    inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    template<typename SelectionRulesT = Aws::String>
    void SetSelectionRules(SelectionRulesT&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::forward<SelectionRulesT>(value); }
    template<typename SelectionRulesT = Aws::String>
    DataMigrationSettings& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}
  private:

    int m_numberOfJobs{0};
    bool m_numberOfJobsHasBeenSet = false;

    bool m_cloudwatchLogsEnabled{false};
    bool m_cloudwatchLogsEnabledHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
