/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The time period of the request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DateInterval">AWS API
   * Reference</a></p>
   */
  class DateInterval
  {
  public:
    AWS_COSTEXPLORER_API DateInterval();
    AWS_COSTEXPLORER_API DateInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DateInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline DateInterval& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline DateInterval& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * <p>The beginning of the time period. The start date is inclusive. For example,
     * if <code>start</code> is <code>2017-01-01</code>, Amazon Web Services retrieves
     * cost and usage data starting at <code>2017-01-01</code> up to the end date. The
     * start date must be equal to or no later than the current date to avoid a
     * validation error.</p>
     */
    inline DateInterval& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline DateInterval& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline DateInterval& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>The end of the time period. The end date is exclusive. For example, if
     * <code>end</code> is <code>2017-05-01</code>, Amazon Web Services retrieves cost
     * and usage data from the start date up to, but not including,
     * <code>2017-05-01</code>.</p>
     */
    inline DateInterval& WithEnd(const char* value) { SetEnd(value); return *this;}

  private:

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
