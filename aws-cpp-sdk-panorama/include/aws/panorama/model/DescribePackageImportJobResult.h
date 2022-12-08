/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/PackageImportJobInputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageImportJobType.h>
#include <aws/panorama/model/PackageImportJobOutput.h>
#include <aws/panorama/model/PackageImportJobOutputConfig.h>
#include <aws/panorama/model/PackageImportJobStatus.h>
#include <aws/panorama/model/JobResourceTags.h>
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
namespace Panorama
{
namespace Model
{
  class DescribePackageImportJobResult
  {
  public:
    AWS_PANORAMA_API DescribePackageImportJobResult();
    AWS_PANORAMA_API DescribePackageImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job's client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The job's client token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The job's client token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The job's client token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The job's client token.</p>
     */
    inline DescribePackageImportJobResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The job's client token.</p>
     */
    inline DescribePackageImportJobResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The job's client token.</p>
     */
    inline DescribePackageImportJobResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline DescribePackageImportJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline DescribePackageImportJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The job's input config.</p>
     */
    inline const PackageImportJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>The job's input config.</p>
     */
    inline void SetInputConfig(const PackageImportJobInputConfig& value) { m_inputConfig = value; }

    /**
     * <p>The job's input config.</p>
     */
    inline void SetInputConfig(PackageImportJobInputConfig&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>The job's input config.</p>
     */
    inline DescribePackageImportJobResult& WithInputConfig(const PackageImportJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>The job's input config.</p>
     */
    inline DescribePackageImportJobResult& WithInputConfig(PackageImportJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline DescribePackageImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribePackageImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribePackageImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>The job's tags.</p>
     */
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTags = value; }

    /**
     * <p>The job's tags.</p>
     */
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTags = std::move(value); }

    /**
     * <p>The job's tags.</p>
     */
    inline DescribePackageImportJobResult& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}

    /**
     * <p>The job's tags.</p>
     */
    inline DescribePackageImportJobResult& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>The job's tags.</p>
     */
    inline DescribePackageImportJobResult& AddJobTags(const JobResourceTags& value) { m_jobTags.push_back(value); return *this; }

    /**
     * <p>The job's tags.</p>
     */
    inline DescribePackageImportJobResult& AddJobTags(JobResourceTags&& value) { m_jobTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The job's type.</p>
     */
    inline const PackageImportJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(const PackageImportJobType& value) { m_jobType = value; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(PackageImportJobType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The job's type.</p>
     */
    inline DescribePackageImportJobResult& WithJobType(const PackageImportJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The job's type.</p>
     */
    inline DescribePackageImportJobResult& WithJobType(PackageImportJobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>When the job was updated.</p>
     */
    inline DescribePackageImportJobResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>When the job was updated.</p>
     */
    inline DescribePackageImportJobResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The job's output.</p>
     */
    inline const PackageImportJobOutput& GetOutput() const{ return m_output; }

    /**
     * <p>The job's output.</p>
     */
    inline void SetOutput(const PackageImportJobOutput& value) { m_output = value; }

    /**
     * <p>The job's output.</p>
     */
    inline void SetOutput(PackageImportJobOutput&& value) { m_output = std::move(value); }

    /**
     * <p>The job's output.</p>
     */
    inline DescribePackageImportJobResult& WithOutput(const PackageImportJobOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>The job's output.</p>
     */
    inline DescribePackageImportJobResult& WithOutput(PackageImportJobOutput&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>The job's output config.</p>
     */
    inline const PackageImportJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The job's output config.</p>
     */
    inline void SetOutputConfig(const PackageImportJobOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The job's output config.</p>
     */
    inline void SetOutputConfig(PackageImportJobOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The job's output config.</p>
     */
    inline DescribePackageImportJobResult& WithOutputConfig(const PackageImportJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The job's output config.</p>
     */
    inline DescribePackageImportJobResult& WithOutputConfig(PackageImportJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const PackageImportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const PackageImportJobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(PackageImportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline DescribePackageImportJobResult& WithStatus(const PackageImportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline DescribePackageImportJobResult& WithStatus(PackageImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline DescribePackageImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline DescribePackageImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline DescribePackageImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_clientToken;

    Aws::Utils::DateTime m_createdTime;

    PackageImportJobInputConfig m_inputConfig;

    Aws::String m_jobId;

    Aws::Vector<JobResourceTags> m_jobTags;

    PackageImportJobType m_jobType;

    Aws::Utils::DateTime m_lastUpdatedTime;

    PackageImportJobOutput m_output;

    PackageImportJobOutputConfig m_outputConfig;

    PackageImportJobStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
