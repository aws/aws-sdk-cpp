/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/PreparedStatement.h>
#include <aws/athena/model/UnprocessedPreparedStatementName.h>
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
  class BatchGetPreparedStatementResult
  {
  public:
    AWS_ATHENA_API BatchGetPreparedStatementResult();
    AWS_ATHENA_API BatchGetPreparedStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetPreparedStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline const Aws::Vector<PreparedStatement>& GetPreparedStatements() const{ return m_preparedStatements; }

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline void SetPreparedStatements(const Aws::Vector<PreparedStatement>& value) { m_preparedStatements = value; }

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline void SetPreparedStatements(Aws::Vector<PreparedStatement>&& value) { m_preparedStatements = std::move(value); }

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline BatchGetPreparedStatementResult& WithPreparedStatements(const Aws::Vector<PreparedStatement>& value) { SetPreparedStatements(value); return *this;}

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline BatchGetPreparedStatementResult& WithPreparedStatements(Aws::Vector<PreparedStatement>&& value) { SetPreparedStatements(std::move(value)); return *this;}

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline BatchGetPreparedStatementResult& AddPreparedStatements(const PreparedStatement& value) { m_preparedStatements.push_back(value); return *this; }

    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline BatchGetPreparedStatementResult& AddPreparedStatements(PreparedStatement&& value) { m_preparedStatements.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline const Aws::Vector<UnprocessedPreparedStatementName>& GetUnprocessedPreparedStatementNames() const{ return m_unprocessedPreparedStatementNames; }

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline void SetUnprocessedPreparedStatementNames(const Aws::Vector<UnprocessedPreparedStatementName>& value) { m_unprocessedPreparedStatementNames = value; }

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline void SetUnprocessedPreparedStatementNames(Aws::Vector<UnprocessedPreparedStatementName>&& value) { m_unprocessedPreparedStatementNames = std::move(value); }

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline BatchGetPreparedStatementResult& WithUnprocessedPreparedStatementNames(const Aws::Vector<UnprocessedPreparedStatementName>& value) { SetUnprocessedPreparedStatementNames(value); return *this;}

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline BatchGetPreparedStatementResult& WithUnprocessedPreparedStatementNames(Aws::Vector<UnprocessedPreparedStatementName>&& value) { SetUnprocessedPreparedStatementNames(std::move(value)); return *this;}

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline BatchGetPreparedStatementResult& AddUnprocessedPreparedStatementNames(const UnprocessedPreparedStatementName& value) { m_unprocessedPreparedStatementNames.push_back(value); return *this; }

    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline BatchGetPreparedStatementResult& AddUnprocessedPreparedStatementNames(UnprocessedPreparedStatementName&& value) { m_unprocessedPreparedStatementNames.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PreparedStatement> m_preparedStatements;

    Aws::Vector<UnprocessedPreparedStatementName> m_unprocessedPreparedStatementNames;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
