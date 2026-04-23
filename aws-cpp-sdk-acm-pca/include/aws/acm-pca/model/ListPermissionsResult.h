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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/Permission.h>
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
namespace ACMPCA
{
namespace Model
{
  class AWS_ACMPCA_API ListPermissionsResult
  {
  public:
    ListPermissionsResult();
    ListPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline ListPermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline ListPermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline ListPermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>Summary information about each permission assigned by the specified private
     * CA, including the action enabled, the policy provided, and the time of
     * creation.</p>
     */
    inline ListPermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Permission> m_permissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
