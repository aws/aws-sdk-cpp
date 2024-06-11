﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Permission.h>
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
namespace Inspector2
{
namespace Model
{
  class ListAccountPermissionsResult
  {
  public:
    AWS_INSPECTOR2_API ListAccountPermissionsResult();
    AWS_INSPECTOR2_API ListAccountPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListAccountPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccountPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details on the permissions an account has to configure Amazon
     * Inspector.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }
    inline ListAccountPermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}
    inline ListAccountPermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline ListAccountPermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }
    inline ListAccountPermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccountPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccountPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccountPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Permission> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
