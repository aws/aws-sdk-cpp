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
   * <p>A billing period filter that specifies the custom line item versions to
   * retrieve.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemVersionsBillingPeriodRangeFilter">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemVersionsBillingPeriodRangeFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline const Aws::String& GetStartBillingPeriod() const { return m_startBillingPeriod; }
    inline bool StartBillingPeriodHasBeenSet() const { return m_startBillingPeriodHasBeenSet; }
    template<typename StartBillingPeriodT = Aws::String>
    void SetStartBillingPeriod(StartBillingPeriodT&& value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod = std::forward<StartBillingPeriodT>(value); }
    template<typename StartBillingPeriodT = Aws::String>
    ListCustomLineItemVersionsBillingPeriodRangeFilter& WithStartBillingPeriod(StartBillingPeriodT&& value) { SetStartBillingPeriod(std::forward<StartBillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline const Aws::String& GetEndBillingPeriod() const { return m_endBillingPeriod; }
    inline bool EndBillingPeriodHasBeenSet() const { return m_endBillingPeriodHasBeenSet; }
    template<typename EndBillingPeriodT = Aws::String>
    void SetEndBillingPeriod(EndBillingPeriodT&& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = std::forward<EndBillingPeriodT>(value); }
    template<typename EndBillingPeriodT = Aws::String>
    ListCustomLineItemVersionsBillingPeriodRangeFilter& WithEndBillingPeriod(EndBillingPeriodT&& value) { SetEndBillingPeriod(std::forward<EndBillingPeriodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_startBillingPeriod;
    bool m_startBillingPeriodHasBeenSet = false;

    Aws::String m_endBillingPeriod;
    bool m_endBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
