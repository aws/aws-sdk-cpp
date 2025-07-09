/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/FreeTierRequest.h>
#include <aws/freetier/model/AccountPlanType.h>
#include <utility>

namespace Aws
{
namespace FreeTier
{
namespace Model
{

  /**
   */
  class UpgradeAccountPlanRequest : public FreeTierRequest
  {
  public:
    AWS_FREETIER_API UpgradeAccountPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeAccountPlan"; }

    AWS_FREETIER_API Aws::String SerializePayload() const override;

    AWS_FREETIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The target account plan type. This makes it explicit about the change and
     * latest value of the <code>accountPlanType</code>. </p>
     */
    inline AccountPlanType GetAccountPlanType() const { return m_accountPlanType; }
    inline bool AccountPlanTypeHasBeenSet() const { return m_accountPlanTypeHasBeenSet; }
    inline void SetAccountPlanType(AccountPlanType value) { m_accountPlanTypeHasBeenSet = true; m_accountPlanType = value; }
    inline UpgradeAccountPlanRequest& WithAccountPlanType(AccountPlanType value) { SetAccountPlanType(value); return *this;}
    ///@}
  private:

    AccountPlanType m_accountPlanType{AccountPlanType::NOT_SET};
    bool m_accountPlanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
