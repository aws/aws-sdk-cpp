﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/OverallChangeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ELASTICSEARCHSERVICE_API ChangeProgressStatusDetails
  {
  public:
    ChangeProgressStatusDetails();
    ChangeProgressStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    ChangeProgressStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    OverallChangeStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_pendingProperties;
    bool m_pendingPropertiesHasBeenSet;

    Aws::Vector<Aws::String> m_completedProperties;
    bool m_completedPropertiesHasBeenSet;

    int m_totalNumberOfStages;
    bool m_totalNumberOfStagesHasBeenSet;

    Aws::Vector<ChangeProgressStage> m_changeProgressStages;
    bool m_changeProgressStagesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
