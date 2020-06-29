/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceSharePermissionSummary.h>
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
namespace RAM
{
namespace Model
{
  class AWS_RAM_API ListPermissionsResult
  {
  public:
    ListPermissionsResult();
    ListPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the permissions.</p>
     */
    inline const Aws::Vector<ResourceSharePermissionSummary>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Information about the permissions.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourceSharePermissionSummary>& value) { m_permissions = value; }

    /**
     * <p>Information about the permissions.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourceSharePermissionSummary>&& value) { m_permissions = std::move(value); }

    /**
     * <p>Information about the permissions.</p>
     */
    inline ListPermissionsResult& WithPermissions(const Aws::Vector<ResourceSharePermissionSummary>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Information about the permissions.</p>
     */
    inline ListPermissionsResult& WithPermissions(Aws::Vector<ResourceSharePermissionSummary>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Information about the permissions.</p>
     */
    inline ListPermissionsResult& AddPermissions(const ResourceSharePermissionSummary& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>Information about the permissions.</p>
     */
    inline ListPermissionsResult& AddPermissions(ResourceSharePermissionSummary&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceSharePermissionSummary> m_permissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
