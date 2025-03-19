/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/IntentConfidence.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>An intent that Amazon Lex suggests satisfies the user's intent. Includes the
   * name of the intent, the confidence that Amazon Lex has that the user's intent is
   * satisfied, and the slots defined for the intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PredictedIntent">AWS
   * API Reference</a></p>
   */
  class PredictedIntent
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PredictedIntent() = default;
    AWS_LEXRUNTIMESERVICE_API PredictedIntent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API PredictedIntent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    PredictedIntent& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline const IntentConfidence& GetNluIntentConfidence() const { return m_nluIntentConfidence; }
    inline bool NluIntentConfidenceHasBeenSet() const { return m_nluIntentConfidenceHasBeenSet; }
    template<typename NluIntentConfidenceT = IntentConfidence>
    void SetNluIntentConfidence(NluIntentConfidenceT&& value) { m_nluIntentConfidenceHasBeenSet = true; m_nluIntentConfidence = std::forward<NluIntentConfidenceT>(value); }
    template<typename NluIntentConfidenceT = IntentConfidence>
    PredictedIntent& WithNluIntentConfidence(NluIntentConfidenceT&& value) { SetNluIntentConfidence(std::forward<NluIntentConfidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    PredictedIntent& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = Aws::String>
    PredictedIntent& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    IntentConfidence m_nluIntentConfidence;
    bool m_nluIntentConfidenceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
