/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/PermissionGroup.h>
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
  class ListPermissionGroupsResult
  {
  public:
    AWS_FINSPACEDATA_API ListPermissionGroupsResult();
    AWS_FINSPACEDATA_API ListPermissionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ListPermissionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all the permission groups.</p>
     */
    inline const Aws::Vector<PermissionGroup>& GetPermissionGroups() const{ return m_permissionGroups; }

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline void SetPermissionGroups(const Aws::Vector<PermissionGroup>& value) { m_permissionGroups = value; }

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline void SetPermissionGroups(Aws::Vector<PermissionGroup>&& value) { m_permissionGroups = std::move(value); }

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline ListPermissionGroupsResult& WithPermissionGroups(const Aws::Vector<PermissionGroup>& value) { SetPermissionGroups(value); return *this;}

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline ListPermissionGroupsResult& WithPermissionGroups(Aws::Vector<PermissionGroup>&& value) { SetPermissionGroups(std::move(value)); return *this;}

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline ListPermissionGroupsResult& AddPermissionGroups(const PermissionGroup& value) { m_permissionGroups.push_back(value); return *this; }

    /**
     * <p>A list of all the permission groups.</p>
     */
    inline ListPermissionGroupsResult& AddPermissionGroups(PermissionGroup&& value) { m_permissionGroups.push_back(std::move(value)); return *this; }


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
    inline ListPermissionGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListPermissionGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListPermissionGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PermissionGroup> m_permissionGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
