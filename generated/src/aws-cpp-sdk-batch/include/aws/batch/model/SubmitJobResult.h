/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{
  class SubmitJobResult
  {
  public:
    AWS_BATCH_API SubmitJobResult();
    AWS_BATCH_API SubmitJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API SubmitJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline SubmitJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline SubmitJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline SubmitJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline SubmitJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline SubmitJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline SubmitJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The unique identifier for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline SubmitJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline SubmitJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline SubmitJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobArn;

    Aws::String m_jobName;

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
