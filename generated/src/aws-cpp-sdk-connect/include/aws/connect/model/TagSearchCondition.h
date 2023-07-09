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
    AWS_CONNECT_API TagSearchCondition();
    AWS_CONNECT_API TagSearchCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TagSearchCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The tag key used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}

    /**
     * <p>The tag value used in the tag search condition.</p>
     */
    inline TagSearchCondition& WithTagValue(const char* value) { SetTagValue(value); return *this;}


    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline const StringComparisonType& GetTagKeyComparisonType() const{ return m_tagKeyComparisonType; }

    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline bool TagKeyComparisonTypeHasBeenSet() const { return m_tagKeyComparisonTypeHasBeenSet; }

    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline void SetTagKeyComparisonType(const StringComparisonType& value) { m_tagKeyComparisonTypeHasBeenSet = true; m_tagKeyComparisonType = value; }

    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline void SetTagKeyComparisonType(StringComparisonType&& value) { m_tagKeyComparisonTypeHasBeenSet = true; m_tagKeyComparisonType = std::move(value); }

    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline TagSearchCondition& WithTagKeyComparisonType(const StringComparisonType& value) { SetTagKeyComparisonType(value); return *this;}

    /**
     * <p>The type of comparison to be made when evaluating the tag key in tag search
     * condition.</p>
     */
    inline TagSearchCondition& WithTagKeyComparisonType(StringComparisonType&& value) { SetTagKeyComparisonType(std::move(value)); return *this;}


    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline const StringComparisonType& GetTagValueComparisonType() const{ return m_tagValueComparisonType; }

    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline bool TagValueComparisonTypeHasBeenSet() const { return m_tagValueComparisonTypeHasBeenSet; }

    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline void SetTagValueComparisonType(const StringComparisonType& value) { m_tagValueComparisonTypeHasBeenSet = true; m_tagValueComparisonType = value; }

    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline void SetTagValueComparisonType(StringComparisonType&& value) { m_tagValueComparisonTypeHasBeenSet = true; m_tagValueComparisonType = std::move(value); }

    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline TagSearchCondition& WithTagValueComparisonType(const StringComparisonType& value) { SetTagValueComparisonType(value); return *this;}

    /**
     * <p>The type of comparison to be made when evaluating the tag value in tag search
     * condition.</p>
     */
    inline TagSearchCondition& WithTagValueComparisonType(StringComparisonType&& value) { SetTagValueComparisonType(std::move(value)); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    StringComparisonType m_tagKeyComparisonType;
    bool m_tagKeyComparisonTypeHasBeenSet = false;

    StringComparisonType m_tagValueComparisonType;
    bool m_tagValueComparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
