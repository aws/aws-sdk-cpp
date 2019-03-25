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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/DatasetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/iotanalytics/model/DatasetAction.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
#include <aws/iotanalytics/model/DatasetContentDeliveryRule.h>
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
   * <p>Information about a data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Dataset">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API Dataset
  {
  public:
    Dataset();
    Dataset(Aws::Utils::Json::JsonView jsonValue);
    Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline Dataset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline Dataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline Dataset& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the data set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the data set.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the data set.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the data set.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the data set.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the data set.</p>
     */
    inline Dataset& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the data set.</p>
     */
    inline Dataset& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the data set.</p>
     */
    inline Dataset& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline void SetActions(const Aws::Vector<DatasetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline void SetActions(Aws::Vector<DatasetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline Dataset& WithActions(const Aws::Vector<DatasetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline Dataset& WithActions(Aws::Vector<DatasetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline Dataset& AddActions(const DatasetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The "DatasetAction" objects that automatically create the data set
     * contents.</p>
     */
    inline Dataset& AddActions(DatasetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline Dataset& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline Dataset& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline Dataset& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>The "DatasetTrigger" objects that specify when the data set is automatically
     * updated.</p>
     */
    inline Dataset& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }


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
    inline Dataset& WithContentDeliveryRules(const Aws::Vector<DatasetContentDeliveryRule>& value) { SetContentDeliveryRules(value); return *this;}

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline Dataset& WithContentDeliveryRules(Aws::Vector<DatasetContentDeliveryRule>&& value) { SetContentDeliveryRules(std::move(value)); return *this;}

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline Dataset& AddContentDeliveryRules(const DatasetContentDeliveryRule& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(value); return *this; }

    /**
     * <p>When data set contents are created they are delivered to destinations
     * specified here.</p>
     */
    inline Dataset& AddContentDeliveryRules(DatasetContentDeliveryRule&& value) { m_contentDeliveryRulesHasBeenSet = true; m_contentDeliveryRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the data set.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data set.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data set.</p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data set.</p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data set.</p>
     */
    inline Dataset& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data set.</p>
     */
    inline Dataset& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the data set was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the data set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the data set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the data set was created.</p>
     */
    inline Dataset& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the data set was created.</p>
     */
    inline Dataset& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline Dataset& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline Dataset& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline Dataset& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>[Optional] How long, in days, message data is kept for the data set.</p>
     */
    inline Dataset& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


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
    inline Dataset& WithVersioningConfiguration(const VersioningConfiguration& value) { SetVersioningConfiguration(value); return *this;}

    /**
     * <p>[Optional] How many versions of data set contents are kept. If not specified
     * or set to null, only the latest version plus the latest succeeded version (if
     * they are different) are kept for the time period specified by the
     * "retentionPeriod" parameter. (For more information, see
     * https://docs.aws.amazon.com/iotanalytics/latest/userguide/getting-started.html#aws-iot-analytics-dataset-versions)</p>
     */
    inline Dataset& WithVersioningConfiguration(VersioningConfiguration&& value) { SetVersioningConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<DatasetAction> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet;

    Aws::Vector<DatasetContentDeliveryRule> m_contentDeliveryRules;
    bool m_contentDeliveryRulesHasBeenSet;

    DatasetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    VersioningConfiguration m_versioningConfiguration;
    bool m_versioningConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
