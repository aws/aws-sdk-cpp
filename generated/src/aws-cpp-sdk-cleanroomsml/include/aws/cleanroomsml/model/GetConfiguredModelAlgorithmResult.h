/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ContainerConfig.h>
#include <aws/cleanroomsml/model/InferenceContainerConfig.h>
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
  class GetConfiguredModelAlgorithmResult
  {
  public:
    AWS_CLEANROOMSML_API GetConfiguredModelAlgorithmResult();
    AWS_CLEANROOMSML_API GetConfiguredModelAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetConfiguredModelAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the configured model algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetConfiguredModelAlgorithmResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the configured model algorithm was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetConfiguredModelAlgorithmResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const{ return m_configuredModelAlgorithmArn; }
    inline void SetConfiguredModelAlgorithmArn(const Aws::String& value) { m_configuredModelAlgorithmArn = value; }
    inline void SetConfiguredModelAlgorithmArn(Aws::String&& value) { m_configuredModelAlgorithmArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmArn(const char* value) { m_configuredModelAlgorithmArn.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(const Aws::String& value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(Aws::String&& value) { SetConfiguredModelAlgorithmArn(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(const char* value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured model algorithm.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information of the training container for the configured
     * model algorithm.</p>
     */
    inline const ContainerConfig& GetTrainingContainerConfig() const{ return m_trainingContainerConfig; }
    inline void SetTrainingContainerConfig(const ContainerConfig& value) { m_trainingContainerConfig = value; }
    inline void SetTrainingContainerConfig(ContainerConfig&& value) { m_trainingContainerConfig = std::move(value); }
    inline GetConfiguredModelAlgorithmResult& WithTrainingContainerConfig(const ContainerConfig& value) { SetTrainingContainerConfig(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithTrainingContainerConfig(ContainerConfig&& value) { SetTrainingContainerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the inference container.</p>
     */
    inline const InferenceContainerConfig& GetInferenceContainerConfig() const{ return m_inferenceContainerConfig; }
    inline void SetInferenceContainerConfig(const InferenceContainerConfig& value) { m_inferenceContainerConfig = value; }
    inline void SetInferenceContainerConfig(InferenceContainerConfig&& value) { m_inferenceContainerConfig = std::move(value); }
    inline GetConfiguredModelAlgorithmResult& WithInferenceContainerConfig(const InferenceContainerConfig& value) { SetInferenceContainerConfig(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithInferenceContainerConfig(InferenceContainerConfig&& value) { SetInferenceContainerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role that was used to create
     * the configured model algorithm.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured model algorithm.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you applied to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Clean Rooms ML considers it to be a user tag and will
     * count against the limit of 50 tags. Tags with only the key prefix of aws do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetConfiguredModelAlgorithmResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfiguredModelAlgorithmResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the configured ML model and associated
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfiguredModelAlgorithmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_configuredModelAlgorithmArn;

    Aws::String m_name;

    ContainerConfig m_trainingContainerConfig;

    InferenceContainerConfig m_inferenceContainerConfig;

    Aws::String m_roleArn;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_kmsKeyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
