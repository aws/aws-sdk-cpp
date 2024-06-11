/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-containers/model/JobTemplateData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>This entity describes a job template. Job template stores values of
   * StartJobRun API request in a template and can be used to start a job run. Job
   * template allows two use cases: avoid repeating recurring StartJobRun API request
   * values, enforcing certain values in StartJobRun API request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/JobTemplate">AWS
   * API Reference</a></p>
   */
  class JobTemplate
  {
  public:
    AWS_EMRCONTAINERS_API JobTemplate();
    AWS_EMRCONTAINERS_API JobTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JobTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JobTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JobTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline JobTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline JobTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline JobTemplate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline JobTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline JobTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline JobTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline JobTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline JobTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user who created the job template.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline JobTemplate& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline JobTemplate& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline JobTemplate& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the job template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline JobTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline JobTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline JobTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline JobTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline JobTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job template data which holds values of StartJobRun API request.</p>
     */
    inline const JobTemplateData& GetJobTemplateData() const{ return m_jobTemplateData; }
    inline bool JobTemplateDataHasBeenSet() const { return m_jobTemplateDataHasBeenSet; }
    inline void SetJobTemplateData(const JobTemplateData& value) { m_jobTemplateDataHasBeenSet = true; m_jobTemplateData = value; }
    inline void SetJobTemplateData(JobTemplateData&& value) { m_jobTemplateDataHasBeenSet = true; m_jobTemplateData = std::move(value); }
    inline JobTemplate& WithJobTemplateData(const JobTemplateData& value) { SetJobTemplateData(value); return *this;}
    inline JobTemplate& WithJobTemplateData(JobTemplateData&& value) { SetJobTemplateData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The KMS key ARN used to encrypt the job template.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline JobTemplate& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline JobTemplate& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline JobTemplate& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message in case the decryption of job template fails.</p>
     */
    inline const Aws::String& GetDecryptionError() const{ return m_decryptionError; }
    inline bool DecryptionErrorHasBeenSet() const { return m_decryptionErrorHasBeenSet; }
    inline void SetDecryptionError(const Aws::String& value) { m_decryptionErrorHasBeenSet = true; m_decryptionError = value; }
    inline void SetDecryptionError(Aws::String&& value) { m_decryptionErrorHasBeenSet = true; m_decryptionError = std::move(value); }
    inline void SetDecryptionError(const char* value) { m_decryptionErrorHasBeenSet = true; m_decryptionError.assign(value); }
    inline JobTemplate& WithDecryptionError(const Aws::String& value) { SetDecryptionError(value); return *this;}
    inline JobTemplate& WithDecryptionError(Aws::String&& value) { SetDecryptionError(std::move(value)); return *this;}
    inline JobTemplate& WithDecryptionError(const char* value) { SetDecryptionError(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    JobTemplateData m_jobTemplateData;
    bool m_jobTemplateDataHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_decryptionError;
    bool m_decryptionErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
