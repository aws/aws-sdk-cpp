/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/AudienceQualityMetrics.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobDataSource.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class GetAudienceGenerationJobResult
  {
  public:
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult();
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}


    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationId = value; }

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationId = std::move(value); }

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationId.assign(value); }

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline GetAudienceGenerationJobResult& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline GetAudienceGenerationJobResult& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline GetAudienceGenerationJobResult& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline GetAudienceGenerationJobResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline GetAudienceGenerationJobResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the audience generation job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configure whether the seed users are included in the output audience. By
     * default, Clean Rooms ML removes seed users from the output audience. If you
     * specify <code>TRUE</code>, the seed users will appear first in the output. Clean
     * Rooms ML does not explicitly reveal whether a user was in the seed, but the
     * recipient of the audience will know that the first <code>minimumSeedSize</code>
     * count of users are from the seed.</p>
     */
    inline bool GetIncludeSeedInOutput() const{ return m_includeSeedInOutput; }

    /**
     * <p>Configure whether the seed users are included in the output audience. By
     * default, Clean Rooms ML removes seed users from the output audience. If you
     * specify <code>TRUE</code>, the seed users will appear first in the output. Clean
     * Rooms ML does not explicitly reveal whether a user was in the seed, but the
     * recipient of the audience will know that the first <code>minimumSeedSize</code>
     * count of users are from the seed.</p>
     */
    inline void SetIncludeSeedInOutput(bool value) { m_includeSeedInOutput = value; }

    /**
     * <p>Configure whether the seed users are included in the output audience. By
     * default, Clean Rooms ML removes seed users from the output audience. If you
     * specify <code>TRUE</code>, the seed users will appear first in the output. Clean
     * Rooms ML does not explicitly reveal whether a user was in the seed, but the
     * recipient of the audience will know that the first <code>minimumSeedSize</code>
     * count of users are from the seed.</p>
     */
    inline GetAudienceGenerationJobResult& WithIncludeSeedInOutput(bool value) { SetIncludeSeedInOutput(value); return *this;}


    /**
     * <p>The relevance scores for different audience sizes. </p>
     */
    inline const AudienceQualityMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The relevance scores for different audience sizes. </p>
     */
    inline void SetMetrics(const AudienceQualityMetrics& value) { m_metrics = value; }

    /**
     * <p>The relevance scores for different audience sizes. </p>
     */
    inline void SetMetrics(AudienceQualityMetrics&& value) { m_metrics = std::move(value); }

    /**
     * <p>The relevance scores for different audience sizes. </p>
     */
    inline GetAudienceGenerationJobResult& WithMetrics(const AudienceQualityMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>The relevance scores for different audience sizes. </p>
     */
    inline GetAudienceGenerationJobResult& WithMetrics(AudienceQualityMetrics&& value) { SetMetrics(std::move(value)); return *this;}


    /**
     * <p>The name of the audience generation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline const AudienceGenerationJobDataSource& GetSeedAudience() const{ return m_seedAudience; }

    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline void SetSeedAudience(const AudienceGenerationJobDataSource& value) { m_seedAudience = value; }

    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline void SetSeedAudience(AudienceGenerationJobDataSource&& value) { m_seedAudience = std::move(value); }

    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline GetAudienceGenerationJobResult& WithSeedAudience(const AudienceGenerationJobDataSource& value) { SetSeedAudience(value); return *this;}

    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline GetAudienceGenerationJobResult& WithSeedAudience(AudienceGenerationJobDataSource&& value) { SetSeedAudience(std::move(value)); return *this;}


    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedBy = value; }

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedBy = std::move(value); }

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedBy.assign(value); }

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The status of the audience generation job.</p>
     */
    inline const AudienceGenerationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline void SetStatus(const AudienceGenerationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline void SetStatus(AudienceGenerationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStatus(const AudienceGenerationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStatus(AudienceGenerationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }

    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}


    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline GetAudienceGenerationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline GetAudienceGenerationJobResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline GetAudienceGenerationJobResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAudienceGenerationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAudienceGenerationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAudienceGenerationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;

    Aws::String m_collaborationId;

    Aws::String m_configuredAudienceModelArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    bool m_includeSeedInOutput;

    AudienceQualityMetrics m_metrics;

    Aws::String m_name;

    AudienceGenerationJobDataSource m_seedAudience;

    Aws::String m_startedBy;

    AudienceGenerationJobStatus m_status;

    StatusDetails m_statusDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
