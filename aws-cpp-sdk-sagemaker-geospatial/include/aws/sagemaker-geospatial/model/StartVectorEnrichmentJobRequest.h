/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobInputConfig.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class StartVectorEnrichmentJobRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API StartVectorEnrichmentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartVectorEnrichmentJob"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline void SetInputConfig(const VectorEnrichmentJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline void SetInputConfig(VectorEnrichmentJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithInputConfig(const VectorEnrichmentJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithInputConfig(VectorEnrichmentJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const VectorEnrichmentJobConfig& GetJobConfig() const{ return m_jobConfig; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline bool JobConfigHasBeenSet() const { return m_jobConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(const VectorEnrichmentJobConfig& value) { m_jobConfigHasBeenSet = true; m_jobConfig = value; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(VectorEnrichmentJobConfig&& value) { m_jobConfigHasBeenSet = true; m_jobConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithJobConfig(const VectorEnrichmentJobConfig& value) { SetJobConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithJobConfig(VectorEnrichmentJobConfig&& value) { SetJobConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartVectorEnrichmentJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VectorEnrichmentJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    VectorEnrichmentJobConfig m_jobConfig;
    bool m_jobConfigHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
