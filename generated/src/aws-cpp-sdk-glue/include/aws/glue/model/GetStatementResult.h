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

  private:

    Statement m_statement;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
