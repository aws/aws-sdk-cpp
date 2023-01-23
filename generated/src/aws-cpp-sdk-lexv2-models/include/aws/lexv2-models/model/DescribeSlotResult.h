/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotValueElicitationSetting.h>
#include <aws/lexv2-models/model/ObfuscationSetting.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/MultipleValuesSetting.h>
#include <aws/lexv2-models/model/SubSlotSetting.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DescribeSlotResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeSlotResult();
    AWS_LEXMODELSV2_API DescribeSlotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeSlotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline void SetSlotId(const Aws::String& value) { m_slotId = value; }

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline void SetSlotId(Aws::String&& value) { m_slotId = std::move(value); }

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline void SetSlotId(const char* value) { m_slotId.assign(value); }

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotId(const char* value) { SetSlotId(value); return *this;}


    /**
     * <p>The name specified for the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The name specified for the slot.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotName = value; }

    /**
     * <p>The name specified for the slot.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotName = std::move(value); }

    /**
     * <p>The name specified for the slot.</p>
     */
    inline void SetSlotName(const char* value) { m_slotName.assign(value); }

    /**
     * <p>The name specified for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The name specified for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the slot.</p>
     */
    inline DescribeSlotResult& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>The description specified for the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description specified for the slot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description specified for the slot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description specified for the slot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description specified for the slot.</p>
     */
    inline DescribeSlotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description specified for the slot.</p>
     */
    inline DescribeSlotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description specified for the slot.</p>
     */
    inline DescribeSlotResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline DescribeSlotResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline DescribeSlotResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline DescribeSlotResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }

    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSetting = value; }

    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSetting = std::move(value); }

    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline DescribeSlotResult& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}

    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline DescribeSlotResult& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}


    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }

    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSetting = value; }

    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSetting = std::move(value); }

    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline DescribeSlotResult& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}

    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline DescribeSlotResult& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline DescribeSlotResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline DescribeSlotResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline DescribeSlotResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline DescribeSlotResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline DescribeSlotResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline DescribeSlotResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline DescribeSlotResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline DescribeSlotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline DescribeSlotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline DescribeSlotResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline DescribeSlotResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }

    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSetting = value; }

    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSetting = std::move(value); }

    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline DescribeSlotResult& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}

    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline DescribeSlotResult& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}


    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const{ return m_subSlotSetting; }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline void SetSubSlotSetting(const SubSlotSetting& value) { m_subSlotSetting = value; }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline void SetSubSlotSetting(SubSlotSetting&& value) { m_subSlotSetting = std::move(value); }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline DescribeSlotResult& WithSubSlotSetting(const SubSlotSetting& value) { SetSubSlotSetting(value); return *this;}

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline DescribeSlotResult& WithSubSlotSetting(SubSlotSetting&& value) { SetSubSlotSetting(std::move(value)); return *this;}

  private:

    Aws::String m_slotId;

    Aws::String m_slotName;

    Aws::String m_description;

    Aws::String m_slotTypeId;

    SlotValueElicitationSetting m_valueElicitationSetting;

    ObfuscationSetting m_obfuscationSetting;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_intentId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    MultipleValuesSetting m_multipleValuesSetting;

    SubSlotSetting m_subSlotSetting;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
