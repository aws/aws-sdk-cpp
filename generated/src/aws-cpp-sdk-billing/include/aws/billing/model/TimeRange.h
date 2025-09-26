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
   * <p> Specifies a time range with inclusive begin and end dates. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/TimeRange">AWS
   * API Reference</a></p>
   */
  class TimeRange
  {
  public:
    AWS_BILLING_API TimeRange() = default;
    AWS_BILLING_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The inclusive start date of the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetBeginDateInclusive() const { return m_beginDateInclusive; }
    inline bool BeginDateInclusiveHasBeenSet() const { return m_beginDateInclusiveHasBeenSet; }
    template<typename BeginDateInclusiveT = Aws::Utils::DateTime>
    void SetBeginDateInclusive(BeginDateInclusiveT&& value) { m_beginDateInclusiveHasBeenSet = true; m_beginDateInclusive = std::forward<BeginDateInclusiveT>(value); }
    template<typename BeginDateInclusiveT = Aws::Utils::DateTime>
    TimeRange& WithBeginDateInclusive(BeginDateInclusiveT&& value) { SetBeginDateInclusive(std::forward<BeginDateInclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inclusive end date of the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetEndDateInclusive() const { return m_endDateInclusive; }
    inline bool EndDateInclusiveHasBeenSet() const { return m_endDateInclusiveHasBeenSet; }
    template<typename EndDateInclusiveT = Aws::Utils::DateTime>
    void SetEndDateInclusive(EndDateInclusiveT&& value) { m_endDateInclusiveHasBeenSet = true; m_endDateInclusive = std::forward<EndDateInclusiveT>(value); }
    template<typename EndDateInclusiveT = Aws::Utils::DateTime>
    TimeRange& WithEndDateInclusive(EndDateInclusiveT&& value) { SetEndDateInclusive(std::forward<EndDateInclusiveT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_beginDateInclusive{};
    bool m_beginDateInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_endDateInclusive{};
    bool m_endDateInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
