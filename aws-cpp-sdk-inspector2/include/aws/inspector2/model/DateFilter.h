/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains details on the time range used to filter findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DateFilter">AWS
   * API Reference</a></p>
   */
  class DateFilter
  {
  public:
    AWS_INSPECTOR2_API DateFilter();
    AWS_INSPECTOR2_API DateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline const Aws::Utils::DateTime& GetEndInclusive() const{ return m_endInclusive; }

    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline bool EndInclusiveHasBeenSet() const { return m_endInclusiveHasBeenSet; }

    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline void SetEndInclusive(const Aws::Utils::DateTime& value) { m_endInclusiveHasBeenSet = true; m_endInclusive = value; }

    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline void SetEndInclusive(Aws::Utils::DateTime&& value) { m_endInclusiveHasBeenSet = true; m_endInclusive = std::move(value); }

    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline DateFilter& WithEndInclusive(const Aws::Utils::DateTime& value) { SetEndInclusive(value); return *this;}

    /**
     * <p>A timestamp representing the end of the time period filtered on.</p>
     */
    inline DateFilter& WithEndInclusive(Aws::Utils::DateTime&& value) { SetEndInclusive(std::move(value)); return *this;}


    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline const Aws::Utils::DateTime& GetStartInclusive() const{ return m_startInclusive; }

    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline bool StartInclusiveHasBeenSet() const { return m_startInclusiveHasBeenSet; }

    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline void SetStartInclusive(const Aws::Utils::DateTime& value) { m_startInclusiveHasBeenSet = true; m_startInclusive = value; }

    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline void SetStartInclusive(Aws::Utils::DateTime&& value) { m_startInclusiveHasBeenSet = true; m_startInclusive = std::move(value); }

    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline DateFilter& WithStartInclusive(const Aws::Utils::DateTime& value) { SetStartInclusive(value); return *this;}

    /**
     * <p>A timestamp representing the start of the time period filtered on.</p>
     */
    inline DateFilter& WithStartInclusive(Aws::Utils::DateTime&& value) { SetStartInclusive(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endInclusive;
    bool m_endInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_startInclusive;
    bool m_startInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
