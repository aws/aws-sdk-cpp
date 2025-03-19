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
    AWS_MACIE2_API TagScopeTerm() = default;
    AWS_MACIE2_API TagScopeTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API TagScopeTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) or NE (not
     * equals).</p>
     */
    inline JobComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(JobComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline TagScopeTerm& WithComparator(JobComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object property to use in the condition. The only valid value is TAG.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    TagScopeTerm& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys or tag key and value pairs to use in the condition. To specify
     * only tag keys in a condition, specify the keys in this array and set the value
     * for each associated tag value to an empty string.</p>
     */
    inline const Aws::Vector<TagValuePair>& GetTagValues() const { return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    template<typename TagValuesT = Aws::Vector<TagValuePair>>
    void SetTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::forward<TagValuesT>(value); }
    template<typename TagValuesT = Aws::Vector<TagValuePair>>
    TagScopeTerm& WithTagValues(TagValuesT&& value) { SetTagValues(std::forward<TagValuesT>(value)); return *this;}
    template<typename TagValuesT = TagValuePair>
    TagScopeTerm& AddTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues.emplace_back(std::forward<TagValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of object to apply the condition to.</p>
     */
    inline TagTarget GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(TagTarget value) { m_targetHasBeenSet = true; m_target = value; }
    inline TagScopeTerm& WithTarget(TagTarget value) { SetTarget(value); return *this;}
    ///@}
  private:

    JobComparator m_comparator{JobComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<TagValuePair> m_tagValues;
    bool m_tagValuesHasBeenSet = false;

    TagTarget m_target{TagTarget::NOT_SET};
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
