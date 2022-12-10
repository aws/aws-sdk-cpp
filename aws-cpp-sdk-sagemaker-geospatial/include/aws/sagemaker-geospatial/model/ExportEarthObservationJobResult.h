/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobExportStatus.h>
#include <aws/sagemaker-geospatial/model/OutputConfigInput.h>
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
  class ExportEarthObservationJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline ExportEarthObservationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline ExportEarthObservationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline ExportEarthObservationJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline ExportEarthObservationJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline ExportEarthObservationJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool GetExportSourceImages() const{ return m_exportSourceImages; }

    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline void SetExportSourceImages(bool value) { m_exportSourceImages = value; }

    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline ExportEarthObservationJobResult& WithExportSourceImages(bool value) { SetExportSourceImages(value); return *this;}


    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline const EarthObservationJobExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline void SetExportStatus(const EarthObservationJobExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline void SetExportStatus(EarthObservationJobExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline ExportEarthObservationJobResult& WithExportStatus(const EarthObservationJobExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline ExportEarthObservationJobResult& WithExportStatus(EarthObservationJobExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const OutputConfigInput& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(const OutputConfigInput& value) { m_outputConfig = value; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(OutputConfigInput&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline ExportEarthObservationJobResult& WithOutputConfig(const OutputConfigInput& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline ExportEarthObservationJobResult& WithOutputConfig(OutputConfigInput&& value) { SetOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_executionRoleArn;

    bool m_exportSourceImages;

    EarthObservationJobExportStatus m_exportStatus;

    OutputConfigInput m_outputConfig;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
