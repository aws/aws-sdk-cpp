/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class EnableOrganizationAdminAccountRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API EnableOrganizationAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableOrganizationAdminAccount"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline EnableOrganizationAdminAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline EnableOrganizationAdminAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Detective administrator account for the organization.</p>
     */
    inline EnableOrganizationAdminAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
