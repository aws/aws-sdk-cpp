/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListColumnStatisticsTaskRunsResult
  {
  public:
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult();
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListColumnStatisticsTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnStatisticsTaskRunIds() const{ return m_columnStatisticsTaskRunIds; }

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline void SetColumnStatisticsTaskRunIds(const Aws::Vector<Aws::String>& value) { m_columnStatisticsTaskRunIds = value; }

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline void SetColumnStatisticsTaskRunIds(Aws::Vector<Aws::String>&& value) { m_columnStatisticsTaskRunIds = std::move(value); }

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRunIds(const Aws::Vector<Aws::String>& value) { SetColumnStatisticsTaskRunIds(value); return *this;}

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& WithColumnStatisticsTaskRunIds(Aws::Vector<Aws::String>&& value) { SetColumnStatisticsTaskRunIds(std::move(value)); return *this;}

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRunIds(const Aws::String& value) { m_columnStatisticsTaskRunIds.push_back(value); return *this; }

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRunIds(Aws::String&& value) { m_columnStatisticsTaskRunIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of column statistics task run IDs.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& AddColumnStatisticsTaskRunIds(const char* value) { m_columnStatisticsTaskRunIds.push_back(value); return *this; }


    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all task run IDs have yet been returned.</p>
     */
    inline ListColumnStatisticsTaskRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListColumnStatisticsTaskRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListColumnStatisticsTaskRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListColumnStatisticsTaskRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_columnStatisticsTaskRunIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
