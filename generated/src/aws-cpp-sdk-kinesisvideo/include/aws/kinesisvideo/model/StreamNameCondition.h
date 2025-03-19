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
    AWS_KINESISVIDEO_API StreamNameCondition() = default;
    AWS_KINESISVIDEO_API StreamNameCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API StreamNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A comparison operator. Currently, you can specify only the
     * <code>BEGINS_WITH</code> operator, which finds streams whose names start with a
     * given prefix.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline StreamNameCondition& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value to compare.</p>
     */
    inline const Aws::String& GetComparisonValue() const { return m_comparisonValue; }
    inline bool ComparisonValueHasBeenSet() const { return m_comparisonValueHasBeenSet; }
    template<typename ComparisonValueT = Aws::String>
    void SetComparisonValue(ComparisonValueT&& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = std::forward<ComparisonValueT>(value); }
    template<typename ComparisonValueT = Aws::String>
    StreamNameCondition& WithComparisonValue(ComparisonValueT&& value) { SetComparisonValue(std::forward<ComparisonValueT>(value)); return *this;}
    ///@}
  private:

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_comparisonValue;
    bool m_comparisonValueHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
