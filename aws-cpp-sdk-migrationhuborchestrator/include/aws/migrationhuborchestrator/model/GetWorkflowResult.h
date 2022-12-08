/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class GetWorkflowResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline GetWorkflowResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetWorkflowResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetWorkflowResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationId() const{ return m_adsApplicationConfigurationId; }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(const Aws::String& value) { m_adsApplicationConfigurationId = value; }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(Aws::String&& value) { m_adsApplicationConfigurationId = std::move(value); }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(const char* value) { m_adsApplicationConfigurationId.assign(value); }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(const Aws::String& value) { SetAdsApplicationConfigurationId(value); return *this;}

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(Aws::String&& value) { SetAdsApplicationConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(const char* value) { SetAdsApplicationConfigurationId(value); return *this;}


    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationName() const{ return m_adsApplicationName; }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationName(const Aws::String& value) { m_adsApplicationName = value; }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationName(Aws::String&& value) { m_adsApplicationName = std::move(value); }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationName(const char* value) { m_adsApplicationName.assign(value); }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationName(const Aws::String& value) { SetAdsApplicationName(value); return *this;}

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationName(Aws::String&& value) { SetAdsApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline GetWorkflowResult& WithAdsApplicationName(const char* value) { SetAdsApplicationName(value); return *this;}


    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_status = value; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline GetWorkflowResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline GetWorkflowResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }

    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }

    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline GetWorkflowResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline GetWorkflowResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const{ return m_lastStopTime; }

    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline void SetLastStopTime(const Aws::Utils::DateTime& value) { m_lastStopTime = value; }

    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline void SetLastStopTime(Aws::Utils::DateTime&& value) { m_lastStopTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline GetWorkflowResult& WithLastStopTime(const Aws::Utils::DateTime& value) { SetLastStopTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline GetWorkflowResult& WithLastStopTime(Aws::Utils::DateTime&& value) { SetLastStopTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline GetWorkflowResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline GetWorkflowResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline GetWorkflowResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline GetWorkflowResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of steps in the migration workflow.</p>
     */
    inline int GetTotalSteps() const{ return m_totalSteps; }

    /**
     * <p>The total number of steps in the migration workflow.</p>
     */
    inline void SetTotalSteps(int value) { m_totalSteps = value; }

    /**
     * <p>The total number of steps in the migration workflow.</p>
     */
    inline GetWorkflowResult& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}


    /**
     * <p>Get a list of completed steps in the migration workflow.</p>
     */
    inline int GetCompletedSteps() const{ return m_completedSteps; }

    /**
     * <p>Get a list of completed steps in the migration workflow.</p>
     */
    inline void SetCompletedSteps(int value) { m_completedSteps = value; }

    /**
     * <p>Get a list of completed steps in the migration workflow.</p>
     */
    inline GetWorkflowResult& WithCompletedSteps(int value) { SetCompletedSteps(value); return *this;}


    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetWorkflowInputs() const{ return m_workflowInputs; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline void SetWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { m_workflowInputs = value; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline void SetWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { m_workflowInputs = std::move(value); }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { SetWorkflowInputs(value); return *this;}

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { SetWorkflowInputs(std::move(value)); return *this;}

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(const Aws::String& key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(Aws::String&& key, const StepInput& value) { m_workflowInputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(const Aws::String& key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(Aws::String&& key, StepInput&& value) { m_workflowInputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(const char* key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline GetWorkflowResult& AddWorkflowInputs(const char* key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }


    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline GetWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline const Aws::String& GetWorkflowBucket() const{ return m_workflowBucket; }

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline void SetWorkflowBucket(const Aws::String& value) { m_workflowBucket = value; }

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline void SetWorkflowBucket(Aws::String&& value) { m_workflowBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline void SetWorkflowBucket(const char* value) { m_workflowBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline GetWorkflowResult& WithWorkflowBucket(const Aws::String& value) { SetWorkflowBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline GetWorkflowResult& WithWorkflowBucket(Aws::String&& value) { SetWorkflowBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline GetWorkflowResult& WithWorkflowBucket(const char* value) { SetWorkflowBucket(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_templateId;

    Aws::String m_adsApplicationConfigurationId;

    Aws::String m_adsApplicationName;

    MigrationWorkflowStatusEnum m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastStartTime;

    Aws::Utils::DateTime m_lastStopTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Tool> m_tools;

    int m_totalSteps;

    int m_completedSteps;

    Aws::Map<Aws::String, StepInput> m_workflowInputs;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_workflowBucket;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
