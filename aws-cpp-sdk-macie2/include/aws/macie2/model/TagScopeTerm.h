/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobComparator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/TagTarget.h>
#include <aws/macie2/model/TagValuePair.h>
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
   * <p>Specifies a tag-based condition that determines whether an S3 object is
   * included or excluded from a classification job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagScopeTerm">AWS
   * API Reference</a></p>
   */
  class TagScopeTerm
  {
  public:
    AWS_MACIE2_API TagScopeTerm();
    AWS_MACIE2_API TagScopeTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API TagScopeTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline const JobComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline void SetComparator(const JobComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline void SetComparator(JobComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline TagScopeTerm& WithComparator(const JobComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline TagScopeTerm& WithComparator(JobComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline TagScopeTerm& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline TagScopeTerm& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline TagScopeTerm& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline const Aws::Vector<TagValuePair>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline void SetTagValues(const Aws::Vector<TagValuePair>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline void SetTagValues(Aws::Vector<TagValuePair>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline TagScopeTerm& WithTagValues(const Aws::Vector<TagValuePair>& value) { SetTagValues(value); return *this;}

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline TagScopeTerm& WithTagValues(Aws::Vector<TagValuePair>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline TagScopeTerm& AddTagValues(const TagValuePair& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline TagScopeTerm& AddTagValues(TagValuePair&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline const TagTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline void SetTarget(const TagTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline void SetTarget(TagTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline TagScopeTerm& WithTarget(const TagTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline TagScopeTerm& WithTarget(TagTarget&& value) { SetTarget(std::move(value)); return *this;}

  private:

    JobComparator m_comparator;
    bool m_comparatorHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<TagValuePair> m_tagValues;
    bool m_tagValuesHasBeenSet = false;

    TagTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
