/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainingDatasetStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline GetTrainingDatasetResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline GetTrainingDatasetResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the training dataset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the training dataset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the training dataset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the training dataset.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the training dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the training dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the training dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the training dataset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline GetTrainingDatasetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline GetTrainingDatasetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role used to read the training data.</p>
     */
    inline GetTrainingDatasetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the training dataset.</p>
     */
    inline const TrainingDatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the training dataset.</p>
     */
    inline void SetStatus(const TrainingDatasetStatus& value) { m_status = value; }

    /**
     * <p>The status of the training dataset.</p>
     */
    inline void SetStatus(TrainingDatasetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithStatus(const TrainingDatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithStatus(TrainingDatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to this training dataset.</p>
     */
    inline GetTrainingDatasetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline const Aws::Vector<Dataset>& GetTrainingData() const{ return m_trainingData; }

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline void SetTrainingData(const Aws::Vector<Dataset>& value) { m_trainingData = value; }

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline void SetTrainingData(Aws::Vector<Dataset>&& value) { m_trainingData = std::move(value); }

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline GetTrainingDatasetResult& WithTrainingData(const Aws::Vector<Dataset>& value) { SetTrainingData(value); return *this;}

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline GetTrainingDatasetResult& WithTrainingData(Aws::Vector<Dataset>&& value) { SetTrainingData(std::move(value)); return *this;}

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline GetTrainingDatasetResult& AddTrainingData(const Dataset& value) { m_trainingData.push_back(value); return *this; }

    /**
     * <p>Metadata about the requested training data. </p>
     */
    inline GetTrainingDatasetResult& AddTrainingData(Dataset&& value) { m_trainingData.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline GetTrainingDatasetResult& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}


    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline GetTrainingDatasetResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline GetTrainingDatasetResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrainingDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrainingDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrainingDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::String m_name;

    Aws::String m_roleArn;

    TrainingDatasetStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Dataset> m_trainingData;

    Aws::String m_trainingDatasetArn;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
