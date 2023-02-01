/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewaymanagementapi/model/Identity.h>
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
namespace ApiGatewayManagementApi
{
namespace Model
{
  class GetConnectionResult
  {
  public:
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult();
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedAt() const{ return m_connectedAt; }

    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline void SetConnectedAt(const Aws::Utils::DateTime& value) { m_connectedAt = value; }

    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline void SetConnectedAt(Aws::Utils::DateTime&& value) { m_connectedAt = std::move(value); }

    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline GetConnectionResult& WithConnectedAt(const Aws::Utils::DateTime& value) { SetConnectedAt(value); return *this;}

    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline GetConnectionResult& WithConnectedAt(Aws::Utils::DateTime&& value) { SetConnectedAt(std::move(value)); return *this;}


    
    inline const Identity& GetIdentity() const{ return m_identity; }

    
    inline void SetIdentity(const Identity& value) { m_identity = value; }

    
    inline void SetIdentity(Identity&& value) { m_identity = std::move(value); }

    
    inline GetConnectionResult& WithIdentity(const Identity& value) { SetIdentity(value); return *this;}

    
    inline GetConnectionResult& WithIdentity(Identity&& value) { SetIdentity(std::move(value)); return *this;}


    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActiveAt() const{ return m_lastActiveAt; }

    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline void SetLastActiveAt(const Aws::Utils::DateTime& value) { m_lastActiveAt = value; }

    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline void SetLastActiveAt(Aws::Utils::DateTime&& value) { m_lastActiveAt = std::move(value); }

    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline GetConnectionResult& WithLastActiveAt(const Aws::Utils::DateTime& value) { SetLastActiveAt(value); return *this;}

    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline GetConnectionResult& WithLastActiveAt(Aws::Utils::DateTime&& value) { SetLastActiveAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_connectedAt;

    Identity m_identity;

    Aws::Utils::DateTime m_lastActiveAt;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
