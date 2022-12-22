/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/JobStatus.h>
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
namespace Translate
{
namespace Model
{
  class StopTextTranslationJobResult
  {
  public:
    AWS_TRANSLATE_API StopTextTranslationJobResult();
    AWS_TRANSLATE_API StopTextTranslationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API StopTextTranslationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline StopTextTranslationJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline StopTextTranslationJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID of the stopped batch translation job.</p>
     */
    inline StopTextTranslationJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status of the designated job. Upon successful completion, the job's
     * status will be <code>STOPPED</code>.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the designated job. Upon successful completion, the job's
     * status will be <code>STOPPED</code>.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the designated job. Upon successful completion, the job's
     * status will be <code>STOPPED</code>.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the designated job. Upon successful completion, the job's
     * status will be <code>STOPPED</code>.</p>
     */
    inline StopTextTranslationJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the designated job. Upon successful completion, the job's
     * status will be <code>STOPPED</code>.</p>
     */
    inline StopTextTranslationJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
