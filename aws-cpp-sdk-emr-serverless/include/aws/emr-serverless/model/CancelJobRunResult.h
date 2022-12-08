/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{
  class CancelJobRunResult
  {
  public:
    AWS_EMRSERVERLESS_API CancelJobRunResult();
    AWS_EMRSERVERLESS_API CancelJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API CancelJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline CancelJobRunResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline CancelJobRunResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The output contains the application ID on which the job run is cancelled.</p>
     */
    inline CancelJobRunResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunId = value; }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunId = std::move(value); }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunId.assign(value); }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_jobRunId;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
