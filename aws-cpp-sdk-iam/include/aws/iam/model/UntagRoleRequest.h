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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UntagRoleRequest : public IAMRequest
  {
  public:
    UntagRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagRole"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UntagRoleRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UntagRoleRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UntagRoleRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline UntagRoleRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline UntagRoleRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline UntagRoleRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline UntagRoleRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified role.</p>
     */
    inline UntagRoleRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
