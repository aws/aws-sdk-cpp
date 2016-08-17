/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API DeleteAccountAliasRequest : public IAMRequest
  {
  public:
    DeleteAccountAliasRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline const Aws::String& GetAccountAlias() const{ return m_accountAlias; }

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline void SetAccountAlias(const Aws::String& value) { m_accountAliasHasBeenSet = true; m_accountAlias = value; }

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline void SetAccountAlias(Aws::String&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = value; }

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline void SetAccountAlias(const char* value) { m_accountAliasHasBeenSet = true; m_accountAlias.assign(value); }

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline DeleteAccountAliasRequest& WithAccountAlias(const Aws::String& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline DeleteAccountAliasRequest& WithAccountAlias(Aws::String&& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>The name of the account alias to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of lowercase letters, digits, and dashes. You
     * cannot start or finish with a dash, nor can you have two dashes in a row.</p>
     */
    inline DeleteAccountAliasRequest& WithAccountAlias(const char* value) { SetAccountAlias(value); return *this;}

  private:
    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
