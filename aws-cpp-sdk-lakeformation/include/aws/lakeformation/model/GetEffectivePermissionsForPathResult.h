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
  class GetEffectivePermissionsForPathResult
  {
  public:
    AWS_LAKEFORMATION_API GetEffectivePermissionsForPathResult();
    AWS_LAKEFORMATION_API GetEffectivePermissionsForPathResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetEffectivePermissionsForPathResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline const Aws::Vector<PrincipalResourcePermissions>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline void SetPermissions(const Aws::Vector<PrincipalResourcePermissions>& value) { m_permissions = value; }

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline void SetPermissions(Aws::Vector<PrincipalResourcePermissions>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline GetEffectivePermissionsForPathResult& WithPermissions(const Aws::Vector<PrincipalResourcePermissions>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline GetEffectivePermissionsForPathResult& WithPermissions(Aws::Vector<PrincipalResourcePermissions>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline GetEffectivePermissionsForPathResult& AddPermissions(const PrincipalResourcePermissions& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of the permissions for the specified table or database resource
     * located at the path in Amazon S3.</p>
     */
    inline GetEffectivePermissionsForPathResult& AddPermissions(PrincipalResourcePermissions&& value) { m_permissions.push_back(std::move(value)); return *this; }


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
    inline GetEffectivePermissionsForPathResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline GetEffectivePermissionsForPathResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline GetEffectivePermissionsForPathResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PrincipalResourcePermissions> m_permissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
