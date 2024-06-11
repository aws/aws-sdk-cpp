/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/UpgradeStepItem.h>
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
   * <p>History of the last 10 Upgrades and Upgrade Eligibility Checks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeHistory">AWS
   * API Reference</a></p>
   */
  class UpgradeHistory
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpgradeHistory();
    AWS_ELASTICSEARCHSERVICE_API UpgradeHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API UpgradeHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that describes the update briefly</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }
    inline bool UpgradeNameHasBeenSet() const { return m_upgradeNameHasBeenSet; }
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = value; }
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::move(value); }
    inline void SetUpgradeName(const char* value) { m_upgradeNameHasBeenSet = true; m_upgradeName.assign(value); }
    inline UpgradeHistory& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}
    inline UpgradeHistory& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}
    inline UpgradeHistory& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline UpgradeHistory& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline UpgradeHistory& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetUpgradeStatus() const{ return m_upgradeStatus; }
    inline bool UpgradeStatusHasBeenSet() const { return m_upgradeStatusHasBeenSet; }
    inline void SetUpgradeStatus(const UpgradeStatus& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = value; }
    inline void SetUpgradeStatus(UpgradeStatus&& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = std::move(value); }
    inline UpgradeHistory& WithUpgradeStatus(const UpgradeStatus& value) { SetUpgradeStatus(value); return *this;}
    inline UpgradeHistory& WithUpgradeStatus(UpgradeStatus&& value) { SetUpgradeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline const Aws::Vector<UpgradeStepItem>& GetStepsList() const{ return m_stepsList; }
    inline bool StepsListHasBeenSet() const { return m_stepsListHasBeenSet; }
    inline void SetStepsList(const Aws::Vector<UpgradeStepItem>& value) { m_stepsListHasBeenSet = true; m_stepsList = value; }
    inline void SetStepsList(Aws::Vector<UpgradeStepItem>&& value) { m_stepsListHasBeenSet = true; m_stepsList = std::move(value); }
    inline UpgradeHistory& WithStepsList(const Aws::Vector<UpgradeStepItem>& value) { SetStepsList(value); return *this;}
    inline UpgradeHistory& WithStepsList(Aws::Vector<UpgradeStepItem>&& value) { SetStepsList(std::move(value)); return *this;}
    inline UpgradeHistory& AddStepsList(const UpgradeStepItem& value) { m_stepsListHasBeenSet = true; m_stepsList.push_back(value); return *this; }
    inline UpgradeHistory& AddStepsList(UpgradeStepItem&& value) { m_stepsListHasBeenSet = true; m_stepsList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_upgradeName;
    bool m_upgradeNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    UpgradeStatus m_upgradeStatus;
    bool m_upgradeStatusHasBeenSet = false;

    Aws::Vector<UpgradeStepItem> m_stepsList;
    bool m_stepsListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
