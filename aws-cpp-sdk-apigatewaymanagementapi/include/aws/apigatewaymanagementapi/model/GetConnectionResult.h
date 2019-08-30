/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult
  {
  public:
    GetConnectionResult();
    GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
