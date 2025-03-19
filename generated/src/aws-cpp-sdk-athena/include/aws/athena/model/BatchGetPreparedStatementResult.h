/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ATHENA_API BatchGetPreparedStatementResult() = default;
    AWS_ATHENA_API BatchGetPreparedStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetPreparedStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of prepared statements returned.</p>
     */
    inline const Aws::Vector<PreparedStatement>& GetPreparedStatements() const { return m_preparedStatements; }
    template<typename PreparedStatementsT = Aws::Vector<PreparedStatement>>
    void SetPreparedStatements(PreparedStatementsT&& value) { m_preparedStatementsHasBeenSet = true; m_preparedStatements = std::forward<PreparedStatementsT>(value); }
    template<typename PreparedStatementsT = Aws::Vector<PreparedStatement>>
    BatchGetPreparedStatementResult& WithPreparedStatements(PreparedStatementsT&& value) { SetPreparedStatements(std::forward<PreparedStatementsT>(value)); return *this;}
    template<typename PreparedStatementsT = PreparedStatement>
    BatchGetPreparedStatementResult& AddPreparedStatements(PreparedStatementsT&& value) { m_preparedStatementsHasBeenSet = true; m_preparedStatements.emplace_back(std::forward<PreparedStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more prepared statements that were requested but could not
     * be returned.</p>
     */
    inline const Aws::Vector<UnprocessedPreparedStatementName>& GetUnprocessedPreparedStatementNames() const { return m_unprocessedPreparedStatementNames; }
    template<typename UnprocessedPreparedStatementNamesT = Aws::Vector<UnprocessedPreparedStatementName>>
    void SetUnprocessedPreparedStatementNames(UnprocessedPreparedStatementNamesT&& value) { m_unprocessedPreparedStatementNamesHasBeenSet = true; m_unprocessedPreparedStatementNames = std::forward<UnprocessedPreparedStatementNamesT>(value); }
    template<typename UnprocessedPreparedStatementNamesT = Aws::Vector<UnprocessedPreparedStatementName>>
    BatchGetPreparedStatementResult& WithUnprocessedPreparedStatementNames(UnprocessedPreparedStatementNamesT&& value) { SetUnprocessedPreparedStatementNames(std::forward<UnprocessedPreparedStatementNamesT>(value)); return *this;}
    template<typename UnprocessedPreparedStatementNamesT = UnprocessedPreparedStatementName>
    BatchGetPreparedStatementResult& AddUnprocessedPreparedStatementNames(UnprocessedPreparedStatementNamesT&& value) { m_unprocessedPreparedStatementNamesHasBeenSet = true; m_unprocessedPreparedStatementNames.emplace_back(std::forward<UnprocessedPreparedStatementNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetPreparedStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PreparedStatement> m_preparedStatements;
    bool m_preparedStatementsHasBeenSet = false;

    Aws::Vector<UnprocessedPreparedStatementName> m_unprocessedPreparedStatementNames;
    bool m_unprocessedPreparedStatementNamesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
