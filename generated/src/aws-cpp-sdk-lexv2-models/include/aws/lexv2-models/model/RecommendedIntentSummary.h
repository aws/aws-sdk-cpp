/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>An object that contains a summary of a recommended intent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RecommendedIntentSummary">AWS
   * API Reference</a></p>
   */
  class RecommendedIntentSummary
  {
  public:
    AWS_LEXMODELSV2_API RecommendedIntentSummary() = default;
    AWS_LEXMODELSV2_API RecommendedIntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RecommendedIntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    RecommendedIntentSummary& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    RecommendedIntentSummary& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of sample utterances of a recommended intent that is associated
     * with a bot recommendation.</p>
     */
    inline int GetSampleUtterancesCount() const { return m_sampleUtterancesCount; }
    inline bool SampleUtterancesCountHasBeenSet() const { return m_sampleUtterancesCountHasBeenSet; }
    inline void SetSampleUtterancesCount(int value) { m_sampleUtterancesCountHasBeenSet = true; m_sampleUtterancesCount = value; }
    inline RecommendedIntentSummary& WithSampleUtterancesCount(int value) { SetSampleUtterancesCount(value); return *this;}
    ///@}
  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    int m_sampleUtterancesCount{0};
    bool m_sampleUtterancesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
