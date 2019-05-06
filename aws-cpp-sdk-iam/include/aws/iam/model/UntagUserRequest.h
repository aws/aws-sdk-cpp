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
  class AWS_IAM_API UntagUserRequest : public IAMRequest
  {
  public:
    UntagUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagUser"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UntagUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UntagUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user from which you want to remove tags.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UntagUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline UntagUserRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline UntagUserRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline UntagUserRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline UntagUserRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified user.</p>
     */
    inline UntagUserRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
