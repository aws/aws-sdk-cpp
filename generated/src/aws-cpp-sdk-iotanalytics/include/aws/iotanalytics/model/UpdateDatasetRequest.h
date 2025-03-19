/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/iotanalytics/model/DatasetAction.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
#include <aws/iotanalytics/model/DatasetContentDeliveryRule.h>
#include <aws/iotanalytics/model/LateDataRule.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class UpdateDatasetRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API UpdateDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the dataset to update.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    UpdateDatasetRequest& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DatasetAction</code> objects.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<DatasetAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<DatasetAction>>
    UpdateDatasetRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = DatasetAction>
    UpdateDatasetRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DatasetTrigger</code> objects. The list can be empty or can
     * contain up to five <code>DatasetTrigger</code> objects.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<DatasetTrigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<DatasetTrigger>>
    UpdateDatasetRequest& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = DatasetTrigger>
    UpdateDatasetRequest& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When dataset contents are created, they are delivered to destinations
     * specified here.</p>
     */
    inline const Aws::Vector<DatasetContentDeliveryRule>& GetContentDeliveryRules() const { return m_contentDeliveryRules; }
    inline bool ContentDeliveryRulesHasBeenSet() const { return m_contentDeliveryRulesHasBeenSet; }
    template<typename ContentDeliveryRulesT = Aws::Vector<DatasetContentDeliveryRule>>
    void SetContentDeliveryRules(ContentDeliveryRulesT&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = std::forward<ContentDeliveryRulesT>(value); }
    template<typename ContentDeliveryRulesT = Aws::Vector<DatasetContentDeliveryRule>>
    UpdateDatasetRequest& WithContentDeliveryRules(ContentDeliveryRulesT&& value) { SetContentDeliveryRules(std::forward<ContentDeliveryRulesT>(value)); return *this;}
    template<typename ContentDeliveryRulesT = DatasetContentDeliveryRule>
    UpdateDatasetRequest& AddContentDeliveryRules(ContentDeliveryRulesT&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.emplace_back(std::forward<ContentDeliveryRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How long, in days, dataset contents are kept for the dataset.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    UpdateDatasetRequest& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. How many versions of dataset contents are kept. If not specified or
     * set to null, only the latest version plus the latest succeeded version (if they
     * are different) are kept for the time period specified by the
     * <code>retentionPeriod</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions">Keeping
     * Multiple Versions of IoT Analytics datasets</a> in the <i>IoT Analytics User
     * Guide</i>.</p>
     */
    inline const VersioningConfiguration& GetVersioningConfiguration() const { return m_versioningConfiguration; }
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    void SetVersioningConfiguration(VersioningConfigurationT&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::forward<VersioningConfigurationT>(value); }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    UpdateDatasetRequest& WithVersioningConfiguration(VersioningConfigurationT&& value) { SetVersioningConfiguration(std::forward<VersioningConfigurationT>(value)); return *this;}
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
    UpdateDatasetRequest& WithLateDataRules(LateDataRulesT&& value) { SetLateDataRules(std::forward<LateDataRulesT>(value)); return *this;}
    template<typename LateDataRulesT = LateDataRule>
    UpdateDatasetRequest& AddLateDataRules(LateDataRulesT&& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules.emplace_back(std::forward<LateDataRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::Vector<DatasetAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::Vector<DatasetContentDeliveryRule> m_contentDeliveryRules;
    bool m_contentDeliveryRulesHasBeenSet = false;

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
