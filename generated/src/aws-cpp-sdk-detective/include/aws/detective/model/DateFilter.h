/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Contains details on the time range used to filter data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DateFilter">AWS
   * API Reference</a></p>
   */
  class DateFilter
  {
  public:
    AWS_DETECTIVE_API DateFilter() = default;
    AWS_DETECTIVE_API DateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API DateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp representing the start of the time period from when data is
     * filtered, including the start date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartInclusive() const { return m_startInclusive; }
    inline bool StartInclusiveHasBeenSet() const { return m_startInclusiveHasBeenSet; }
    template<typename StartInclusiveT = Aws::Utils::DateTime>
    void SetStartInclusive(StartInclusiveT&& value) { m_startInclusiveHasBeenSet = true; m_startInclusive = std::forward<StartInclusiveT>(value); }
    template<typename StartInclusiveT = Aws::Utils::DateTime>
    DateFilter& WithStartInclusive(StartInclusiveT&& value) { SetStartInclusive(std::forward<StartInclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp representing the end date of the time period until when data is
     * filtered, including the end date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndInclusive() const { return m_endInclusive; }
    inline bool EndInclusiveHasBeenSet() const { return m_endInclusiveHasBeenSet; }
    template<typename EndInclusiveT = Aws::Utils::DateTime>
    void SetEndInclusive(EndInclusiveT&& value) { m_endInclusiveHasBeenSet = true; m_endInclusive = std::forward<EndInclusiveT>(value); }
    template<typename EndInclusiveT = Aws::Utils::DateTime>
    DateFilter& WithEndInclusive(EndInclusiveT&& value) { SetEndInclusive(std::forward<EndInclusiveT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startInclusive{};
    bool m_startInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_endInclusive{};
    bool m_endInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
