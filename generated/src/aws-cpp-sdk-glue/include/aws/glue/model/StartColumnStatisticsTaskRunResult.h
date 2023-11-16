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
  class StartColumnStatisticsTaskRunResult
  {
  public:
    AWS_GLUE_API StartColumnStatisticsTaskRunResult();
    AWS_GLUE_API StartColumnStatisticsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartColumnStatisticsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const{ return m_columnStatisticsTaskRunId; }

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(const Aws::String& value) { m_columnStatisticsTaskRunId = value; }

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(Aws::String&& value) { m_columnStatisticsTaskRunId = std::move(value); }

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(const char* value) { m_columnStatisticsTaskRunId.assign(value); }

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline StartColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRunId(const Aws::String& value) { SetColumnStatisticsTaskRunId(value); return *this;}

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline StartColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRunId(Aws::String&& value) { SetColumnStatisticsTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline StartColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRunId(const char* value) { SetColumnStatisticsTaskRunId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartColumnStatisticsTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartColumnStatisticsTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartColumnStatisticsTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_columnStatisticsTaskRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
