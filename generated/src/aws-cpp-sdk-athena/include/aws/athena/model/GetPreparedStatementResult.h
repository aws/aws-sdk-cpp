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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPreparedStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPreparedStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPreparedStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PreparedStatement m_preparedStatement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
