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
    AWS_LEXMODELSV2_API RecommendedIntentSummary();
    AWS_LEXMODELSV2_API RecommendedIntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RecommendedIntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a recommended intent associated with the bot
     * recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of a recommended intent associated with the bot recommendation.</p>
     */
    inline RecommendedIntentSummary& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The count of sample utterances of a recommended intent that is associated
     * with a bot recommendation.</p>
     */
    inline int GetSampleUtterancesCount() const{ return m_sampleUtterancesCount; }

    /**
     * <p>The count of sample utterances of a recommended intent that is associated
     * with a bot recommendation.</p>
     */
    inline bool SampleUtterancesCountHasBeenSet() const { return m_sampleUtterancesCountHasBeenSet; }

    /**
     * <p>The count of sample utterances of a recommended intent that is associated
     * with a bot recommendation.</p>
     */
    inline void SetSampleUtterancesCount(int value) { m_sampleUtterancesCountHasBeenSet = true; m_sampleUtterancesCount = value; }

    /**
     * <p>The count of sample utterances of a recommended intent that is associated
     * with a bot recommendation.</p>
     */
    inline RecommendedIntentSummary& WithSampleUtterancesCount(int value) { SetSampleUtterancesCount(value); return *this;}

  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    int m_sampleUtterancesCount;
    bool m_sampleUtterancesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
