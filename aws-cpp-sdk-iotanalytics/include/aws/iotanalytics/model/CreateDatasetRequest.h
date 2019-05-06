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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/iotanalytics/model/DatasetAction.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
#include <aws/iotanalytics/model/DatasetContentDeliveryRule.h>
#include <aws/iotanalytics/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API CreateDatasetRequest : public IoTAnalyticsRequest
  {
  public:
    CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline void SetActions(const Aws::Vector<DatasetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline void SetActions(Aws::Vector<DatasetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline CreateDatasetRequest& WithActions(const Aws::Vector<DatasetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline CreateDatasetRequest& WithActions(Aws::Vector<DatasetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline CreateDatasetRequest& AddActions(const DatasetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A list of actions that create the data set contents.</p>
     */
    inline CreateDatasetRequest& AddActions(DatasetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline CreateDatasetRequest& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline CreateDatasetRequest& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline CreateDatasetRequest& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers. A trigger causes data set contents to be populated at a
     * specified time interval or when another data set's contents are created. The
     * list of triggers can be empty or contain up to five <b>DataSetTrigger</b>
     * objects.</p>
     */
    inline CreateDatasetRequest& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }


    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline const Aws::Vector<DatasetContentDeliveryRule>& GetContentDeliveryRules() const{ return m_contentDeliveryRules; }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline bool ContentDeliveryRulesHasBeenSet() const { return m_contentDeliveryRulesHasBeenSet; }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline void SetContentDeliveryRules(const Aws::Vector<DatasetContentDeliveryRule>& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = value; }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline void SetContentDeliveryRules(Aws::Vector<DatasetContentDeliveryRule>&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules = std::move(value); }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline CreateDatasetRequest& WithContentDeliveryRules(const Aws::Vector<DatasetContentDeliveryRule>& value) { SetContentDeliveryRules(value); return *this;}

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline CreateDatasetRequest& WithContentDeliveryRules(Aws::Vector<DatasetContentDeliveryRule>&& value) { SetContentDeliveryRules(std::move(value)); return *this;}

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline CreateDatasetRequest& AddContentDeliveryRules(const DatasetContentDeliveryRule& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(value); return *this; }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline CreateDatasetRequest& AddContentDeliveryRules(DatasetContentDeliveryRule&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(std::move(value)); return *this; }


    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline CreateDatasetRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>[Optional] How long, in days, versions of data set contents are kept for the
     * data set. If not specified or set to null, versions of data set contents are
     * retained for at most 90 days. The number of versions of data set contents
     * retained is determined by the <code>versioningConfiguration</code> parameter.
     * (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline CreateDatasetRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline const VersioningConfiguration& GetVersioningConfiguration() const{ return m_versioningConfiguration; }

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline void SetVersioningConfiguration(const VersioningConfiguration& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = value; }

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline void SetVersioningConfiguration(VersioningConfiguration&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::move(value); }

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline CreateDatasetRequest& WithVersioningConfiguration(const VersioningConfiguration& value) { SetVersioningConfiguration(value); return *this;}

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline CreateDatasetRequest& WithVersioningConfiguration(VersioningConfiguration&& value) { SetVersioningConfiguration(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline CreateDatasetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline CreateDatasetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline CreateDatasetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the data set.</p>
     */
    inline CreateDatasetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;

    Aws::Vector<DatasetAction> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet;

    Aws::Vector<DatasetContentDeliveryRule> m_contentDeliveryRules;
    bool m_contentDeliveryRulesHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    VersioningConfiguration m_versioningConfiguration;
    bool m_versioningConfigurationHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
