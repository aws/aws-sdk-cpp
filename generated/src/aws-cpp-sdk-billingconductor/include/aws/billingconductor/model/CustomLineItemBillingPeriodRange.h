/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The billing period range in which the custom line item request will be
   * applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemBillingPeriodRange">AWS
   * API Reference</a></p>
   */
  class CustomLineItemBillingPeriodRange
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange() = default;
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line is applied.</p>
     */
    inline const Aws::String& GetInclusiveStartBillingPeriod() const { return m_inclusiveStartBillingPeriod; }
    inline bool InclusiveStartBillingPeriodHasBeenSet() const { return m_inclusiveStartBillingPeriodHasBeenSet; }
    template<typename InclusiveStartBillingPeriodT = Aws::String>
    void SetInclusiveStartBillingPeriod(InclusiveStartBillingPeriodT&& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = std::forward<InclusiveStartBillingPeriodT>(value); }
    template<typename InclusiveStartBillingPeriodT = Aws::String>
    CustomLineItemBillingPeriodRange& WithInclusiveStartBillingPeriod(InclusiveStartBillingPeriodT&& value) { SetInclusiveStartBillingPeriod(std::forward<InclusiveStartBillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive end billing period that defines a billing period range where a
     * custom line is applied.</p>
     */
    inline const Aws::String& GetExclusiveEndBillingPeriod() const { return m_exclusiveEndBillingPeriod; }
    inline bool ExclusiveEndBillingPeriodHasBeenSet() const { return m_exclusiveEndBillingPeriodHasBeenSet; }
    template<typename ExclusiveEndBillingPeriodT = Aws::String>
    void SetExclusiveEndBillingPeriod(ExclusiveEndBillingPeriodT&& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = std::forward<ExclusiveEndBillingPeriodT>(value); }
    template<typename ExclusiveEndBillingPeriodT = Aws::String>
    CustomLineItemBillingPeriodRange& WithExclusiveEndBillingPeriod(ExclusiveEndBillingPeriodT&& value) { SetExclusiveEndBillingPeriod(std::forward<ExclusiveEndBillingPeriodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inclusiveStartBillingPeriod;
    bool m_inclusiveStartBillingPeriodHasBeenSet = false;

    Aws::String m_exclusiveEndBillingPeriod;
    bool m_exclusiveEndBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
