/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobDataSource.h>
#include <aws/cleanroomsml/model/AudienceQualityMetrics.h>
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
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult() = default;
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetAudienceGenerationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetAudienceGenerationJobResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetAudienceGenerationJobResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const { return m_audienceGenerationJobArn; }
    template<typename AudienceGenerationJobArnT = Aws::String>
    void SetAudienceGenerationJobArn(AudienceGenerationJobArnT&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::forward<AudienceGenerationJobArnT>(value); }
    template<typename AudienceGenerationJobArnT = Aws::String>
    GetAudienceGenerationJobResult& WithAudienceGenerationJobArn(AudienceGenerationJobArnT&& value) { SetAudienceGenerationJobArn(std::forward<AudienceGenerationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the audience generation job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetAudienceGenerationJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the audience generation job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAudienceGenerationJobResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the audience generation job.</p>
     */
    inline AudienceGenerationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(AudienceGenerationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAudienceGenerationJobResult& WithStatus(AudienceGenerationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the audience generation job.</p>
     */
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetAudienceGenerationJobResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model used for this
     * audience generation job.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    GetAudienceGenerationJobResult& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The seed audience that was used for this audience generation job. This field
     * will be null if the account calling the API is the account that started this
     * audience generation job. </p>
     */
    inline const AudienceGenerationJobDataSource& GetSeedAudience() const { return m_seedAudience; }
    template<typename SeedAudienceT = AudienceGenerationJobDataSource>
    void SetSeedAudience(SeedAudienceT&& value) { m_seedAudienceHasBeenSet = true; m_seedAudience = std::forward<SeedAudienceT>(value); }
    template<typename SeedAudienceT = AudienceGenerationJobDataSource>
    GetAudienceGenerationJobResult& WithSeedAudience(SeedAudienceT&& value) { SetSeedAudience(std::forward<SeedAudienceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure whether the seed users are included in the output audience. By
     * default, Clean Rooms ML removes seed users from the output audience. If you
     * specify <code>TRUE</code>, the seed users will appear first in the output. Clean
     * Rooms ML does not explicitly reveal whether a user was in the seed, but the
     * recipient of the audience will know that the first <code>minimumSeedSize</code>
     * count of users are from the seed.</p>
     */
    inline bool GetIncludeSeedInOutput() const { return m_includeSeedInOutput; }
    inline void SetIncludeSeedInOutput(bool value) { m_includeSeedInOutputHasBeenSet = true; m_includeSeedInOutput = value; }
    inline GetAudienceGenerationJobResult& WithIncludeSeedInOutput(bool value) { SetIncludeSeedInOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the collaboration that this audience generation job is
     * associated with.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    GetAudienceGenerationJobResult& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance scores for different audience sizes and the recall score of the
     * generated audience. </p>
     */
    inline const AudienceQualityMetrics& GetMetrics() const { return m_metrics; }
    template<typename MetricsT = AudienceQualityMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = AudienceQualityMetrics>
    GetAudienceGenerationJobResult& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account that started this audience generation job.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    GetAudienceGenerationJobResult& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are associated to this audience generation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetAudienceGenerationJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetAudienceGenerationJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the protected query for this audience generation
     * job.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const { return m_protectedQueryIdentifier; }
    template<typename ProtectedQueryIdentifierT = Aws::String>
    void SetProtectedQueryIdentifier(ProtectedQueryIdentifierT&& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = std::forward<ProtectedQueryIdentifierT>(value); }
    template<typename ProtectedQueryIdentifierT = Aws::String>
    GetAudienceGenerationJobResult& WithProtectedQueryIdentifier(ProtectedQueryIdentifierT&& value) { SetProtectedQueryIdentifier(std::forward<ProtectedQueryIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAudienceGenerationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AudienceGenerationJobStatus m_status{AudienceGenerationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    AudienceGenerationJobDataSource m_seedAudience;
    bool m_seedAudienceHasBeenSet = false;

    bool m_includeSeedInOutput{false};
    bool m_includeSeedInOutputHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    AudienceQualityMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_protectedQueryIdentifier;
    bool m_protectedQueryIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
