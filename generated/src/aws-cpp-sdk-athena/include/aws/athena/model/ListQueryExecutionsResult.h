﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{
  class ListQueryExecutionsResult
  {
  public:
    AWS_ATHENA_API ListQueryExecutionsResult();
    AWS_ATHENA_API ListQueryExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ListQueryExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique IDs of each query execution as an array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryExecutionIds() const{ return m_queryExecutionIds; }
    inline void SetQueryExecutionIds(const Aws::Vector<Aws::String>& value) { m_queryExecutionIds = value; }
    inline void SetQueryExecutionIds(Aws::Vector<Aws::String>&& value) { m_queryExecutionIds = std::move(value); }
    inline ListQueryExecutionsResult& WithQueryExecutionIds(const Aws::Vector<Aws::String>& value) { SetQueryExecutionIds(value); return *this;}
    inline ListQueryExecutionsResult& WithQueryExecutionIds(Aws::Vector<Aws::String>&& value) { SetQueryExecutionIds(std::move(value)); return *this;}
    inline ListQueryExecutionsResult& AddQueryExecutionIds(const Aws::String& value) { m_queryExecutionIds.push_back(value); return *this; }
    inline ListQueryExecutionsResult& AddQueryExecutionIds(Aws::String&& value) { m_queryExecutionIds.push_back(std::move(value)); return *this; }
    inline ListQueryExecutionsResult& AddQueryExecutionIds(const char* value) { m_queryExecutionIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQueryExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQueryExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQueryExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQueryExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQueryExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQueryExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_queryExecutionIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
