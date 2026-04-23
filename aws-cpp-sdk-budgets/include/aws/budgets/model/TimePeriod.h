/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The period of time that is covered by a budget. The period has a start date
   * and an end date. The start date must come before the end date. There are no
   * restrictions on the end date. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/TimePeriod">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API TimePeriod
  {
  public:
    TimePeriod();
    TimePeriod(Aws::Utils::Json::JsonView jsonValue);
    TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline TimePeriod& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The start date for a budget. If you created your budget and didn't specify a
     * start date, AWS defaults to the start of your chosen time period (DAILY,
     * MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created your budget on
     * January 24, 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set
     * your start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. The defaults are the same for the AWS Billing and Cost Management
     * console and the API.</p> <p>You can change your start date with the
     * <code>UpdateBudget</code> operation.</p>
     */
    inline TimePeriod& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline TimePeriod& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The end date for a budget. If you didn't specify an end date, AWS set your
     * end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for the
     * AWS Billing and Cost Management console and the API.</p> <p>After the end date,
     * AWS deletes the budget and all associated notifications and subscribers. You can
     * change your end date with the <code>UpdateBudget</code> operation.</p>
     */
    inline TimePeriod& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
