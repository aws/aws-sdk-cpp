/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ComparisonOperator.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>Specifies the condition that streams must satisfy to be returned when you
   * list streams (see the <code>ListStreams</code> API). A condition has a
   * comparison operation and a value. Currently, you can specify only the
   * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
   * given prefix. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/StreamNameCondition">AWS
   * API Reference</a></p>
   */
  class StreamNameCondition
  {
  public:
    AWS_KINESISVIDEO_API StreamNameCondition();
    AWS_KINESISVIDEO_API StreamNameCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API StreamNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline StreamNameCondition& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline StreamNameCondition& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>A value to compare.</p>
     */
    inline const Aws::String& GetComparisonValue() const{ return m_comparisonValue; }

    /**
     * <p>A value to compare.</p>
     */
    inline bool ComparisonValueHasBeenSet() const { return m_comparisonValueHasBeenSet; }

    /**
     * <p>A value to compare.</p>
     */
    inline void SetComparisonValue(const Aws::String& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = value; }

    /**
     * <p>A value to compare.</p>
     */
    inline void SetComparisonValue(Aws::String&& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = std::move(value); }

    /**
     * <p>A value to compare.</p>
     */
    inline void SetComparisonValue(const char* value) { m_comparisonValueHasBeenSet = true; m_comparisonValue.assign(value); }

    /**
     * <p>A value to compare.</p>
     */
    inline StreamNameCondition& WithComparisonValue(const Aws::String& value) { SetComparisonValue(value); return *this;}

    /**
     * <p>A value to compare.</p>
     */
    inline StreamNameCondition& WithComparisonValue(Aws::String&& value) { SetComparisonValue(std::move(value)); return *this;}

    /**
     * <p>A value to compare.</p>
     */
    inline StreamNameCondition& WithComparisonValue(const char* value) { SetComparisonValue(value); return *this;}

  private:

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_comparisonValue;
    bool m_comparisonValueHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
