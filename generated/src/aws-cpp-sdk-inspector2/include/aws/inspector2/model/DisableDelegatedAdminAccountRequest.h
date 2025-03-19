/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class DisableDelegatedAdminAccountRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableDelegatedAdminAccount"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value); }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    DisableDelegatedAdminAccountRequest& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
