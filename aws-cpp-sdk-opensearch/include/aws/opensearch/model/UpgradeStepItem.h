/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/UpgradeStep.h>
#include <aws/opensearch/model/UpgradeStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Represents a single step of the upgrade or upgrade eligibility check
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeStepItem">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API UpgradeStepItem
  {
  public:
    UpgradeStepItem();
    UpgradeStepItem(Aws::Utils::Json::JsonView jsonValue);
    UpgradeStepItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline const UpgradeStep& GetUpgradeStep() const{ return m_upgradeStep; }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline bool UpgradeStepHasBeenSet() const { return m_upgradeStepHasBeenSet; }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline void SetUpgradeStep(const UpgradeStep& value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = value; }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline void SetUpgradeStep(UpgradeStep&& value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = std::move(value); }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline UpgradeStepItem& WithUpgradeStep(const UpgradeStep& value) { SetUpgradeStep(value); return *this;}

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline UpgradeStepItem& WithUpgradeStep(UpgradeStep&& value) { SetUpgradeStep(std::move(value)); return *this;}


    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetUpgradeStepStatus() const{ return m_upgradeStepStatus; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline bool UpgradeStepStatusHasBeenSet() const { return m_upgradeStepStatusHasBeenSet; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStepStatus(const UpgradeStatus& value) { m_upgradeStepStatusHasBeenSet = true; m_upgradeStepStatus = value; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStepStatus(UpgradeStatus&& value) { m_upgradeStepStatusHasBeenSet = true; m_upgradeStepStatus = std::move(value); }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeStepItem& WithUpgradeStepStatus(const UpgradeStatus& value) { SetUpgradeStepStatus(value); return *this;}

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
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
     * <p>The floating point value representing the progress percentage of a particular
     * step.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>The floating point value representing the progress percentage of a particular
     * step.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>The floating point value representing the progress percentage of a particular
     * step.</p>
     */
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>The floating point value representing the progress percentage of a particular
     * step.</p>
     */
    inline UpgradeStepItem& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}

  private:

    UpgradeStep m_upgradeStep;
    bool m_upgradeStepHasBeenSet = false;

    UpgradeStatus m_upgradeStepStatus;
    bool m_upgradeStepStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_issues;
    bool m_issuesHasBeenSet = false;

    double m_progressPercent;
    bool m_progressPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
