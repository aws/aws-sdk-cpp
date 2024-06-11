﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{
  class ListSecurityProfilePermissionsResult
  {
  public:
    AWS_CONNECT_API ListSecurityProfilePermissionsResult();
    AWS_CONNECT_API ListSecurityProfilePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityProfilePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The permissions granted to the security profile. For a complete list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissions = std::move(value); }
    inline ListSecurityProfilePermissionsResult& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}
    inline ListSecurityProfilePermissionsResult& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}
    inline ListSecurityProfilePermissionsResult& AddPermissions(const Aws::String& value) { m_permissions.push_back(value); return *this; }
    inline ListSecurityProfilePermissionsResult& AddPermissions(Aws::String&& value) { m_permissions.push_back(std::move(value)); return *this; }
    inline ListSecurityProfilePermissionsResult& AddPermissions(const char* value) { m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSecurityProfilePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSecurityProfilePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSecurityProfilePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline ListSecurityProfilePermissionsResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ListSecurityProfilePermissionsResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegion.assign(value); }
    inline ListSecurityProfilePermissionsResult& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline ListSecurityProfilePermissionsResult& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline ListSecurityProfilePermissionsResult& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSecurityProfilePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSecurityProfilePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSecurityProfilePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_permissions;

    Aws::String m_nextToken;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_lastModifiedRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
