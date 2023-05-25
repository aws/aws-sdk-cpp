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
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult();
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline const JobTemplate& GetJobTemplate() const{ return m_jobTemplate; }

    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline void SetJobTemplate(const JobTemplate& value) { m_jobTemplate = value; }

    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline void SetJobTemplate(JobTemplate&& value) { m_jobTemplate = std::move(value); }

    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplate(const JobTemplate& value) { SetJobTemplate(value); return *this;}

    /**
     * <p>This output displays information about the specified job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplate(JobTemplate&& value) { SetJobTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeJobTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeJobTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeJobTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JobTemplate m_jobTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
