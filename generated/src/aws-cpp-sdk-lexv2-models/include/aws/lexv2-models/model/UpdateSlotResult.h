﻿/**
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
  class UpdateSlotResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateSlotResult();
    AWS_LEXMODELSV2_API UpdateSlotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateSlotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the slot that was updated.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline void SetSlotId(const Aws::String& value) { m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotId.assign(value); }
    inline UpdateSlotResult& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline UpdateSlotResult& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline void SetSlotName(const Aws::String& value) { m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotName.assign(value); }
    inline UpdateSlotResult& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline UpdateSlotResult& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline UpdateSlotResult& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateSlotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSlotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSlotResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated identifier of the slot type that provides values for the
     * slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }
    inline UpdateSlotResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}
    inline UpdateSlotResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated prompts that Amazon Lex sends to the user to elicit a response
     * that provides a value for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSetting = value; }
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSetting = std::move(value); }
    inline UpdateSlotResult& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}
    inline UpdateSlotResult& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated setting that determines whether the slot value is obfuscated in
     * the Amazon CloudWatch logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSetting = value; }
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSetting = std::move(value); }
    inline UpdateSlotResult& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}
    inline UpdateSlotResult& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot that contains the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline UpdateSlotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateSlotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the slot. Will always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline UpdateSlotResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UpdateSlotResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UpdateSlotResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale that contains the slot.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline UpdateSlotResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UpdateSlotResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intent that contains the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }
    inline UpdateSlotResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline UpdateSlotResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the date and time that the slot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline UpdateSlotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline UpdateSlotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the date and time that the slot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline UpdateSlotResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateSlotResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the slot accepts multiple values in one response.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSetting = value; }
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSetting = std::move(value); }
    inline UpdateSlotResult& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}
    inline UpdateSlotResult& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const{ return m_subSlotSetting; }
    inline void SetSubSlotSetting(const SubSlotSetting& value) { m_subSlotSetting = value; }
    inline void SetSubSlotSetting(SubSlotSetting&& value) { m_subSlotSetting = std::move(value); }
    inline UpdateSlotResult& WithSubSlotSetting(const SubSlotSetting& value) { SetSubSlotSetting(value); return *this;}
    inline UpdateSlotResult& WithSubSlotSetting(SubSlotSetting&& value) { SetSubSlotSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSlotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSlotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSlotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
