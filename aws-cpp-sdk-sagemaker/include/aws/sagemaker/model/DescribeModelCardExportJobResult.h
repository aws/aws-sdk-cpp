/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportJobStatus.h>
#include <aws/sagemaker/model/ModelCardExportOutputConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelCardExportArtifacts.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeModelCardExportJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult();
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline const Aws::String& GetModelCardExportJobName() const{ return m_modelCardExportJobName; }

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline void SetModelCardExportJobName(const Aws::String& value) { m_modelCardExportJobName = value; }

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline void SetModelCardExportJobName(Aws::String&& value) { m_modelCardExportJobName = std::move(value); }

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline void SetModelCardExportJobName(const char* value) { m_modelCardExportJobName.assign(value); }

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobName(const Aws::String& value) { SetModelCardExportJobName(value); return *this;}

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobName(Aws::String&& value) { SetModelCardExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobName(const char* value) { SetModelCardExportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const{ return m_modelCardExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const Aws::String& value) { m_modelCardExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(Aws::String&& value) { m_modelCardExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const char* value) { m_modelCardExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobArn(const Aws::String& value) { SetModelCardExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobArn(Aws::String&& value) { SetModelCardExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardExportJobArn(const char* value) { SetModelCardExportJobArn(value); return *this;}


    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline const ModelCardExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline void SetStatus(const ModelCardExportJobStatus& value) { m_status = value; }

    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline void SetStatus(ModelCardExportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline DescribeModelCardExportJobResult& WithStatus(const ModelCardExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline DescribeModelCardExportJobResult& WithStatus(ModelCardExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardName = value; }

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardName = std::move(value); }

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardName.assign(value); }

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card that the model export job exports.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>The version of the model card that the model export job exports.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }

    /**
     * <p>The version of the model card that the model export job exports.</p>
     */
    inline void SetModelCardVersion(int value) { m_modelCardVersion = value; }

    /**
     * <p>The version of the model card that the model export job exports.</p>
     */
    inline DescribeModelCardExportJobResult& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}


    /**
     * <p>The export output details for the model card.</p>
     */
    inline const ModelCardExportOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The export output details for the model card.</p>
     */
    inline void SetOutputConfig(const ModelCardExportOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The export output details for the model card.</p>
     */
    inline void SetOutputConfig(ModelCardExportOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The export output details for the model card.</p>
     */
    inline DescribeModelCardExportJobResult& WithOutputConfig(const ModelCardExportOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The export output details for the model card.</p>
     */
    inline DescribeModelCardExportJobResult& WithOutputConfig(ModelCardExportOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline DescribeModelCardExportJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline DescribeModelCardExportJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAt = value; }

    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAt = std::move(value); }

    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline DescribeModelCardExportJobResult& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline DescribeModelCardExportJobResult& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline DescribeModelCardExportJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline DescribeModelCardExportJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline DescribeModelCardExportJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The exported model card artifacts.</p>
     */
    inline const ModelCardExportArtifacts& GetExportArtifacts() const{ return m_exportArtifacts; }

    /**
     * <p>The exported model card artifacts.</p>
     */
    inline void SetExportArtifacts(const ModelCardExportArtifacts& value) { m_exportArtifacts = value; }

    /**
     * <p>The exported model card artifacts.</p>
     */
    inline void SetExportArtifacts(ModelCardExportArtifacts&& value) { m_exportArtifacts = std::move(value); }

    /**
     * <p>The exported model card artifacts.</p>
     */
    inline DescribeModelCardExportJobResult& WithExportArtifacts(const ModelCardExportArtifacts& value) { SetExportArtifacts(value); return *this;}

    /**
     * <p>The exported model card artifacts.</p>
     */
    inline DescribeModelCardExportJobResult& WithExportArtifacts(ModelCardExportArtifacts&& value) { SetExportArtifacts(std::move(value)); return *this;}

  private:

    Aws::String m_modelCardExportJobName;

    Aws::String m_modelCardExportJobArn;

    ModelCardExportJobStatus m_status;

    Aws::String m_modelCardName;

    int m_modelCardVersion;

    ModelCardExportOutputConfig m_outputConfig;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastModifiedAt;

    Aws::String m_failureReason;

    ModelCardExportArtifacts m_exportArtifacts;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
