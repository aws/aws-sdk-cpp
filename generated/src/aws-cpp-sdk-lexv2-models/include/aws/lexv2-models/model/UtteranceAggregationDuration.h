﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/RelativeAggregationDuration.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides parameters for setting the time window and duration for aggregating
   * utterance data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceAggregationDuration">AWS
   * API Reference</a></p>
   */
  class UtteranceAggregationDuration
  {
  public:
    AWS_LEXMODELSV2_API UtteranceAggregationDuration() = default;
    AWS_LEXMODELSV2_API UtteranceAggregationDuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceAggregationDuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired time window for aggregating utterances. </p>
     */
    inline const RelativeAggregationDuration& GetRelativeAggregationDuration() const { return m_relativeAggregationDuration; }
    inline bool RelativeAggregationDurationHasBeenSet() const { return m_relativeAggregationDurationHasBeenSet; }
    template<typename RelativeAggregationDurationT = RelativeAggregationDuration>
    void SetRelativeAggregationDuration(RelativeAggregationDurationT&& value) { m_relativeAggregationDurationHasBeenSet = true; m_relativeAggregationDuration = std::forward<RelativeAggregationDurationT>(value); }
    template<typename RelativeAggregationDurationT = RelativeAggregationDuration>
    UtteranceAggregationDuration& WithRelativeAggregationDuration(RelativeAggregationDurationT&& value) { SetRelativeAggregationDuration(std::forward<RelativeAggregationDurationT>(value)); return *this;}
    ///@}
  private:

    RelativeAggregationDuration m_relativeAggregationDuration;
    bool m_relativeAggregationDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
