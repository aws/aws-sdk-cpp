/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ConnectionAliasPermission.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeConnectionAliasPermissionsResult
  {
  public:
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult();
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasId = value; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasId = std::move(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasId.assign(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline const Aws::Vector<ConnectionAliasPermission>& GetConnectionAliasPermissions() const{ return m_connectionAliasPermissions; }

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline void SetConnectionAliasPermissions(const Aws::Vector<ConnectionAliasPermission>& value) { m_connectionAliasPermissions = value; }

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline void SetConnectionAliasPermissions(Aws::Vector<ConnectionAliasPermission>&& value) { m_connectionAliasPermissions = std::move(value); }

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithConnectionAliasPermissions(const Aws::Vector<ConnectionAliasPermission>& value) { SetConnectionAliasPermissions(value); return *this;}

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithConnectionAliasPermissions(Aws::Vector<ConnectionAliasPermission>&& value) { SetConnectionAliasPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& AddConnectionAliasPermissions(const ConnectionAliasPermission& value) { m_connectionAliasPermissions.push_back(value); return *this; }

    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline DescribeConnectionAliasPermissionsResult& AddConnectionAliasPermissions(ConnectionAliasPermission&& value) { m_connectionAliasPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_aliasId;

    Aws::Vector<ConnectionAliasPermission> m_connectionAliasPermissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
