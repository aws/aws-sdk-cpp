/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class EnableDelegatedAdminAccountRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API EnableDelegatedAdminAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableDelegatedAdminAccount"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value); }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    EnableDelegatedAdminAccountRequest& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    EnableDelegatedAdminAccountRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
