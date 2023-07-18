/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageFilterName.h>
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
   * <p>Contains fields describing a condition by which to filter the intent stages.
   * The expression may be understood as <code>name</code> <code>operator</code>
   * <code>values</code>. For example:</p> <ul> <li> <p> <code>IntentName CO
   * Book</code> – The intent name contains the string "Book."</p> </li> <li> <p>
   * <code>BotVersion EQ 2</code> – The bot version is equal to two.</p> </li> </ul>
   * <p>The operators that each filter supports are listed below:</p> <ul> <li> <p>
   * <code>BotAlias</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>BotVersion</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>LocaleId</code> – <code>EQ</code>.</p> </li> <li> <p>
   * <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p> <code>Channel</code>
   * – <code>EQ</code>.</p> </li> <li> <p> <code>SessionId</code> –
   * <code>EQ</code>.</p> </li> <li> <p> <code>OriginatingRequestId</code> –
   * <code>EQ</code>.</p> </li> <li> <p> <code>IntentName</code> – <code>EQ</code>,
   * <code>CO</code>.</p> </li> <li> <p> <code>IntentStageName</code> –
   * <code>EQ</code>, <code>CO</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentStageFilter">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentStageFilter
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentStageFilter();
    AWS_LEXMODELSV2_API AnalyticsIntentStageFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentStageFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline const AnalyticsIntentStageFilterName& GetName() const{ return m_name; }

    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline void SetName(const AnalyticsIntentStageFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline void SetName(AnalyticsIntentStageFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline AnalyticsIntentStageFilter& WithName(const AnalyticsIntentStageFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The category by which to filter the intent stages. The descriptions for each
     * option are as follows:</p> <ul> <li> <p> <code>BotAlias</code> – The name of the
     * bot alias.</p> </li> <li> <p> <code>BotVersion</code> – The version of the
     * bot.</p> </li> <li> <p> <code>LocaleId</code> – The locale of the bot.</p> </li>
     * <li> <p> <code>Modality</code> – The modality of the session with the bot
     * (audio, DTMF, or text).</p> </li> <li> <p> <code>Channel</code> – The channel
     * that the bot is integrated with.</p> </li> <li> <p> <code>SessionId</code> – The
     * identifier of the session with the bot.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – The identifier of the first request in a
     * session.</p> </li> <li> <p> <code>IntentName</code> – The name of the
     * intent.</p> </li> <li> <p> <code>IntentStageName</code> – The stage in the
     * intent.</p> </li> </ul>
     */
    inline AnalyticsIntentStageFilter& WithName(AnalyticsIntentStageFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
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
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
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
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
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
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
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
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentStageFilter& WithOperator(const AnalyticsFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operation by which to filter the category. The following operations are
     * possible:</p> <ul> <li> <p> <code>CO</code> – Contains</p> </li> <li> <p>
     * <code>EQ</code> – Equals</p> </li> <li> <p> <code>GT</code> – Greater than</p>
     * </li> <li> <p> <code>LT</code> – Less than</p> </li> </ul> <p>The operators that
     * each filter supports are listed below:</p> <ul> <li> <p> <code>BotAlias</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>BotVersion</code> –
     * <code>EQ</code>.</p> </li> <li> <p> <code>LocaleId</code> – <code>EQ</code>.</p>
     * </li> <li> <p> <code>Modality</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>Channel</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>SessionId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>OriginatingRequestId</code> – <code>EQ</code>.</p> </li> <li> <p>
     * <code>IntentName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> <li> <p>
     * <code>IntentStageName</code> – <code>EQ</code>, <code>CO</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentStageFilter& WithOperator(AnalyticsFilterOperator&& value) { SetOperator(std::move(value)); return *this;}


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
    inline AnalyticsIntentStageFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

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
    inline AnalyticsIntentStageFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

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
    inline AnalyticsIntentStageFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

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
    inline AnalyticsIntentStageFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

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
    inline AnalyticsIntentStageFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AnalyticsIntentStageFilterName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
