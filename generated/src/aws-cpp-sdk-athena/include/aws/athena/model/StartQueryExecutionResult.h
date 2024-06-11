﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
  class StartQueryExecutionResult
  {
  public:
    AWS_ATHENA_API StartQueryExecutionResult();
    AWS_ATHENA_API StartQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API StartQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionId = value; }
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionId = std::move(value); }
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionId.assign(value); }
    inline StartQueryExecutionResult& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}
    inline StartQueryExecutionResult& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}
    inline StartQueryExecutionResult& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartQueryExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartQueryExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartQueryExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queryExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
