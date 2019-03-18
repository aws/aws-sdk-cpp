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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/UpgradeStep.h>
#include <aws/es/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Represents a single step of the Upgrade or Upgrade Eligibility Check
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeStepItem">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API UpgradeStepItem
  {
  public:
    UpgradeStepItem();
    UpgradeStepItem(Aws::Utils::Json::JsonView jsonValue);
    UpgradeStepItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline const UpgradeStep& GetUpgradeStep() const{ return m_upgradeStep; }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline bool UpgradeStepHasBeenSet() const { return m_upgradeStepHasBeenSet; }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline void SetUpgradeStep(const UpgradeStep& value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = value; }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline void SetUpgradeStep(UpgradeStep&& value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = std::move(value); }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline UpgradeStepItem& WithUpgradeStep(const UpgradeStep& value) { SetUpgradeStep(value); return *this;}

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline UpgradeStepItem& WithUpgradeStep(UpgradeStep&& value) { SetUpgradeStep(std::move(value)); return *this;}


    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetUpgradeStepStatus() const{ return m_upgradeStepStatus; }

    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline bool UpgradeStepStatusHasBeenSet() const { return m_upgradeStepStatusHasBeenSet; }

    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStepStatus(const UpgradeStatus& value) { m_upgradeStepStatusHasBeenSet = true; m_upgradeStepStatus = value; }

    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStepStatus(UpgradeStatus&& value) { m_upgradeStepStatusHasBeenSet = true; m_upgradeStepStatus = std::move(value); }

    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeStepItem& WithUpgradeStepStatus(const UpgradeStatus& value) { SetUpgradeStepStatus(value); return *this;}

    /**
     * <p> The status of a particular step during an upgrade. The status can take one
     * of the following values: <ul> <li>In Progress</li> <li>Succeeded</li>
     * <li>Succeeded with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeStepItem& WithUpgradeStepStatus(UpgradeStatus&& value) { SetUpgradeStepStatus(std::move(value)); return *this;}


    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssues() const{ return m_issues; }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline void SetIssues(const Aws::Vector<Aws::String>& value) { m_issuesHasBeenSet = true; m_issues = value; }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline void SetIssues(Aws::Vector<Aws::String>&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline UpgradeStepItem& WithIssues(const Aws::Vector<Aws::String>& value) { SetIssues(value); return *this;}

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline UpgradeStepItem& WithIssues(Aws::Vector<Aws::String>&& value) { SetIssues(std::move(value)); return *this;}

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline UpgradeStepItem& AddIssues(const Aws::String& value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline UpgradeStepItem& AddIssues(Aws::String&& value) { m_issuesHasBeenSet = true; m_issues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline UpgradeStepItem& AddIssues(const char* value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }


    /**
     * <p>The Floating point value representing progress percentage of a particular
     * step.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>The Floating point value representing progress percentage of a particular
     * step.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>The Floating point value representing progress percentage of a particular
     * step.</p>
     */
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>The Floating point value representing progress percentage of a particular
     * step.</p>
     */
    inline UpgradeStepItem& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}

  private:

    UpgradeStep m_upgradeStep;
    bool m_upgradeStepHasBeenSet;

    UpgradeStatus m_upgradeStepStatus;
    bool m_upgradeStepStatusHasBeenSet;

    Aws::Vector<Aws::String> m_issues;
    bool m_issuesHasBeenSet;

    double m_progressPercent;
    bool m_progressPercentHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
