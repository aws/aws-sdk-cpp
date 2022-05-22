/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{
  class AWS_CONNECT_API ListSecurityProfilePermissionsResult
  {
  public:
    ListSecurityProfilePermissionsResult();
    ListSecurityProfilePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecurityProfilePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissions = value; }

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissions = std::move(value); }

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline ListSecurityProfilePermissionsResult& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline ListSecurityProfilePermissionsResult& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline ListSecurityProfilePermissionsResult& AddPermissions(const Aws::String& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline ListSecurityProfilePermissionsResult& AddPermissions(Aws::String&& value) { m_permissions.push_back(std::move(value)); return *this; }

    /**
     * <p>The permissions granted to the security profile.</p>
     */
    inline ListSecurityProfilePermissionsResult& AddPermissions(const char* value) { m_permissions.push_back(value); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListSecurityProfilePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListSecurityProfilePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListSecurityProfilePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_permissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
