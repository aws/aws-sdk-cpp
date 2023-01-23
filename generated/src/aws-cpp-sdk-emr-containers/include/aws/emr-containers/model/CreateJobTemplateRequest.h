/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobTemplateData.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class CreateJobTemplateRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API CreateJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobTemplate"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    /**
     * <p>The specified name of the job template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The specified name of the job template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The specified name of the job template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The specified name of the job template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The specified name of the job template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The specified name of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The specified name of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The specified name of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The client token of the job template.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token of the job template.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token of the job template.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token of the job template.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token of the job template.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token of the job template.</p>
     */
    inline CreateJobTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline const JobTemplateData& GetJobTemplateData() const{ return m_jobTemplateData; }

    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline bool JobTemplateDataHasBeenSet() const { return m_jobTemplateDataHasBeenSet; }

    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline void SetJobTemplateData(const JobTemplateData& value) { m_jobTemplateDataHasBeenSet = true; m_jobTemplateData = value; }

    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline void SetJobTemplateData(JobTemplateData&& value) { m_jobTemplateDataHasBeenSet = true; m_jobTemplateData = std::move(value); }

    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline CreateJobTemplateRequest& WithJobTemplateData(const JobTemplateData& value) { SetJobTemplateData(value); return *this;}

    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline CreateJobTemplateRequest& WithJobTemplateData(JobTemplateData&& value) { SetJobTemplateData(std::move(value)); return *this;}


    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated with the job template.</p>
     */
    inline CreateJobTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline CreateJobTemplateRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline CreateJobTemplateRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN used to encrypt the job template.</p>
     */
    inline CreateJobTemplateRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    JobTemplateData m_jobTemplateData;
    bool m_jobTemplateDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
