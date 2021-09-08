/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/UpgradeStepItem.h>
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
   * <p>History of the last 10 upgrades and upgrade eligibility checks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeHistory">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API UpgradeHistory
  {
  public:
    UpgradeHistory();
    UpgradeHistory(Aws::Utils::Json::JsonView jsonValue);
    UpgradeHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline bool UpgradeNameHasBeenSet() const { return m_upgradeNameHasBeenSet; }

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = value; }

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::move(value); }

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline void SetUpgradeName(const char* value) { m_upgradeNameHasBeenSet = true; m_upgradeName.assign(value); }

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline UpgradeHistory& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline UpgradeHistory& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}

    /**
     * <p>A string that briefly describes the upgrade.</p>
     */
    inline UpgradeHistory& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}


    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline UpgradeHistory& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>UTC timestamp at which the upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline UpgradeHistory& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetUpgradeStatus() const{ return m_upgradeStatus; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline bool UpgradeStatusHasBeenSet() const { return m_upgradeStatusHasBeenSet; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStatus(const UpgradeStatus& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = value; }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStatus(UpgradeStatus&& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = std::move(value); }

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeHistory& WithUpgradeStatus(const UpgradeStatus& value) { SetUpgradeStatus(value); return *this;}

    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeHistory& WithUpgradeStatus(UpgradeStatus&& value) { SetUpgradeStatus(std::move(value)); return *this;}


    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline const Aws::Vector<UpgradeStepItem>& GetStepsList() const{ return m_stepsList; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline bool StepsListHasBeenSet() const { return m_stepsListHasBeenSet; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline void SetStepsList(const Aws::Vector<UpgradeStepItem>& value) { m_stepsListHasBeenSet = true; m_stepsList = value; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline void SetStepsList(Aws::Vector<UpgradeStepItem>&& value) { m_stepsListHasBeenSet = true; m_stepsList = std::move(value); }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline UpgradeHistory& WithStepsList(const Aws::Vector<UpgradeStepItem>& value) { SetStepsList(value); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline UpgradeHistory& WithStepsList(Aws::Vector<UpgradeStepItem>&& value) { SetStepsList(std::move(value)); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline UpgradeHistory& AddStepsList(const UpgradeStepItem& value) { m_stepsListHasBeenSet = true; m_stepsList.push_back(value); return *this; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as part of a specific upgrade or upgrade eligibility
     * check. </p>
     */
    inline UpgradeHistory& AddStepsList(UpgradeStepItem&& value) { m_stepsListHasBeenSet = true; m_stepsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_upgradeName;
    bool m_upgradeNameHasBeenSet;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet;

    UpgradeStatus m_upgradeStatus;
    bool m_upgradeStatusHasBeenSet;

    Aws::Vector<UpgradeStepItem> m_stepsList;
    bool m_stepsListHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
