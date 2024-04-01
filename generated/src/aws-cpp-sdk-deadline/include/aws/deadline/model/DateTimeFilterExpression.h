/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/ComparisonOperator.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The time stamp in date-time format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DateTimeFilterExpression">AWS
   * API Reference</a></p>
   */
  class DateTimeFilterExpression
  {
  public:
    AWS_DEADLINE_API DateTimeFilterExpression();
    AWS_DEADLINE_API DateTimeFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API DateTimeFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }

    /**
     * <p>The date and time.</p>
     */
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }

    /**
     * <p>The date and time.</p>
     */
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTimeHasBeenSet = true; m_dateTime = value; }

    /**
     * <p>The date and time.</p>
     */
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::move(value); }

    /**
     * <p>The date and time.</p>
     */
    inline DateTimeFilterExpression& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}

    /**
     * <p>The date and time.</p>
     */
    inline DateTimeFilterExpression& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}


    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline DateTimeFilterExpression& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline DateTimeFilterExpression& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline DateTimeFilterExpression& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline const ComparisonOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline void SetOperator(const ComparisonOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline void SetOperator(ComparisonOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline DateTimeFilterExpression& WithOperator(const ComparisonOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline DateTimeFilterExpression& WithOperator(ComparisonOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_dateTime;
    bool m_dateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ComparisonOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
