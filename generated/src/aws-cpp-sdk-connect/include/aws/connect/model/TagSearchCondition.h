/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/StringComparisonType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The search criteria to be used to return tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagSearchCondition">AWS
   * API Reference</a></p>
   */
  class TagSearchCondition
  {
  public:
    AWS_CONNECT_API TagSearchCondition() = default;
    AWS_CONNECT_API TagSearchCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TagSearchCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    TagSearchCondition& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    TagSearchCondition& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline StringComparisonType GetTagKeyComparisonType() const { return m_tagKeyComparisonType; }
    inline bool TagKeyComparisonTypeHasBeenSet() const { return m_tagKeyComparisonTypeHasBeenSet; }
    inline void SetTagKeyComparisonType(StringComparisonType value) { m_tagKeyComparisonTypeHasBeenSet = true; m_tagKeyComparisonType = value; }
    inline TagSearchCondition& WithTagKeyComparisonType(StringComparisonType value) { SetTagKeyComparisonType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline StringComparisonType GetTagValueComparisonType() const { return m_tagValueComparisonType; }
    inline bool TagValueComparisonTypeHasBeenSet() const { return m_tagValueComparisonTypeHasBeenSet; }
    inline void SetTagValueComparisonType(StringComparisonType value) { m_tagValueComparisonTypeHasBeenSet = true; m_tagValueComparisonType = value; }
    inline TagSearchCondition& WithTagValueComparisonType(StringComparisonType value) { SetTagValueComparisonType(value); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    StringComparisonType m_tagKeyComparisonType{StringComparisonType::NOT_SET};
    bool m_tagKeyComparisonTypeHasBeenSet = false;

    StringComparisonType m_tagValueComparisonType{StringComparisonType::NOT_SET};
    bool m_tagValueComparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
