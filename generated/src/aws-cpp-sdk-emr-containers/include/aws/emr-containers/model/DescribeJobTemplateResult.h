/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/JobTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMRContainers
{
namespace Model
{
  class DescribeJobTemplateResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult() = default;
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline const JobTemplate& GetJobTemplate() const { return m_jobTemplate; }
    template<typename JobTemplateT = JobTemplate>
    void SetJobTemplate(JobTemplateT&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::forward<JobTemplateT>(value); }
    template<typename JobTemplateT = JobTemplate>
    DescribeJobTemplateResult& WithJobTemplate(JobTemplateT&& value) { SetJobTemplate(std::forward<JobTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobTemplate m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
