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
    AWS_BEDROCK_API GetModelImportJobResult() = default;
    AWS_BEDROCK_API GetModelImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the import job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetModelImportJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the import job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetModelImportJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelName() const { return m_importedModelName; }
    template<typename ImportedModelNameT = Aws::String>
    void SetImportedModelName(ImportedModelNameT&& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = std::forward<ImportedModelNameT>(value); }
    template<typename ImportedModelNameT = Aws::String>
    GetModelImportJobResult& WithImportedModelName(ImportedModelNameT&& value) { SetImportedModelName(std::forward<ImportedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelArn() const { return m_importedModelArn; }
    template<typename ImportedModelArnT = Aws::String>
    void SetImportedModelArn(ImportedModelArnT&& value) { m_importedModelArnHasBeenSet = true; m_importedModelArn = std::forward<ImportedModelArnT>(value); }
    template<typename ImportedModelArnT = Aws::String>
    GetModelImportJobResult& WithImportedModelArn(ImportedModelArnT&& value) { SetImportedModelArn(std::forward<ImportedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with this job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetModelImportJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    GetModelImportJobResult& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the imported model is ready to use. If the job failed, the
     * failure message contains information about why the job failed.</p>
     */
    inline ModelImportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelImportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetModelImportJobResult& WithStatus(ModelImportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the import job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetModelImportJobResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetModelImportJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetModelImportJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetModelImportJobResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Virtual Private Cloud (VPC) configuration of the import model job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    GetModelImportJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetImportedModelKmsKeyArn() const { return m_importedModelKmsKeyArn; }
    template<typename ImportedModelKmsKeyArnT = Aws::String>
    void SetImportedModelKmsKeyArn(ImportedModelKmsKeyArnT&& value) { m_importedModelKmsKeyArnHasBeenSet = true; m_importedModelKmsKeyArn = std::forward<ImportedModelKmsKeyArnT>(value); }
    template<typename ImportedModelKmsKeyArnT = Aws::String>
    GetModelImportJobResult& WithImportedModelKmsKeyArn(ImportedModelKmsKeyArnT&& value) { SetImportedModelKmsKeyArn(std::forward<ImportedModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetModelImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_importedModelName;
    bool m_importedModelNameHasBeenSet = false;

    Aws::String m_importedModelArn;
    bool m_importedModelArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    ModelImportJobStatus m_status{ModelImportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_importedModelKmsKeyArn;
    bool m_importedModelKmsKeyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
