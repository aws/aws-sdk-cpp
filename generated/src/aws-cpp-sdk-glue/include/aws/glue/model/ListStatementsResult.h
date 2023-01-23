/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListStatementsResult
  {
  public:
    AWS_GLUE_API ListStatementsResult();
    AWS_GLUE_API ListStatementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListStatementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the list of statements.</p>
     */
    inline const Aws::Vector<Statement>& GetStatements() const{ return m_statements; }

    /**
     * <p>Returns the list of statements.</p>
     */
    inline void SetStatements(const Aws::Vector<Statement>& value) { m_statements = value; }

    /**
     * <p>Returns the list of statements.</p>
     */
    inline void SetStatements(Aws::Vector<Statement>&& value) { m_statements = std::move(value); }

    /**
     * <p>Returns the list of statements.</p>
     */
    inline ListStatementsResult& WithStatements(const Aws::Vector<Statement>& value) { SetStatements(value); return *this;}

    /**
     * <p>Returns the list of statements.</p>
     */
    inline ListStatementsResult& WithStatements(Aws::Vector<Statement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p>Returns the list of statements.</p>
     */
    inline ListStatementsResult& AddStatements(const Statement& value) { m_statements.push_back(value); return *this; }

    /**
     * <p>Returns the list of statements.</p>
     */
    inline ListStatementsResult& AddStatements(Statement&& value) { m_statements.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline ListStatementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline ListStatementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline ListStatementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Statement> m_statements;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
