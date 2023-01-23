/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class StartJobRunResult
  {
  public:
    AWS_GLUEDATABREW_API StartJobRunResult();
    AWS_GLUEDATABREW_API StartJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API StartJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline StartJobRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline StartJobRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>A system-generated identifier for this particular job run.</p>
     */
    inline StartJobRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:

    Aws::String m_runId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
