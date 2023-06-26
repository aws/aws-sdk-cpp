﻿/**
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
  class StartJobRunResult
  {
  public:
    AWS_GLUE_API StartJobRunResult();
    AWS_GLUE_API StartJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunId = value; }

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunId = std::move(value); }

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunId.assign(value); }

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to this job run.</p>
     */
    inline StartJobRunResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartJobRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartJobRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartJobRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
