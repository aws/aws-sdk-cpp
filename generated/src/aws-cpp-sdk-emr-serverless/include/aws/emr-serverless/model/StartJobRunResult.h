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
  class StartJobRunResult
  {
  public:
    AWS_EMRSERVERLESS_API StartJobRunResult();
    AWS_EMRSERVERLESS_API StartJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API StartJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline StartJobRunResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline StartJobRunResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>This output displays the application ID on which the job run was
     * submitted.</p>
     */
    inline StartJobRunResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunId = value; }

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunId = std::move(value); }

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunId.assign(value); }

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The output contains the ID of the started job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline StartJobRunResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline StartJobRunResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The output lists the execution role ARN of the job run.</p>
     */
    inline StartJobRunResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_jobRunId;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
