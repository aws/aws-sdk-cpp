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
   * <p>An optional input parameter for the <code>ListSignalingChannels</code> API.
   * When this parameter is specified while invoking
   * <code>ListSignalingChannels</code>, the API returns only the channels that
   * satisfy a condition specified in
   * <code>ChannelNameCondition</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ChannelNameCondition">AWS
   * API Reference</a></p>
   */
  class ChannelNameCondition
  {
  public:
    AWS_KINESISVIDEO_API ChannelNameCondition() = default;
    AWS_KINESISVIDEO_API ChannelNameCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ChannelNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A comparison operator. Currently, you can only specify the
     * <code>BEGINS_WITH</code> operator, which finds signaling channels whose names
     * begin with a given prefix.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline ChannelNameCondition& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
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
    ChannelNameCondition& WithComparisonValue(ComparisonValueT&& value) { SetComparisonValue(std::forward<ComparisonValueT>(value)); return *this;}
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
