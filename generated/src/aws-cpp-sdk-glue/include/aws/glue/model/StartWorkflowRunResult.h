/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class StartWorkflowRunResult
  {
  public:
    AWS_GLUE_API StartWorkflowRunResult();
    AWS_GLUE_API StartWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An Id for the new run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>An Id for the new run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>An Id for the new run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>An Id for the new run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>An Id for the new run.</p>
     */
    inline StartWorkflowRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>An Id for the new run.</p>
     */
    inline StartWorkflowRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>An Id for the new run.</p>
     */
    inline StartWorkflowRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:

    Aws::String m_runId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
