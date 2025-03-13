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
    AWS_GLUE_API ListStatementsResult() = default;
    AWS_GLUE_API ListStatementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListStatementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the list of statements.</p>
     */
    inline const Aws::Vector<Statement>& GetStatements() const { return m_statements; }
    template<typename StatementsT = Aws::Vector<Statement>>
    void SetStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements = std::forward<StatementsT>(value); }
    template<typename StatementsT = Aws::Vector<Statement>>
    ListStatementsResult& WithStatements(StatementsT&& value) { SetStatements(std::forward<StatementsT>(value)); return *this;}
    template<typename StatementsT = Statement>
    ListStatementsResult& AddStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements.emplace_back(std::forward<StatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all statements have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStatementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStatementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Statement> m_statements;
    bool m_statementsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
