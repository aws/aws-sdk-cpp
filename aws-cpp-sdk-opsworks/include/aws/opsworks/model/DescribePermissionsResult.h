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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Permission.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribePermissions</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribePermissionsResult
  {
  public:
    DescribePermissionsResult();
    DescribePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Permission> m_permissions;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
