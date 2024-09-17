/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainingDatasetStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/Dataset.h>
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
  class GetTrainingDatasetResult
  {
  public:
    AWS_CLEANROOMSML_API GetTrainingDatasetResult();
    AWS_CLEANROOMSML_API GetTrainingDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetTrainingDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetTrainingDatasetResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetTrainingDatasetResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetTrainingDatasetResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetTrainingDatasetResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArn = value; }
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArn = std::move(value); }
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArn.assign(value); }
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTrainingDatasetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTrainingDatasetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline const Aws::Vector<Dataset>& GetTrainingData() const{ return m_trainingData; }
    inline void SetTrainingData(const Aws::Vector<Dataset>& value) { m_trainingData = value; }
    inline void SetTrainingData(Aws::Vector<Dataset>&& value) { m_trainingData = std::move(value); }
    inline GetTrainingDatasetResult& WithTrainingData(const Aws::Vector<Dataset>& value) { SetTrainingData(value); return *this;}
    inline GetTrainingDatasetResult& WithTrainingData(Aws::Vector<Dataset>&& value) { SetTrainingData(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& AddTrainingData(const Dataset& value) { m_trainingData.push_back(value); return *this; }
    inline GetTrainingDatasetResult& AddTrainingData(Dataset&& value) { m_trainingData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the training dataset.</p>
     */
    inline const TrainingDatasetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TrainingDatasetStatus& value) { m_status = value; }
    inline void SetStatus(TrainingDatasetStatus&& value) { m_status = std::move(value); }
    inline GetTrainingDatasetResult& WithStatus(const TrainingDatasetStatus& value) { SetStatus(value); return *this;}
    inline GetTrainingDatasetResult& WithStatus(TrainingDatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetTrainingDatasetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetTrainingDatasetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTrainingDatasetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTrainingDatasetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainingDatasetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainingDatasetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainingDatasetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the training dataset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTrainingDatasetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTrainingDatasetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrainingDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrainingDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrainingDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_trainingDatasetArn;

    Aws::String m_name;

    Aws::Vector<Dataset> m_trainingData;

    TrainingDatasetStatus m_status;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
