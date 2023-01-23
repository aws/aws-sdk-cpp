/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/PreparedStatement.h>
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
    AWS_ATHENA_API GetPreparedStatementResult();
    AWS_ATHENA_API GetPreparedStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetPreparedStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline const PreparedStatement& GetPreparedStatement() const{ return m_preparedStatement; }

    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline void SetPreparedStatement(const PreparedStatement& value) { m_preparedStatement = value; }

    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline void SetPreparedStatement(PreparedStatement&& value) { m_preparedStatement = std::move(value); }

    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline GetPreparedStatementResult& WithPreparedStatement(const PreparedStatement& value) { SetPreparedStatement(value); return *this;}

    /**
     * <p>The name of the prepared statement that was retrieved.</p>
     */
    inline GetPreparedStatementResult& WithPreparedStatement(PreparedStatement&& value) { SetPreparedStatement(std::move(value)); return *this;}

  private:

    PreparedStatement m_preparedStatement;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
