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
    AWS_IOTANALYTICS_API UpdateDatasetRequest();

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
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline UpdateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline UpdateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline UpdateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DatasetAction</code> objects.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<DatasetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<DatasetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UpdateDatasetRequest& WithActions(const Aws::Vector<DatasetAction>& value) { SetActions(value); return *this;}
    inline UpdateDatasetRequest& WithActions(Aws::Vector<DatasetAction>&& value) { SetActions(std::move(value)); return *this;}
    inline UpdateDatasetRequest& AddActions(const DatasetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline UpdateDatasetRequest& AddActions(DatasetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DatasetTrigger</code> objects. The list can be empty or can
     * contain up to five <code>DatasetTrigger</code> objects.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }
    inline UpdateDatasetRequest& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}
    inline UpdateDatasetRequest& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}
    inline UpdateDatasetRequest& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }
    inline UpdateDatasetRequest& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When dataset contents are created, they are delivered to destinations
     * specified here.</p>
     */
    inline const Aws::Vector<DatasetContentDeliveryRule>& GetContentDeliveryRules() const{ return m_contentDeliveryRules; }
    inline bool ContentDeliveryRulesHasBeenSet() const { return m_contentDeliveryRulesHasBeenSet; }
    inline void SetContentDeliveryRules(const Aws::Vector<DatasetContentDeliveryRule>& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = value; }
    inline void SetContentDeliveryRules(Aws::Vector<DatasetContentDeliveryRule>&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = std::move(value); }
    inline UpdateDatasetRequest& WithContentDeliveryRules(const Aws::Vector<DatasetContentDeliveryRule>& value) { SetContentDeliveryRules(value); return *this;}
    inline UpdateDatasetRequest& WithContentDeliveryRules(Aws::Vector<DatasetContentDeliveryRule>&& value) { SetContentDeliveryRules(std::move(value)); return *this;}
    inline UpdateDatasetRequest& AddContentDeliveryRules(const DatasetContentDeliveryRule& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(value); return *this; }
    inline UpdateDatasetRequest& AddContentDeliveryRules(DatasetContentDeliveryRule&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How long, in days, dataset contents are kept for the dataset.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }
    inline UpdateDatasetRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}
    inline UpdateDatasetRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}
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
    inline const VersioningConfiguration& GetVersioningConfiguration() const{ return m_versioningConfiguration; }
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }
    inline void SetVersioningConfiguration(const VersioningConfiguration& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = value; }
    inline void SetVersioningConfiguration(VersioningConfiguration&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::move(value); }
    inline UpdateDatasetRequest& WithVersioningConfiguration(const VersioningConfiguration& value) { SetVersioningConfiguration(value); return *this;}
    inline UpdateDatasetRequest& WithVersioningConfiguration(VersioningConfiguration&& value) { SetVersioningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of data rules that send notifications to CloudWatch, when data arrives
     * late. To specify <code>lateDataRules</code>, the dataset must use a <a
     * href="https://docs.aws.amazon.com/iotanalytics/latest/APIReference/API_DeltaTime.html">DeltaTimer</a>
     * filter.</p>
     */
    inline const Aws::Vector<LateDataRule>& GetLateDataRules() const{ return m_lateDataRules; }
    inline bool LateDataRulesHasBeenSet() const { return m_lateDataRulesHasBeenSet; }
    inline void SetLateDataRules(const Aws::Vector<LateDataRule>& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules = value; }
    inline void SetLateDataRules(Aws::Vector<LateDataRule>&& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules = std::move(value); }
    inline UpdateDatasetRequest& WithLateDataRules(const Aws::Vector<LateDataRule>& value) { SetLateDataRules(value); return *this;}
    inline UpdateDatasetRequest& WithLateDataRules(Aws::Vector<LateDataRule>&& value) { SetLateDataRules(std::move(value)); return *this;}
    inline UpdateDatasetRequest& AddLateDataRules(const LateDataRule& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules.push_back(value); return *this; }
    inline UpdateDatasetRequest& AddLateDataRules(LateDataRule&& value) { m_lateDataRulesHasBeenSet = true; m_lateDataRules.push_back(std::move(value)); return *this; }
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
