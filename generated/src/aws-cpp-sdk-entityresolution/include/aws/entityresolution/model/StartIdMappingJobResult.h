/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/JobType.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
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
namespace EntityResolution
{
namespace Model
{
  class StartIdMappingJobResult
  {
  public:
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult() = default;
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    StartIdMappingJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects.</p>
     */
    inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
    template<typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
    void SetOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::forward<OutputSourceConfigT>(value); }
    template<typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
    StartIdMappingJobResult& WithOutputSourceConfig(OutputSourceConfigT&& value) { SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value)); return *this;}
    template<typename OutputSourceConfigT = IdMappingJobOutputSource>
    StartIdMappingJobResult& AddOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The job type for the started ID mapping job.</p> <p>A value of
     * <code>INCREMENTAL</code> indicates that only new or changed data was processed
     * since the last job run. This is the default job type if the workflow was created
     * with an <code>incrementalRunConfig</code>.</p> <p>A value of <code>BATCH</code>
     * indicates that all data was processed from the input source, regardless of
     * previous job runs. This is the default job type if the workflow wasn't created
     * with an <code>incrementalRunConfig</code>.</p> <p>A value of
     * <code>DELETE_ONLY</code> indicates that only deletion requests from
     * <code>BatchDeleteUniqueIds</code> were processed.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline StartIdMappingJobResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartIdMappingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
