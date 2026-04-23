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
#include <aws/iotanalytics/model/DatasetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/DatasetTrigger.h>
#include <aws/iotanalytics/model/DatasetActionSummary.h>
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
   * <p>A summary of information about a data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetSummary
  {
  public:
    DatasetSummary();
    DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
    DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DatasetSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DatasetSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DatasetSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


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
    inline DatasetSummary& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data set.</p>
     */
    inline DatasetSummary& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the data set was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the data set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the data set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the data set was created.</p>
     */
    inline DatasetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the data set was created.</p>
     */
    inline DatasetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline DatasetSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline DatasetSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline DatasetSummary& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline DatasetSummary& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline DatasetSummary& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers. A trigger causes data set content to be populated at a
     * specified time interval or when another data set is populated. The list of
     * triggers can be empty or contain up to five DataSetTrigger objects</p>
     */
    inline DatasetSummary& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline const Aws::Vector<DatasetActionSummary>& GetActions() const{ return m_actions; }

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline void SetActions(const Aws::Vector<DatasetActionSummary>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline void SetActions(Aws::Vector<DatasetActionSummary>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline DatasetSummary& WithActions(const Aws::Vector<DatasetActionSummary>& value) { SetActions(value); return *this;}

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline DatasetSummary& WithActions(Aws::Vector<DatasetActionSummary>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline DatasetSummary& AddActions(const DatasetActionSummary& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A list of "DataActionSummary" objects.</p>
     */
    inline DatasetSummary& AddActions(DatasetActionSummary&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;

    DatasetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet;

    Aws::Vector<DatasetActionSummary> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
