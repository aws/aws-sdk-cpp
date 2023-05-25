/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Statement.h>
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
  class GetStatementResult
  {
  public:
    AWS_GLUE_API GetStatementResult();
    AWS_GLUE_API GetStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the statement.</p>
     */
    inline const Statement& GetStatement() const{ return m_statement; }

    /**
     * <p>Returns the statement.</p>
     */
    inline void SetStatement(const Statement& value) { m_statement = value; }

    /**
     * <p>Returns the statement.</p>
     */
    inline void SetStatement(Statement&& value) { m_statement = std::move(value); }

    /**
     * <p>Returns the statement.</p>
     */
    inline GetStatementResult& WithStatement(const Statement& value) { SetStatement(value); return *this;}

    /**
     * <p>Returns the statement.</p>
     */
    inline GetStatementResult& WithStatement(Statement&& value) { SetStatement(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Statement m_statement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
