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
  class AWS_ELASTICSEARCHSERVICE_API UpgradeHistory
  {
  public:
    UpgradeHistory();
    UpgradeHistory(Aws::Utils::Json::JsonView jsonValue);
    UpgradeHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that describes the update briefly</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline bool UpgradeNameHasBeenSet() const { return m_upgradeNameHasBeenSet; }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = value; }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::move(value); }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(const char* value) { m_upgradeNameHasBeenSet = true; m_upgradeName.assign(value); }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline UpgradeHistory& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline UpgradeHistory& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline UpgradeHistory& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}


    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline UpgradeHistory& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>UTC Timestamp at which the Upgrade API call was made in
     * "yyyy-MM-ddTHH:mm:ssZ" format.</p>
     */
    inline UpgradeHistory& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetUpgradeStatus() const{ return m_upgradeStatus; }

    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline bool UpgradeStatusHasBeenSet() const { return m_upgradeStatusHasBeenSet; }

    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStatus(const UpgradeStatus& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = value; }

    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetUpgradeStatus(UpgradeStatus&& value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = std::move(value); }

    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeHistory& WithUpgradeStatus(const UpgradeStatus& value) { SetUpgradeStatus(value); return *this;}

    /**
     * <p> The overall status of the update. The status can take one of the following
     * values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded with
     * Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeHistory& WithUpgradeStatus(UpgradeStatus&& value) { SetUpgradeStatus(std::move(value)); return *this;}


    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline const Aws::Vector<UpgradeStepItem>& GetStepsList() const{ return m_stepsList; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline bool StepsListHasBeenSet() const { return m_stepsListHasBeenSet; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline void SetStepsList(const Aws::Vector<UpgradeStepItem>& value) { m_stepsListHasBeenSet = true; m_stepsList = value; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline void SetStepsList(Aws::Vector<UpgradeStepItem>&& value) { m_stepsListHasBeenSet = true; m_stepsList = std::move(value); }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline UpgradeHistory& WithStepsList(const Aws::Vector<UpgradeStepItem>& value) { SetStepsList(value); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline UpgradeHistory& WithStepsList(Aws::Vector<UpgradeStepItem>&& value) { SetStepsList(std::move(value)); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
     */
    inline UpgradeHistory& AddStepsList(const UpgradeStepItem& value) { m_stepsListHasBeenSet = true; m_stepsList.push_back(value); return *this; }

    /**
     * <p> A list of <code> <a>UpgradeStepItem</a> </code> s representing information
     * about each step performed as pard of a specific Upgrade or Upgrade Eligibility
     * Check. </p>
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
} // namespace ElasticsearchService
} // namespace Aws
