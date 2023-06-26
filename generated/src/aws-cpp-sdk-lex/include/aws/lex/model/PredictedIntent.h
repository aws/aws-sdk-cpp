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
    AWS_LEXRUNTIMESERVICE_API PredictedIntent();
    AWS_LEXRUNTIMESERVICE_API PredictedIntent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API PredictedIntent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline PredictedIntent& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline PredictedIntent& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent that Amazon Lex suggests satisfies the user's
     * intent.</p>
     */
    inline PredictedIntent& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline const IntentConfidence& GetNluIntentConfidence() const{ return m_nluIntentConfidence; }

    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline bool NluIntentConfidenceHasBeenSet() const { return m_nluIntentConfidenceHasBeenSet; }

    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline void SetNluIntentConfidence(const IntentConfidence& value) { m_nluIntentConfidenceHasBeenSet = true; m_nluIntentConfidence = value; }

    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline void SetNluIntentConfidence(IntentConfidence&& value) { m_nluIntentConfidenceHasBeenSet = true; m_nluIntentConfidence = std::move(value); }

    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline PredictedIntent& WithNluIntentConfidence(const IntentConfidence& value) { SetNluIntentConfidence(value); return *this;}

    /**
     * <p>Indicates how confident Amazon Lex is that an intent satisfies the user's
     * intent.</p>
     */
    inline PredictedIntent& WithNluIntentConfidence(IntentConfidence&& value) { SetNluIntentConfidence(std::move(value)); return *this;}


    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const{ return m_slots; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, Aws::String>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline void SetSlots(Aws::Map<Aws::String, Aws::String>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(const Aws::String& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(Aws::String&& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(const Aws::String& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(Aws::String&& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(const char* key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(Aws::String&& key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>The slot and slot values associated with the predicted intent.</p>
     */
    inline PredictedIntent& AddSlots(const char* key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

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
