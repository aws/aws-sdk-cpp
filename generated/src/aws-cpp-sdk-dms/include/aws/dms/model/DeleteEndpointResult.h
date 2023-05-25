/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Endpoint.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEndpointResponse">AWS
   * API Reference</a></p>
   */
  class DeleteEndpointResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEndpointResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint that was deleted.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that was deleted.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpoint = value; }

    /**
     * <p>The endpoint that was deleted.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that was deleted.</p>
     */
    inline DeleteEndpointResult& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that was deleted.</p>
     */
    inline DeleteEndpointResult& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Endpoint m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
