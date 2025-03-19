/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/PreparedStatement.h>
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
  class GetPreparedStatementResult
  {
  public:
    AWS_ATHENA_API GetPreparedStatementResult() = default;
    AWS_ATHENA_API GetPreparedStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetPreparedStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline const PreparedStatement& GetPreparedStatement() const { return m_preparedStatement; }
    template<typename PreparedStatementT = PreparedStatement>
    void SetPreparedStatement(PreparedStatementT&& value) { m_preparedStatementHasBeenSet = true; m_preparedStatement = std::forward<PreparedStatementT>(value); }
    template<typename PreparedStatementT = PreparedStatement>
    GetPreparedStatementResult& WithPreparedStatement(PreparedStatementT&& value) { SetPreparedStatement(std::forward<PreparedStatementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPreparedStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PreparedStatement m_preparedStatement;
    bool m_preparedStatementHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
