/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/Connection.h>
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
namespace CodeConnections
{
namespace Model
{
  class GetConnectionResult
  {
  public:
    AWS_CODECONNECTIONS_API GetConnectionResult();
    AWS_CODECONNECTIONS_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline GetConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline GetConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Connection m_connection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
