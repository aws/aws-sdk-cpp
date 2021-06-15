/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/UsageStatisticsFilterComparator.h>
#include <aws/macie2/model/UsageStatisticsFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a condition for filtering the results of a query for quota and
   * usage data for one or more Amazon Macie accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageStatisticsFilter">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API UsageStatisticsFilter
  {
  public:
    UsageStatisticsFilter();
    UsageStatisticsFilter(Aws::Utils::Json::JsonView jsonValue);
    UsageStatisticsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline const UsageStatisticsFilterComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline void SetComparator(const UsageStatisticsFilterComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline void SetComparator(UsageStatisticsFilterComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline UsageStatisticsFilter& WithComparator(const UsageStatisticsFilterComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition. If the value for the key property is
     * accountId, this value must be CONTAINS. If the value for the key property is any
     * other supported field, this value can be EQ, GT, GTE, LT, LTE, or NE.</p>
     */
    inline UsageStatisticsFilter& WithComparator(UsageStatisticsFilterComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The field to use in the condition.</p>
     */
    inline const UsageStatisticsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The field to use in the condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The field to use in the condition.</p>
     */
    inline void SetKey(const UsageStatisticsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The field to use in the condition.</p>
     */
    inline void SetKey(UsageStatisticsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The field to use in the condition.</p>
     */
    inline UsageStatisticsFilter& WithKey(const UsageStatisticsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The field to use in the condition.</p>
     */
    inline UsageStatisticsFilter& WithKey(UsageStatisticsFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline UsageStatisticsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline UsageStatisticsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline UsageStatisticsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline UsageStatisticsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists values to use in the condition, based on the value for
     * the field specified by the key property. If the value for the key property is
     * accountId, this array can specify multiple values. Otherwise, this array can
     * specify only one value.</p> <p>Valid values for each supported field are:</p>
     * <ul><li><p>accountId - The unique identifier for an AWS account.</p></li></ul>
     * <ul><li><p>freeTrialStartDate - The date and time, in UTC and extended ISO 8601
     * format, when the free trial started for an account.</p></li></ul>
     * <ul><li><p>serviceLimit - A Boolean (true or false) value that indicates whether
     * an account has reached its monthly quota.</p></li></ul> <ul><li><p>total - A
     * string that represents the current estimated cost for an account.</p></li></ul>
     */
    inline UsageStatisticsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    UsageStatisticsFilterComparator m_comparator;
    bool m_comparatorHasBeenSet;

    UsageStatisticsFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
