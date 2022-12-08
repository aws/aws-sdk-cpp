/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobInputConfig.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobConfig.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class StartVectorEnrichmentJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API StartVectorEnrichmentJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API StartVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API StartVectorEnrichmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline StartVectorEnrichmentJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline StartVectorEnrichmentJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the Vector Enrichment job, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the Vector Enrichment job, in seconds.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSeconds = value; }

    /**
     * <p>The duration of the Vector Enrichment job, in seconds.</p>
     */
    inline StartVectorEnrichmentJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Input configuration information for starting the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input configuration information for starting the Vector Enrichment job.</p>
     */
    inline void SetInputConfig(const VectorEnrichmentJobInputConfig& value) { m_inputConfig = value; }

    /**
     * <p>Input configuration information for starting the Vector Enrichment job.</p>
     */
    inline void SetInputConfig(VectorEnrichmentJobInputConfig&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Input configuration information for starting the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithInputConfig(const VectorEnrichmentJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input configuration information for starting the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithInputConfig(VectorEnrichmentJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const VectorEnrichmentJobConfig& GetJobConfig() const{ return m_jobConfig; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(const VectorEnrichmentJobConfig& value) { m_jobConfig = value; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(VectorEnrichmentJobConfig&& value) { m_jobConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartVectorEnrichmentJobResult& WithJobConfig(const VectorEnrichmentJobConfig& value) { SetJobConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartVectorEnrichmentJobResult& WithJobConfig(VectorEnrichmentJobConfig&& value) { SetJobConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the Vector Enrichment job being started.</p>
     */
    inline const VectorEnrichmentJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Vector Enrichment job being started.</p>
     */
    inline void SetStatus(const VectorEnrichmentJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the Vector Enrichment job being started.</p>
     */
    inline void SetStatus(VectorEnrichmentJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Vector Enrichment job being started.</p>
     */
    inline StartVectorEnrichmentJobResult& WithStatus(const VectorEnrichmentJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Vector Enrichment job being started.</p>
     */
    inline StartVectorEnrichmentJobResult& WithStatus(VectorEnrichmentJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobType& GetType() const{ return m_type; }

    /**
     * <p>The type of the Vector Enrichment job.</p>
     */
    inline void SetType(const VectorEnrichmentJobType& value) { m_type = value; }

    /**
     * <p>The type of the Vector Enrichment job.</p>
     */
    inline void SetType(VectorEnrichmentJobType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithType(const VectorEnrichmentJobType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobResult& WithType(VectorEnrichmentJobType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    int m_durationInSeconds;

    Aws::String m_executionRoleArn;

    VectorEnrichmentJobInputConfig m_inputConfig;

    VectorEnrichmentJobConfig m_jobConfig;

    Aws::String m_kmsKeyId;

    Aws::String m_name;

    VectorEnrichmentJobStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VectorEnrichmentJobType m_type;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
