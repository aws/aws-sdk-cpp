/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A summary of information about a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetSummary">AWS
   * API Reference</a></p>
   */
  class DatasetSummary
  {
  public:
    AWS_IOTANALYTICS_API DatasetSummary();
    AWS_IOTANALYTICS_API DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline DatasetSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DatasetSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DatasetSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetSummary& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline DatasetSummary& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DatasetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DatasetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline DatasetSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline DatasetSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of triggers. A trigger causes dataset content to be populated at a
     * specified time interval or when another dataset is populated. The list of
     * triggers can be empty or contain up to five <code>DataSetTrigger</code>
     * objects</p>
     */
    inline const Aws::Vector<DatasetTrigger>& GetTriggers() const{ return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    inline void SetTriggers(const Aws::Vector<DatasetTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }
    inline void SetTriggers(Aws::Vector<DatasetTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }
    inline DatasetSummary& WithTriggers(const Aws::Vector<DatasetTrigger>& value) { SetTriggers(value); return *this;}
    inline DatasetSummary& WithTriggers(Aws::Vector<DatasetTrigger>&& value) { SetTriggers(std::move(value)); return *this;}
    inline DatasetSummary& AddTriggers(const DatasetTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }
    inline DatasetSummary& AddTriggers(DatasetTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataActionSummary</code> objects.</p>
     */
    inline const Aws::Vector<DatasetActionSummary>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<DatasetActionSummary>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<DatasetActionSummary>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline DatasetSummary& WithActions(const Aws::Vector<DatasetActionSummary>& value) { SetActions(value); return *this;}
    inline DatasetSummary& WithActions(Aws::Vector<DatasetActionSummary>&& value) { SetActions(std::move(value)); return *this;}
    inline DatasetSummary& AddActions(const DatasetActionSummary& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline DatasetSummary& AddActions(DatasetActionSummary&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Vector<DatasetTrigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::Vector<DatasetActionSummary> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
