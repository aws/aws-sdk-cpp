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
    AWS_BILLING_API ActiveTimeRange();
    AWS_BILLING_API ActiveTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API ActiveTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive time range start date.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveAfterInclusive() const{ return m_activeAfterInclusive; }
    inline bool ActiveAfterInclusiveHasBeenSet() const { return m_activeAfterInclusiveHasBeenSet; }
    inline void SetActiveAfterInclusive(const Aws::Utils::DateTime& value) { m_activeAfterInclusiveHasBeenSet = true; m_activeAfterInclusive = value; }
    inline void SetActiveAfterInclusive(Aws::Utils::DateTime&& value) { m_activeAfterInclusiveHasBeenSet = true; m_activeAfterInclusive = std::move(value); }
    inline ActiveTimeRange& WithActiveAfterInclusive(const Aws::Utils::DateTime& value) { SetActiveAfterInclusive(value); return *this;}
    inline ActiveTimeRange& WithActiveAfterInclusive(Aws::Utils::DateTime&& value) { SetActiveAfterInclusive(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inclusive time range end date. </p>
     */
    inline const Aws::Utils::DateTime& GetActiveBeforeInclusive() const{ return m_activeBeforeInclusive; }
    inline bool ActiveBeforeInclusiveHasBeenSet() const { return m_activeBeforeInclusiveHasBeenSet; }
    inline void SetActiveBeforeInclusive(const Aws::Utils::DateTime& value) { m_activeBeforeInclusiveHasBeenSet = true; m_activeBeforeInclusive = value; }
    inline void SetActiveBeforeInclusive(Aws::Utils::DateTime&& value) { m_activeBeforeInclusiveHasBeenSet = true; m_activeBeforeInclusive = std::move(value); }
    inline ActiveTimeRange& WithActiveBeforeInclusive(const Aws::Utils::DateTime& value) { SetActiveBeforeInclusive(value); return *this;}
    inline ActiveTimeRange& WithActiveBeforeInclusive(Aws::Utils::DateTime&& value) { SetActiveBeforeInclusive(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_activeAfterInclusive;
    bool m_activeAfterInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_activeBeforeInclusive;
    bool m_activeBeforeInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
