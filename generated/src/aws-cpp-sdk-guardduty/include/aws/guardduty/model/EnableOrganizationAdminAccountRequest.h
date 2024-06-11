﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class EnableOrganizationAdminAccountRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API EnableOrganizationAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableOrganizationAdminAccount"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the organization account to be enabled
     * as a GuardDuty delegated administrator.</p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = value; }
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::move(value); }
    inline void SetAdminAccountId(const char* value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId.assign(value); }
    inline EnableOrganizationAdminAccountRequest& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}
    inline EnableOrganizationAdminAccountRequest& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}
    inline EnableOrganizationAdminAccountRequest& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
