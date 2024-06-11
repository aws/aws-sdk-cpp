﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_CLEANROOMSML_API GetAudienceModelResult();
    AWS_CLEANROOMSML_API GetAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArn = value; }
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArn = std::move(value); }
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArn.assign(value); }
    inline GetAudienceModelResult& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}
    inline GetAudienceModelResult& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetAudienceModelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetAudienceModelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetAudienceModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetAudienceModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN used for the audience model.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetAudienceModelResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetAudienceModelResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the audience model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAudienceModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAudienceModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the audience model.</p>
     */
    inline const AudienceModelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AudienceModelStatus& value) { m_status = value; }
    inline void SetStatus(AudienceModelStatus&& value) { m_status = std::move(value); }
    inline GetAudienceModelResult& WithStatus(const AudienceModelStatus& value) { SetStatus(value); return *this;}
    inline GetAudienceModelResult& WithStatus(AudienceModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the audience model.</p>
     */
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetAudienceModelResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetAudienceModelResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the audience model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetAudienceModelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetAudienceModelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetAudienceModelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetAudienceModelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetAudienceModelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetAudienceModelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetAudienceModelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetAudienceModelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetAudienceModelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The end date specified for the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const{ return m_trainingDataEndTime; }
    inline void SetTrainingDataEndTime(const Aws::Utils::DateTime& value) { m_trainingDataEndTime = value; }
    inline void SetTrainingDataEndTime(Aws::Utils::DateTime&& value) { m_trainingDataEndTime = std::move(value); }
    inline GetAudienceModelResult& WithTrainingDataEndTime(const Aws::Utils::DateTime& value) { SetTrainingDataEndTime(value); return *this;}
    inline GetAudienceModelResult& WithTrainingDataEndTime(Aws::Utils::DateTime&& value) { SetTrainingDataEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date specified for the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const{ return m_trainingDataStartTime; }
    inline void SetTrainingDataStartTime(const Aws::Utils::DateTime& value) { m_trainingDataStartTime = value; }
    inline void SetTrainingDataStartTime(Aws::Utils::DateTime&& value) { m_trainingDataStartTime = std::move(value); }
    inline GetAudienceModelResult& WithTrainingDataStartTime(const Aws::Utils::DateTime& value) { SetTrainingDataStartTime(value); return *this;}
    inline GetAudienceModelResult& WithTrainingDataStartTime(Aws::Utils::DateTime&& value) { SetTrainingDataStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for this
     * audience model.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArn = value; }
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArn = std::move(value); }
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArn.assign(value); }
    inline GetAudienceModelResult& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}
    inline GetAudienceModelResult& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetAudienceModelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetAudienceModelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAudienceModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAudienceModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAudienceModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_audienceModelArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::String m_kmsKeyArn;

    Aws::String m_name;

    AudienceModelStatus m_status;

    StatusDetails m_statusDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_trainingDataEndTime;

    Aws::Utils::DateTime m_trainingDataStartTime;

    Aws::String m_trainingDatasetArn;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
