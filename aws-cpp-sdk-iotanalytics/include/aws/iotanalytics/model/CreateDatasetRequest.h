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
#include <aws/iotanalytics/model/DatasetAction.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
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
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline const Aws::Vector<DatasetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline void SetActions(const Aws::Vector<DatasetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline void SetActions(Aws::Vector<DatasetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline CreateDatasetRequest& WithActions(const Aws::Vector<DatasetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline CreateDatasetRequest& WithActions(Aws::Vector<DatasetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline CreateDatasetRequest& AddActions(const DatasetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A list of actions that create the data set. Only one action is supported at
     * this time.</p>
     */
    inline CreateDatasetRequest& AddActions(DatasetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline CreateDatasetRequest& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline CreateDatasetRequest& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline CreateDatasetRequest& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time or time interval. The list of triggers can be empty or contain up
     * to five <b>DataSetTrigger</b> objects.</p>
     */
    inline CreateDatasetRequest& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;

    Aws::Vector<DatasetAction> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
