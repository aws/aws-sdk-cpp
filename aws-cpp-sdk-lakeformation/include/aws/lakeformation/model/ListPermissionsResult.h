/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/PrincipalResourcePermissions.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListPermissionsResult
  {
  public:
    AWS_LAKEFORMATION_API ListPermissionsResult();
    AWS_LAKEFORMATION_API ListPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline const Aws::Vector<PrincipalResourcePermissions>& GetPrincipalResourcePermissions() const{ return m_principalResourcePermissions; }

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline void SetPrincipalResourcePermissions(const Aws::Vector<PrincipalResourcePermissions>& value) { m_principalResourcePermissions = value; }

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline void SetPrincipalResourcePermissions(Aws::Vector<PrincipalResourcePermissions>&& value) { m_principalResourcePermissions = std::move(value); }

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline ListPermissionsResult& WithPrincipalResourcePermissions(const Aws::Vector<PrincipalResourcePermissions>& value) { SetPrincipalResourcePermissions(value); return *this;}

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline ListPermissionsResult& WithPrincipalResourcePermissions(Aws::Vector<PrincipalResourcePermissions>&& value) { SetPrincipalResourcePermissions(std::move(value)); return *this;}

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline ListPermissionsResult& AddPrincipalResourcePermissions(const PrincipalResourcePermissions& value) { m_principalResourcePermissions.push_back(value); return *this; }

    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline ListPermissionsResult& AddPrincipalResourcePermissions(PrincipalResourcePermissions&& value) { m_principalResourcePermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PrincipalResourcePermissions> m_principalResourcePermissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
