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
  class StartBlueprintRunResult
  {
  public:
    AWS_GLUE_API StartBlueprintRunResult();
    AWS_GLUE_API StartBlueprintRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartBlueprintRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline StartBlueprintRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline StartBlueprintRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline StartBlueprintRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:

    Aws::String m_runId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
