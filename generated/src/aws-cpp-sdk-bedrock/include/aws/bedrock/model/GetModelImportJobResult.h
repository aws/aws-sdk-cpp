/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelDataSource.h>
#include <aws/bedrock/model/ModelImportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/VpcConfig.h>
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
namespace Bedrock
{
namespace Model
{
  class GetModelImportJobResult
  {
  public:
    AWS_BEDROCK_API GetModelImportJobResult();
    AWS_BEDROCK_API GetModelImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the import job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetModelImportJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetModelImportJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetModelImportJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetModelImportJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelName() const{ return m_importedModelName; }
    inline void SetImportedModelName(const Aws::String& value) { m_importedModelName = value; }
    inline void SetImportedModelName(Aws::String&& value) { m_importedModelName = std::move(value); }
    inline void SetImportedModelName(const char* value) { m_importedModelName.assign(value); }
    inline GetModelImportJobResult& WithImportedModelName(const Aws::String& value) { SetImportedModelName(value); return *this;}
    inline GetModelImportJobResult& WithImportedModelName(Aws::String&& value) { SetImportedModelName(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithImportedModelName(const char* value) { SetImportedModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelArn() const{ return m_importedModelArn; }
    inline void SetImportedModelArn(const Aws::String& value) { m_importedModelArn = value; }
    inline void SetImportedModelArn(Aws::String&& value) { m_importedModelArn = std::move(value); }
    inline void SetImportedModelArn(const char* value) { m_importedModelArn.assign(value); }
    inline GetModelImportJobResult& WithImportedModelArn(const Aws::String& value) { SetImportedModelArn(value); return *this;}
    inline GetModelImportJobResult& WithImportedModelArn(Aws::String&& value) { SetImportedModelArn(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithImportedModelArn(const char* value) { SetImportedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with this job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetModelImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetModelImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const{ return m_modelDataSource; }
    inline void SetModelDataSource(const ModelDataSource& value) { m_modelDataSource = value; }
    inline void SetModelDataSource(ModelDataSource&& value) { m_modelDataSource = std::move(value); }
    inline GetModelImportJobResult& WithModelDataSource(const ModelDataSource& value) { SetModelDataSource(value); return *this;}
    inline GetModelImportJobResult& WithModelDataSource(ModelDataSource&& value) { SetModelDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the imported model is ready to use. If the job failed, the
     * failure message contains information about why the job failed.</p>
     */
    inline const ModelImportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ModelImportJobStatus& value) { m_status = value; }
    inline void SetStatus(ModelImportJobStatus&& value) { m_status = std::move(value); }
    inline GetModelImportJobResult& WithStatus(const ModelImportJobStatus& value) { SetStatus(value); return *this;}
    inline GetModelImportJobResult& WithStatus(ModelImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the import job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetModelImportJobResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetModelImportJobResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetModelImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetModelImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetModelImportJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetModelImportJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetModelImportJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetModelImportJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Virtual Private Cloud (VPC) configuration of the import model job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }
    inline GetModelImportJobResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline GetModelImportJobResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetImportedModelKmsKeyArn() const{ return m_importedModelKmsKeyArn; }
    inline void SetImportedModelKmsKeyArn(const Aws::String& value) { m_importedModelKmsKeyArn = value; }
    inline void SetImportedModelKmsKeyArn(Aws::String&& value) { m_importedModelKmsKeyArn = std::move(value); }
    inline void SetImportedModelKmsKeyArn(const char* value) { m_importedModelKmsKeyArn.assign(value); }
    inline GetModelImportJobResult& WithImportedModelKmsKeyArn(const Aws::String& value) { SetImportedModelKmsKeyArn(value); return *this;}
    inline GetModelImportJobResult& WithImportedModelKmsKeyArn(Aws::String&& value) { SetImportedModelKmsKeyArn(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithImportedModelKmsKeyArn(const char* value) { SetImportedModelKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetModelImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetModelImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetModelImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;

    Aws::String m_jobName;

    Aws::String m_importedModelName;

    Aws::String m_importedModelArn;

    Aws::String m_roleArn;

    ModelDataSource m_modelDataSource;

    ModelImportJobStatus m_status;

    Aws::String m_failureMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    VpcConfig m_vpcConfig;

    Aws::String m_importedModelKmsKeyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
