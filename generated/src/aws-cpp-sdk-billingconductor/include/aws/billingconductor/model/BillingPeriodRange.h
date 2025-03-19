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
   * <p>A time range for which the margin summary is effective. The time range can be
   * up to 12 months.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingPeriodRange">AWS
   * API Reference</a></p>
   */
  class BillingPeriodRange
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange() = default;
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline const Aws::String& GetInclusiveStartBillingPeriod() const { return m_inclusiveStartBillingPeriod; }
    inline bool InclusiveStartBillingPeriodHasBeenSet() const { return m_inclusiveStartBillingPeriodHasBeenSet; }
    template<typename InclusiveStartBillingPeriodT = Aws::String>
    void SetInclusiveStartBillingPeriod(InclusiveStartBillingPeriodT&& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = std::forward<InclusiveStartBillingPeriodT>(value); }
    template<typename InclusiveStartBillingPeriodT = Aws::String>
    BillingPeriodRange& WithInclusiveStartBillingPeriod(InclusiveStartBillingPeriodT&& value) { SetInclusiveStartBillingPeriod(std::forward<InclusiveStartBillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline const Aws::String& GetExclusiveEndBillingPeriod() const { return m_exclusiveEndBillingPeriod; }
    inline bool ExclusiveEndBillingPeriodHasBeenSet() const { return m_exclusiveEndBillingPeriodHasBeenSet; }
    template<typename ExclusiveEndBillingPeriodT = Aws::String>
    void SetExclusiveEndBillingPeriod(ExclusiveEndBillingPeriodT&& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = std::forward<ExclusiveEndBillingPeriodT>(value); }
    template<typename ExclusiveEndBillingPeriodT = Aws::String>
    BillingPeriodRange& WithExclusiveEndBillingPeriod(ExclusiveEndBillingPeriodT&& value) { SetExclusiveEndBillingPeriod(std::forward<ExclusiveEndBillingPeriodT>(value)); return *this;}
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
