/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Billing
{
namespace Model
{

  /**
   * <p>A time range with a start and end time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ActiveTimeRange">AWS
   * API Reference</a></p>
   */
  class ActiveTimeRange
  {
  public:
    AWS_BILLING_API ActiveTimeRange() = default;
    AWS_BILLING_API ActiveTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API ActiveTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive time range start date.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveAfterInclusive() const { return m_activeAfterInclusive; }
    inline bool ActiveAfterInclusiveHasBeenSet() const { return m_activeAfterInclusiveHasBeenSet; }
    template<typename ActiveAfterInclusiveT = Aws::Utils::DateTime>
    void SetActiveAfterInclusive(ActiveAfterInclusiveT&& value) { m_activeAfterInclusiveHasBeenSet = true; m_activeAfterInclusive = std::forward<ActiveAfterInclusiveT>(value); }
    template<typename ActiveAfterInclusiveT = Aws::Utils::DateTime>
    ActiveTimeRange& WithActiveAfterInclusive(ActiveAfterInclusiveT&& value) { SetActiveAfterInclusive(std::forward<ActiveAfterInclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inclusive time range end date. </p>
     */
    inline const Aws::Utils::DateTime& GetActiveBeforeInclusive() const { return m_activeBeforeInclusive; }
    inline bool ActiveBeforeInclusiveHasBeenSet() const { return m_activeBeforeInclusiveHasBeenSet; }
    template<typename ActiveBeforeInclusiveT = Aws::Utils::DateTime>
    void SetActiveBeforeInclusive(ActiveBeforeInclusiveT&& value) { m_activeBeforeInclusiveHasBeenSet = true; m_activeBeforeInclusive = std::forward<ActiveBeforeInclusiveT>(value); }
    template<typename ActiveBeforeInclusiveT = Aws::Utils::DateTime>
    ActiveTimeRange& WithActiveBeforeInclusive(ActiveBeforeInclusiveT&& value) { SetActiveBeforeInclusive(std::forward<ActiveBeforeInclusiveT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_activeAfterInclusive{};
    bool m_activeAfterInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_activeBeforeInclusive{};
    bool m_activeBeforeInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
