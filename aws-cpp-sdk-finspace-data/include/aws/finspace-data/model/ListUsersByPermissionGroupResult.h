/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/UserByPermissionGroup.h>
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
namespace FinSpaceData
{
namespace Model
{
  class ListUsersByPermissionGroupResult
  {
  public:
    AWS_FINSPACEDATA_API ListUsersByPermissionGroupResult();
    AWS_FINSPACEDATA_API ListUsersByPermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ListUsersByPermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline const Aws::Vector<UserByPermissionGroup>& GetUsers() const{ return m_users; }

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline void SetUsers(const Aws::Vector<UserByPermissionGroup>& value) { m_users = value; }

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline void SetUsers(Aws::Vector<UserByPermissionGroup>&& value) { m_users = std::move(value); }

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline ListUsersByPermissionGroupResult& WithUsers(const Aws::Vector<UserByPermissionGroup>& value) { SetUsers(value); return *this;}

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline ListUsersByPermissionGroupResult& WithUsers(Aws::Vector<UserByPermissionGroup>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline ListUsersByPermissionGroupResult& AddUsers(const UserByPermissionGroup& value) { m_users.push_back(value); return *this; }

    /**
     * <p>Lists details of all users in a specific permission group.</p>
     */
    inline ListUsersByPermissionGroupResult& AddUsers(UserByPermissionGroup&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListUsersByPermissionGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListUsersByPermissionGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListUsersByPermissionGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserByPermissionGroup> m_users;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
