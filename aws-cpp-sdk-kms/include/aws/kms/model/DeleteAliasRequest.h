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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API DeleteAliasRequest : public KMSRequest
  {
  public:
    DeleteAliasRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline DeleteAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(value); return *this;}

    /**
     * <p>The alias to be deleted. The name must start with the word "alias" followed
     * by a forward slash (alias/). Aliases that begin with "alias/AWS" are
     * reserved.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

  private:
    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
