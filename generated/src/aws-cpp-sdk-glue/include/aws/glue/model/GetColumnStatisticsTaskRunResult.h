/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatisticsTaskRun.h>
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
  class GetColumnStatisticsTaskRunResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsTaskRunResult();
    AWS_GLUE_API GetColumnStatisticsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline const ColumnStatisticsTaskRun& GetColumnStatisticsTaskRun() const{ return m_columnStatisticsTaskRun; }

    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline void SetColumnStatisticsTaskRun(const ColumnStatisticsTaskRun& value) { m_columnStatisticsTaskRun = value; }

    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline void SetColumnStatisticsTaskRun(ColumnStatisticsTaskRun&& value) { m_columnStatisticsTaskRun = std::move(value); }

    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline GetColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRun(const ColumnStatisticsTaskRun& value) { SetColumnStatisticsTaskRun(value); return *this;}

    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline GetColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRun(ColumnStatisticsTaskRun&& value) { SetColumnStatisticsTaskRun(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetColumnStatisticsTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetColumnStatisticsTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetColumnStatisticsTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ColumnStatisticsTaskRun m_columnStatisticsTaskRun;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
