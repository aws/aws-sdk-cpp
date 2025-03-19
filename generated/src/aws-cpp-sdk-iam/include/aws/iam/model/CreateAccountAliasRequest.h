/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class CreateAccountAliasRequest : public IAMRequest
  {
  public:
    AWS_IAM_API CreateAccountAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountAlias"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The account alias to create.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of lowercase letters, digits, and dashes. You cannot start or finish
     * with a dash, nor can you have two dashes in a row.</p>
     */
    inline const Aws::String& GetAccountAlias() const { return m_accountAlias; }
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }
    template<typename AccountAliasT = Aws::String>
    void SetAccountAlias(AccountAliasT&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::forward<AccountAliasT>(value); }
    template<typename AccountAliasT = Aws::String>
    CreateAccountAliasRequest& WithAccountAlias(AccountAliasT&& value) { SetAccountAlias(std::forward<AccountAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
