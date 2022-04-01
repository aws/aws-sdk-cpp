/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Statement.h>
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
  class AWS_GLUE_API GetStatementResult
  {
  public:
    GetStatementResult();
    GetStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Statement m_statement;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
