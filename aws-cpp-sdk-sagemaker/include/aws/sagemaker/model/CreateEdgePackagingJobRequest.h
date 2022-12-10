/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateEdgePackagingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEdgePackagingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEdgePackagingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const{ return m_edgePackagingJobName; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const Aws::String& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = value; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(Aws::String&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::move(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const char* value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName.assign(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& WithEdgePackagingJobName(const Aws::String& value) { SetEdgePackagingJobName(value); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& WithEdgePackagingJobName(Aws::String&& value) { SetEdgePackagingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& WithEdgePackagingJobName(const char* value) { SetEdgePackagingJobName(value); return *this;}


    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline CreateEdgePackagingJobRequest& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline CreateEdgePackagingJobRequest& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the SageMaker Neo compilation job that will be used to locate
     * model artifacts for packaging.</p>
     */
    inline CreateEdgePackagingJobRequest& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline CreateEdgePackagingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline CreateEdgePackagingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact SageMaker Neo.</p>
     */
    inline CreateEdgePackagingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Provides information about the output location for the packaged model.</p>
     */
    inline CreateEdgePackagingJobRequest& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline const Aws::String& GetResourceKey() const{ return m_resourceKey; }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline bool ResourceKeyHasBeenSet() const { return m_resourceKeyHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline void SetResourceKey(const Aws::String& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = value; }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline void SetResourceKey(Aws::String&& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline void SetResourceKey(const char* value) { m_resourceKeyHasBeenSet = true; m_resourceKey.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline CreateEdgePackagingJobRequest& WithResourceKey(const Aws::String& value) { SetResourceKey(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline CreateEdgePackagingJobRequest& WithResourceKey(Aws::String&& value) { SetResourceKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the
     * edge packaging job runs on.</p>
     */
    inline CreateEdgePackagingJobRequest& WithResourceKey(const char* value) { SetResourceKey(value); return *this;}


    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Creates tags for the packaging job.</p>
     */
    inline CreateEdgePackagingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EdgeOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_resourceKey;
    bool m_resourceKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
