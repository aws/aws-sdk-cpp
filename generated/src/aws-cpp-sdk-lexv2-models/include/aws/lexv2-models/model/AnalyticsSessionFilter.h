/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsSessionFilterName.h>
#include <aws/lexv2-models/model/AnalyticsFilterOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains fields describing a condition by which to filter the sessions. The
   * expression may be understood as <code>name</code> <code>operator</code>
   * <code>values</code>. For example:</p> <ul> <li> <p> <code>LocaleId EQ en</code>
   * – The locale is "en".</p> </li> <li> <p> <code>Duration GT 200</code> – The
   * duration is greater than 200 seconds.</p> </li> </ul> <p>The operators that each
   * filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
   * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
   * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
   * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
   * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
   * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
   * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsSessionFilter">AWS
   * API Reference</a></p>
   */
  class AnalyticsSessionFilter
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsSessionFilter();
    AWS_LEXMODELSV2_API AnalyticsSessionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsSessionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline const AnalyticsSessionFilterName& GetName() const{ return m_name; }

    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline void SetName(const AnalyticsSessionFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline void SetName(AnalyticsSessionFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline AnalyticsSessionFilter& WithName(const AnalyticsSessionFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The category by which to filter the sessions. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of the session.</p> </li> <li> <p> <code>conversationEndState</code> –
     * The final state of the session.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentPath</code> – The order of intents taken
     * in a session.</p> </li> </ul>
     */
    inline AnalyticsSessionFilter& WithName(AnalyticsSessionFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline const AnalyticsFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline void SetOperator(const AnalyticsFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline void SetOperator(AnalyticsFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline AnalyticsSessionFilter& WithOperator(const AnalyticsFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Duration</code>
     * – <code>EQ</code>, <code>GT</code>, <code>LT</code>.</p> </li> <li> <p>
     * <code>conversationEndState</code> – <code>EQ</code>, <code>CO</code>.</p> </li>
     * <li> <p> <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentPath</code> – <code>EQ</code>.</p> </li> </ul>
     */
    inline AnalyticsSessionFilter& WithOperator(AnalyticsFilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline AnalyticsSessionFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline AnalyticsSessionFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline AnalyticsSessionFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline AnalyticsSessionFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the values of the category by which to apply the operator
     * to filter the results. You can provide multiple values if the operator is
     * <code>EQ</code> or <code>CO</code>. If you provide multiple values, you filter
     * for results that equal/contain any of the values. For example, if the
     * <code>name</code>, <code>operator</code>, and <code>values</code> fields are
     * <code>Modality</code>, <code>EQ</code>, and <code>[Speech, Text]</code>, the
     * operation filters for results where the modality was either <code>Speech</code>
     * or <code>Text</code>.</p>
     */
    inline AnalyticsSessionFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AnalyticsSessionFilterName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
