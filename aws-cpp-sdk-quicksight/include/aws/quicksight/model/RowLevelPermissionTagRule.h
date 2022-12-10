/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A set of rules associated with a tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionTagRule">AWS
   * API Reference</a></p>
   */
  class RowLevelPermissionTagRule
  {
  public:
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule();
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique key for a tag.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The unique key for a tag.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The unique key for a tag.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The unique key for a tag.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The unique key for a tag.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The unique key for a tag.</p>
     */
    inline RowLevelPermissionTagRule& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The unique key for a tag.</p>
     */
    inline RowLevelPermissionTagRule& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The unique key for a tag.</p>
     */
    inline RowLevelPermissionTagRule& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline RowLevelPermissionTagRule& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline RowLevelPermissionTagRule& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline RowLevelPermissionTagRule& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline const Aws::String& GetTagMultiValueDelimiter() const{ return m_tagMultiValueDelimiter; }

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline bool TagMultiValueDelimiterHasBeenSet() const { return m_tagMultiValueDelimiterHasBeenSet; }

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline void SetTagMultiValueDelimiter(const Aws::String& value) { m_tagMultiValueDelimiterHasBeenSet = true; m_tagMultiValueDelimiter = value; }

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline void SetTagMultiValueDelimiter(Aws::String&& value) { m_tagMultiValueDelimiterHasBeenSet = true; m_tagMultiValueDelimiter = std::move(value); }

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline void SetTagMultiValueDelimiter(const char* value) { m_tagMultiValueDelimiterHasBeenSet = true; m_tagMultiValueDelimiter.assign(value); }

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline RowLevelPermissionTagRule& WithTagMultiValueDelimiter(const Aws::String& value) { SetTagMultiValueDelimiter(value); return *this;}

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline RowLevelPermissionTagRule& WithTagMultiValueDelimiter(Aws::String&& value) { SetTagMultiValueDelimiter(std::move(value)); return *this;}

    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline RowLevelPermissionTagRule& WithTagMultiValueDelimiter(const char* value) { SetTagMultiValueDelimiter(value); return *this;}


    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline const Aws::String& GetMatchAllValue() const{ return m_matchAllValue; }

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline bool MatchAllValueHasBeenSet() const { return m_matchAllValueHasBeenSet; }

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline void SetMatchAllValue(const Aws::String& value) { m_matchAllValueHasBeenSet = true; m_matchAllValue = value; }

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline void SetMatchAllValue(Aws::String&& value) { m_matchAllValueHasBeenSet = true; m_matchAllValue = std::move(value); }

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline void SetMatchAllValue(const char* value) { m_matchAllValueHasBeenSet = true; m_matchAllValue.assign(value); }

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline RowLevelPermissionTagRule& WithMatchAllValue(const Aws::String& value) { SetMatchAllValue(value); return *this;}

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline RowLevelPermissionTagRule& WithMatchAllValue(Aws::String&& value) { SetMatchAllValue(std::move(value)); return *this;}

    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline RowLevelPermissionTagRule& WithMatchAllValue(const char* value) { SetMatchAllValue(value); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_tagMultiValueDelimiter;
    bool m_tagMultiValueDelimiterHasBeenSet = false;

    Aws::String m_matchAllValue;
    bool m_matchAllValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
