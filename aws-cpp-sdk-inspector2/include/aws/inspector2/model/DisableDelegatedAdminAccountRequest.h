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
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableDelegatedAdminAccount"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const{ return m_delegatedAdminAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(const Aws::String& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(Aws::String&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(const char* value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountRequest& WithDelegatedAdminAccountId(const Aws::String& value) { SetDelegatedAdminAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountRequest& WithDelegatedAdminAccountId(Aws::String&& value) { SetDelegatedAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the current Amazon Inspector delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountRequest& WithDelegatedAdminAccountId(const char* value) { SetDelegatedAdminAccountId(value); return *this;}

  private:

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
