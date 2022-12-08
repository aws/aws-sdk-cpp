/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether to enable Amazon Macie automatically for an account when
     * the account is added to the organization in Organizations.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Specifies whether to enable Amazon Macie automatically for an account when
     * the account is added to the organization in Organizations.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Specifies whether to enable Amazon Macie automatically for an account when
     * the account is added to the organization in Organizations.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Specifies whether to enable Amazon Macie automatically for an account when
     * the account is added to the organization in Organizations.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
