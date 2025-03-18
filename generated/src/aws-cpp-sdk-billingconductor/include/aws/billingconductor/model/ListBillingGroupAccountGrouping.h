/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>Specifies if the billing group has the following features
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupAccountGrouping">AWS
   * API Reference</a></p>
   */
  class ListBillingGroupAccountGrouping
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupAccountGrouping() = default;
    AWS_BILLINGCONDUCTOR_API ListBillingGroupAccountGrouping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupAccountGrouping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline bool GetAutoAssociate() const { return m_autoAssociate; }
    inline bool AutoAssociateHasBeenSet() const { return m_autoAssociateHasBeenSet; }
    inline void SetAutoAssociate(bool value) { m_autoAssociateHasBeenSet = true; m_autoAssociate = value; }
    inline ListBillingGroupAccountGrouping& WithAutoAssociate(bool value) { SetAutoAssociate(value); return *this;}
    ///@}
  private:

    bool m_autoAssociate{false};
    bool m_autoAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
