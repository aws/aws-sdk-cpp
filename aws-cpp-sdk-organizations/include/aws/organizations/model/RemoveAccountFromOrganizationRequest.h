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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API RemoveAccountFromOrganizationRequest : public OrganizationsRequest
  {
  public:
    RemoveAccountFromOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAccountFromOrganization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline RemoveAccountFromOrganizationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline RemoveAccountFromOrganizationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the member account that you want to remove from
     * the organization.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline RemoveAccountFromOrganizationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
