/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/AutoEnable.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Defines which scan types are enabled automatically for new members of your
     * Amazon Inspector organization.</p>
     */
    inline const AutoEnable& GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    template<typename AutoEnableT = AutoEnable>
    void SetAutoEnable(AutoEnableT&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::forward<AutoEnableT>(value); }
    template<typename AutoEnableT = AutoEnable>
    UpdateOrganizationConfigurationRequest& WithAutoEnable(AutoEnableT&& value) { SetAutoEnable(std::forward<AutoEnableT>(value)); return *this;}
    ///@}
  private:

    AutoEnable m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
