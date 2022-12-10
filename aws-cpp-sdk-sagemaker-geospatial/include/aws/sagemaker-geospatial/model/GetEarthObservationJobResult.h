/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobErrorDetails.h>
#include <aws/sagemaker-geospatial/model/ExportErrorDetails.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobExportStatus.h>
#include <aws/sagemaker-geospatial/model/InputConfigOutput.h>
#include <aws/sagemaker-geospatial/model/JobConfigInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/OutputBand.h>
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
  class GetEarthObservationJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetEarthObservationJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API GetEarthObservationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetEarthObservationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time of the initiated Earth Observation job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the initiated Earth Observation job.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time of the initiated Earth Observation job.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the initiated Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the initiated Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The duration of Earth Observation job, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of Earth Observation job, in seconds.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSeconds = value; }

    /**
     * <p>The duration of Earth Observation job, in seconds.</p>
     */
    inline GetEarthObservationJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>Details about the errors generated during the Earth Observation job.</p>
     */
    inline const EarthObservationJobErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>Details about the errors generated during the Earth Observation job.</p>
     */
    inline void SetErrorDetails(const EarthObservationJobErrorDetails& value) { m_errorDetails = value; }

    /**
     * <p>Details about the errors generated during the Earth Observation job.</p>
     */
    inline void SetErrorDetails(EarthObservationJobErrorDetails&& value) { m_errorDetails = std::move(value); }

    /**
     * <p>Details about the errors generated during the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithErrorDetails(const EarthObservationJobErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Details about the errors generated during the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithErrorDetails(EarthObservationJobErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}


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
    inline GetEarthObservationJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline GetEarthObservationJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline GetEarthObservationJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Details about the errors generated during ExportEarthObservationJob.</p>
     */
    inline const ExportErrorDetails& GetExportErrorDetails() const{ return m_exportErrorDetails; }

    /**
     * <p>Details about the errors generated during ExportEarthObservationJob.</p>
     */
    inline void SetExportErrorDetails(const ExportErrorDetails& value) { m_exportErrorDetails = value; }

    /**
     * <p>Details about the errors generated during ExportEarthObservationJob.</p>
     */
    inline void SetExportErrorDetails(ExportErrorDetails&& value) { m_exportErrorDetails = std::move(value); }

    /**
     * <p>Details about the errors generated during ExportEarthObservationJob.</p>
     */
    inline GetEarthObservationJobResult& WithExportErrorDetails(const ExportErrorDetails& value) { SetExportErrorDetails(value); return *this;}

    /**
     * <p>Details about the errors generated during ExportEarthObservationJob.</p>
     */
    inline GetEarthObservationJobResult& WithExportErrorDetails(ExportErrorDetails&& value) { SetExportErrorDetails(std::move(value)); return *this;}


    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline const EarthObservationJobExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline void SetExportStatus(const EarthObservationJobExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline void SetExportStatus(EarthObservationJobExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithExportStatus(const EarthObservationJobExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithExportStatus(EarthObservationJobExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>Input data for the Earth Observation job.</p>
     */
    inline const InputConfigOutput& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input data for the Earth Observation job.</p>
     */
    inline void SetInputConfig(const InputConfigOutput& value) { m_inputConfig = value; }

    /**
     * <p>Input data for the Earth Observation job.</p>
     */
    inline void SetInputConfig(InputConfigOutput&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Input data for the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithInputConfig(const InputConfigOutput& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input data for the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithInputConfig(InputConfigOutput&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const JobConfigInput& GetJobConfig() const{ return m_jobConfig; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(const JobConfigInput& value) { m_jobConfig = value; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(JobConfigInput&& value) { m_jobConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline GetEarthObservationJobResult& WithJobConfig(const JobConfigInput& value) { SetJobConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline GetEarthObservationJobResult& WithJobConfig(JobConfigInput&& value) { SetJobConfig(std::move(value)); return *this;}


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
    inline GetEarthObservationJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline GetEarthObservationJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline GetEarthObservationJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<OutputBand>& GetOutputBands() const{ return m_outputBands; }

    /**
     * <p/>
     */
    inline void SetOutputBands(const Aws::Vector<OutputBand>& value) { m_outputBands = value; }

    /**
     * <p/>
     */
    inline void SetOutputBands(Aws::Vector<OutputBand>&& value) { m_outputBands = std::move(value); }

    /**
     * <p/>
     */
    inline GetEarthObservationJobResult& WithOutputBands(const Aws::Vector<OutputBand>& value) { SetOutputBands(value); return *this;}

    /**
     * <p/>
     */
    inline GetEarthObservationJobResult& WithOutputBands(Aws::Vector<OutputBand>&& value) { SetOutputBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetEarthObservationJobResult& AddOutputBands(const OutputBand& value) { m_outputBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline GetEarthObservationJobResult& AddOutputBands(OutputBand&& value) { m_outputBands.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of a previously initiated Earth Observation job.</p>
     */
    inline const EarthObservationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a previously initiated Earth Observation job.</p>
     */
    inline void SetStatus(const EarthObservationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of a previously initiated Earth Observation job.</p>
     */
    inline void SetStatus(EarthObservationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of a previously initiated Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithStatus(const EarthObservationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a previously initiated Earth Observation job.</p>
     */
    inline GetEarthObservationJobResult& WithStatus(EarthObservationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline GetEarthObservationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetEarthObservationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    int m_durationInSeconds;

    EarthObservationJobErrorDetails m_errorDetails;

    Aws::String m_executionRoleArn;

    ExportErrorDetails m_exportErrorDetails;

    EarthObservationJobExportStatus m_exportStatus;

    InputConfigOutput m_inputConfig;

    JobConfigInput m_jobConfig;

    Aws::String m_kmsKeyId;

    Aws::String m_name;

    Aws::Vector<OutputBand> m_outputBands;

    EarthObservationJobStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
