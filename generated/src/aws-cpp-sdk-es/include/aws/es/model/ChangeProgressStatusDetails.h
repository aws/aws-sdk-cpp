/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/OverallChangeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ConfigChangeStatus.h>
#include <aws/es/model/InitiatedBy.h>
#include <aws/es/model/ChangeProgressStage.h>
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
   * <p>The progress details of a specific domain configuration change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ChangeProgressStatusDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressStatusDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressStatusDetails();
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressStatusDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressStatusDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressStatusDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}


    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline ChangeProgressStatusDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline ChangeProgressStatusDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline const OverallChangeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline void SetStatus(const OverallChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline void SetStatus(OverallChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline ChangeProgressStatusDetails& WithStatus(const OverallChangeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The overall status of the domain configuration change. This field can take
     * the following values: <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>COMPLETED</code> and <code>FAILED</code></p>
     */
    inline ChangeProgressStatusDetails& WithStatus(OverallChangeStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingProperties() const{ return m_pendingProperties; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline bool PendingPropertiesHasBeenSet() const { return m_pendingPropertiesHasBeenSet; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline void SetPendingProperties(const Aws::Vector<Aws::String>& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties = value; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline void SetPendingProperties(Aws::Vector<Aws::String>&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties = std::move(value); }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline ChangeProgressStatusDetails& WithPendingProperties(const Aws::Vector<Aws::String>& value) { SetPendingProperties(value); return *this;}

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline ChangeProgressStatusDetails& WithPendingProperties(Aws::Vector<Aws::String>&& value) { SetPendingProperties(std::move(value)); return *this;}

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline ChangeProgressStatusDetails& AddPendingProperties(const Aws::String& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(value); return *this; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline ChangeProgressStatusDetails& AddPendingProperties(Aws::String&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * still in pending.</p>
     */
    inline ChangeProgressStatusDetails& AddPendingProperties(const char* value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(value); return *this; }


    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCompletedProperties() const{ return m_completedProperties; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline bool CompletedPropertiesHasBeenSet() const { return m_completedPropertiesHasBeenSet; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline void SetCompletedProperties(const Aws::Vector<Aws::String>& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties = value; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline void SetCompletedProperties(Aws::Vector<Aws::String>&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties = std::move(value); }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline ChangeProgressStatusDetails& WithCompletedProperties(const Aws::Vector<Aws::String>& value) { SetCompletedProperties(value); return *this;}

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline ChangeProgressStatusDetails& WithCompletedProperties(Aws::Vector<Aws::String>&& value) { SetCompletedProperties(std::move(value)); return *this;}

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline ChangeProgressStatusDetails& AddCompletedProperties(const Aws::String& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(value); return *this; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline ChangeProgressStatusDetails& AddCompletedProperties(Aws::String&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of properties involved in the domain configuration change that are
     * completed.</p>
     */
    inline ChangeProgressStatusDetails& AddCompletedProperties(const char* value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(value); return *this; }


    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline int GetTotalNumberOfStages() const{ return m_totalNumberOfStages; }

    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline bool TotalNumberOfStagesHasBeenSet() const { return m_totalNumberOfStagesHasBeenSet; }

    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline void SetTotalNumberOfStages(int value) { m_totalNumberOfStagesHasBeenSet = true; m_totalNumberOfStages = value; }

    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithTotalNumberOfStages(int value) { SetTotalNumberOfStages(value); return *this;}


    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline const Aws::Vector<ChangeProgressStage>& GetChangeProgressStages() const{ return m_changeProgressStages; }

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline bool ChangeProgressStagesHasBeenSet() const { return m_changeProgressStagesHasBeenSet; }

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline void SetChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = value; }

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline void SetChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = std::move(value); }

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { SetChangeProgressStages(value); return *this;}

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { SetChangeProgressStages(std::move(value)); return *this;}

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline ChangeProgressStatusDetails& AddChangeProgressStages(const ChangeProgressStage& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(value); return *this; }

    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline ChangeProgressStatusDetails& AddChangeProgressStages(ChangeProgressStage&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of the configuration change.</p>
     */
    inline const ConfigChangeStatus& GetConfigChangeStatus() const{ return m_configChangeStatus; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline void SetConfigChangeStatus(const ConfigChangeStatus& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline void SetConfigChangeStatus(ConfigChangeStatus&& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = std::move(value); }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithConfigChangeStatus(const ConfigChangeStatus& value) { SetConfigChangeStatus(value); return *this;}

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithConfigChangeStatus(ConfigChangeStatus&& value) { SetConfigChangeStatus(std::move(value)); return *this;}


    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline ChangeProgressStatusDetails& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline ChangeProgressStatusDetails& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline ChangeProgressStatusDetails& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}

  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    OverallChangeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingProperties;
    bool m_pendingPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_completedProperties;
    bool m_completedPropertiesHasBeenSet = false;

    int m_totalNumberOfStages;
    bool m_totalNumberOfStagesHasBeenSet = false;

    Aws::Vector<ChangeProgressStage> m_changeProgressStages;
    bool m_changeProgressStagesHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus;
    bool m_configChangeStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    InitiatedBy m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
