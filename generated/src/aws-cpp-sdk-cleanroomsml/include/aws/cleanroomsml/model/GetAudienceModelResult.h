/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceModelStatus.h>
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
  class GetAudienceModelResult
  {
  public:
    AWS_CLEANROOMSML_API GetAudienceModelResult() = default;
    AWS_CLEANROOMSML_API GetAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetAudienceModelResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetAudienceModelResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date specified for the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const { return m_trainingDataStartTime; }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    void SetTrainingDataStartTime(TrainingDataStartTimeT&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::forward<TrainingDataStartTimeT>(value); }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    GetAudienceModelResult& WithTrainingDataStartTime(TrainingDataStartTimeT&& value) { SetTrainingDataStartTime(std::forward<TrainingDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date specified for the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const { return m_trainingDataEndTime; }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    void SetTrainingDataEndTime(TrainingDataEndTimeT&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::forward<TrainingDataEndTimeT>(value); }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    GetAudienceModelResult& WithTrainingDataEndTime(TrainingDataEndTimeT&& value) { SetTrainingDataEndTime(std::forward<TrainingDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const { return m_audienceModelArn; }
    template<typename AudienceModelArnT = Aws::String>
    void SetAudienceModelArn(AudienceModelArnT&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::forward<AudienceModelArnT>(value); }
    template<typename AudienceModelArnT = Aws::String>
    GetAudienceModelResult& WithAudienceModelArn(AudienceModelArnT&& value) { SetAudienceModelArn(std::forward<AudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the audience model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetAudienceModelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for this
     * audience model.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const { return m_trainingDatasetArn; }
    template<typename TrainingDatasetArnT = Aws::String>
    void SetTrainingDatasetArn(TrainingDatasetArnT&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::forward<TrainingDatasetArnT>(value); }
    template<typename TrainingDatasetArnT = Aws::String>
    GetAudienceModelResult& WithTrainingDatasetArn(TrainingDatasetArnT&& value) { SetTrainingDatasetArn(std::forward<TrainingDatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the audience model.</p>
     */
    inline AudienceModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(AudienceModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAudienceModelResult& WithStatus(AudienceModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the audience model.</p>
     */
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetAudienceModelResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN used for the audience model.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetAudienceModelResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the audience model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetAudienceModelResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetAudienceModelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The description of the audience model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAudienceModelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAudienceModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataStartTime{};
    bool m_trainingDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataEndTime{};
    bool m_trainingDataEndTimeHasBeenSet = false;

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;

    AudienceModelStatus m_status{AudienceModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
