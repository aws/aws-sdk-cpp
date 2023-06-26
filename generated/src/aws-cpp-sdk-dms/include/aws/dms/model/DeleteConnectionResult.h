/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Connection.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteConnectionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteConnectionResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteConnectionResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection that is being deleted.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>The connection that is being deleted.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>The connection that is being deleted.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>The connection that is being deleted.</p>
     */
    inline DeleteConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>The connection that is being deleted.</p>
     */
    inline DeleteConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Connection m_connection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
