/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/DatasetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/iotanalytics/model/DatasetAction.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
#include <aws/iotanalytics/model/DatasetContentDeliveryRule.h>
#include <aws/iotanalytics/model/LateDataRule.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Dataset">AWS
   * API Reference</a></p>
   */
  class Dataset
  {
  public:
    AWS_IOTANALYTICS_API Dataset() = default;
    AWS_IOTANALYTICS_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Dataset& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Dataset& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DatasetAction</code> objects that automatically create the dataset
     * contents.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<DatasetAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<DatasetAction>>
    Dataset& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = DatasetAction>
    Dataset& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>DatasetTrigger</code> objects that specify when the dataset is
     * automatically updated.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<DatasetTrigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<DatasetTrigger>>
    Dataset& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = DatasetTrigger>
    Dataset& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When dataset contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline const Aws::Vector<DatasetContentDeliveryRule>& GetContentDeliveryRules() const { return m_contentDeliveryRules; }
    inline bool ContentDeliveryRulesHasBeenSet() const { return m_contentDeliveryRulesHasBeenSet; }
    template<typename ContentDeliveryRulesT = Aws::Vector<DatasetContentDeliveryRule>>
    void SetContentDeliveryRules(ContentDeliveryRulesT&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = std::forward<ContentDeliveryRulesT>(value); }
    template<typename ContentDeliveryRulesT = Aws::Vector<DatasetContentDeliveryRule>>
    Dataset& WithContentDeliveryRules(ContentDeliveryRulesT&& value) { SetContentDeliveryRules(std::forward<ContentDeliveryRulesT>(value)); return *this;}
    template<typename ContentDeliveryRulesT = DatasetContentDeliveryRule>
    Dataset& AddContentDeliveryRules(ContentDeliveryRulesT&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.emplace_back(std::forward<ContentDeliveryRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the dataset.</p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Dataset& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Dataset& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    Dataset& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. How long, in days, message data is kept for the dataset.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    Dataset& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. How many versions of dataset contents are kept. If not specified or
     * set to null, only the latest version plus the latest succeeded version (if they
     * are different) are kept for the time period specified by the
     * <code>retentionPeriod</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions">
     * Keeping Multiple Versions of IoT Analytics datasets</a> in the <i>IoT Analytics
     * User Guide</i>.</p>
     */
    inline const VersioningConfiguration& GetVersioningConfiguration() const { return m_versioningConfiguration; }
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    void SetVersioningConfiguration(VersioningConfigurationT&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::forward<VersioningConfigurationT>(value); }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    Dataset& WithVersioningConfiguration(VersioningConfigurationT&& value) { SetVersioningConfiguration(std::forward<VersioningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of data rules that send notifications to CloudWatch, when data arrives
     * late. To specify <code>lateDataRules</code>, the dataset must use a <a
     * href="https://docs.aws.amazon.com/iotanalytics/latest/APIReference/API_DeltaTime.html">DeltaTimer</a>
     * filter.</p>
     */
    inline const Aws::Vector<LateDataRule>& GetLateDataRules() const { return m_lateDataRules; }
    inline bool LateDataRulesHasBeenSet() const { return m_lateDataRulesHasBeenSet; }
    template<typename LateDataRulesT = Aws::Vector<LateDataRule>>
    void SetLateDataRules(LateDataRulesT&& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules = std::forward<LateDataRulesT>(value); }
    template<typename LateDataRulesT = Aws::Vector<LateDataRule>>
    Dataset& WithLateDataRules(LateDataRulesT&& value) { SetLateDataRules(std::forward<LateDataRulesT>(value)); return *this;}
    template<typename LateDataRulesT = LateDataRule>
    Dataset& AddLateDataRules(LateDataRulesT&& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules.emplace_back(std::forward<LateDataRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DatasetAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::Vector<DatasetContentDeliveryRule> m_contentDeliveryRules;
    bool m_contentDeliveryRulesHasBeenSet = false;

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    VersioningConfiguration m_versioningConfiguration;
    bool m_versioningConfigurationHasBeenSet = false;

    Aws::Vector<LateDataRule> m_lateDataRules;
    bool m_lateDataRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
