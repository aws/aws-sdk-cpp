/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotValueSelectionSetting.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/ExternalSourceSetting.h>
#include <aws/lexv2-models/model/CompositeSlotTypeSetting.h>
#include <aws/lexv2-models/model/SlotTypeValue.h>
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
  class UpdateSlotTypeResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateSlotTypeResult();
    AWS_LEXMODELSV2_API UpdateSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>The updated name of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const{ return m_slotTypeName; }

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline void SetSlotTypeName(const Aws::String& value) { m_slotTypeName = value; }

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline void SetSlotTypeName(Aws::String&& value) { m_slotTypeName = std::move(value); }

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline void SetSlotTypeName(const char* value) { m_slotTypeName.assign(value); }

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}


    /**
     * <p>The updated description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const{ return m_slotTypeValues; }

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline void SetSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { m_slotTypeValues = value; }

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline void SetSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { m_slotTypeValues = std::move(value); }

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { SetSlotTypeValues(value); return *this;}

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline UpdateSlotTypeResult& WithSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { SetSlotTypeValues(std::move(value)); return *this;}

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline UpdateSlotTypeResult& AddSlotTypeValues(const SlotTypeValue& value) { m_slotTypeValues.push_back(value); return *this; }

    /**
     * <p>The updated values that the slot type provides.</p>
     */
    inline UpdateSlotTypeResult& AddSlotTypeValues(SlotTypeValue&& value) { m_slotTypeValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The updated strategy that Amazon Lex uses to determine which value to select
     * from the slot type.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const{ return m_valueSelectionSetting; }

    /**
     * <p>The updated strategy that Amazon Lex uses to determine which value to select
     * from the slot type.</p>
     */
    inline void SetValueSelectionSetting(const SlotValueSelectionSetting& value) { m_valueSelectionSetting = value; }

    /**
     * <p>The updated strategy that Amazon Lex uses to determine which value to select
     * from the slot type.</p>
     */
    inline void SetValueSelectionSetting(SlotValueSelectionSetting&& value) { m_valueSelectionSetting = std::move(value); }

    /**
     * <p>The updated strategy that Amazon Lex uses to determine which value to select
     * from the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithValueSelectionSetting(const SlotValueSelectionSetting& value) { SetValueSelectionSetting(value); return *this;}

    /**
     * <p>The updated strategy that Amazon Lex uses to determine which value to select
     * from the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithValueSelectionSetting(SlotValueSelectionSetting&& value) { SetValueSelectionSetting(std::move(value)); return *this;}


    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignature = value; }

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignature = std::move(value); }

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignature.assign(value); }

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline UpdateSlotTypeResult& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline UpdateSlotTypeResult& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}

    /**
     * <p>The updated signature of the built-in slot type that is the parent of this
     * slot type.</p>
     */
    inline UpdateSlotTypeResult& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}


    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the slot type. This is always
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale of the updated slot type.</p>
     */
    inline UpdateSlotTypeResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The timestamp of the date and time that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The timestamp of the date and time that the slot type was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The timestamp of the date and time that the slot type was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The timestamp of the date and time that the slot type was created.</p>
     */
    inline UpdateSlotTypeResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The timestamp of the date and time that the slot type was created.</p>
     */
    inline UpdateSlotTypeResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline UpdateSlotTypeResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline UpdateSlotTypeResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    
    inline const ExternalSourceSetting& GetExternalSourceSetting() const{ return m_externalSourceSetting; }

    
    inline void SetExternalSourceSetting(const ExternalSourceSetting& value) { m_externalSourceSetting = value; }

    
    inline void SetExternalSourceSetting(ExternalSourceSetting&& value) { m_externalSourceSetting = std::move(value); }

    
    inline UpdateSlotTypeResult& WithExternalSourceSetting(const ExternalSourceSetting& value) { SetExternalSourceSetting(value); return *this;}

    
    inline UpdateSlotTypeResult& WithExternalSourceSetting(ExternalSourceSetting&& value) { SetExternalSourceSetting(std::move(value)); return *this;}


    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline const CompositeSlotTypeSetting& GetCompositeSlotTypeSetting() const{ return m_compositeSlotTypeSetting; }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline void SetCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { m_compositeSlotTypeSetting = value; }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline void SetCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { m_compositeSlotTypeSetting = std::move(value); }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline UpdateSlotTypeResult& WithCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { SetCompositeSlotTypeSetting(value); return *this;}

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline UpdateSlotTypeResult& WithCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { SetCompositeSlotTypeSetting(std::move(value)); return *this;}

  private:

    Aws::String m_slotTypeId;

    Aws::String m_slotTypeName;

    Aws::String m_description;

    Aws::Vector<SlotTypeValue> m_slotTypeValues;

    SlotValueSelectionSetting m_valueSelectionSetting;

    Aws::String m_parentSlotTypeSignature;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    ExternalSourceSetting m_externalSourceSetting;

    CompositeSlotTypeSetting m_compositeSlotTypeSetting;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
