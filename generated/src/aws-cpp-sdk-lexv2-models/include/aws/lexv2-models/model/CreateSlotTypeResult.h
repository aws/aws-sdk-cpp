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
  class CreateSlotTypeResult
  {
  public:
    AWS_LEXMODELSV2_API CreateSlotTypeResult();
    AWS_LEXMODELSV2_API CreateSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type. Use this to identify the
     * slot type in the <code>UpdateSlotType</code> and <code>DeleteSlotType</code>
     * operations.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>The name specified for the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const{ return m_slotTypeName; }

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline void SetSlotTypeName(const Aws::String& value) { m_slotTypeName = value; }

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline void SetSlotTypeName(Aws::String&& value) { m_slotTypeName = std::move(value); }

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline void SetSlotTypeName(const char* value) { m_slotTypeName.assign(value); }

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}


    /**
     * <p>The description specified for the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const{ return m_slotTypeValues; }

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline void SetSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { m_slotTypeValues = value; }

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline void SetSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { m_slotTypeValues = std::move(value); }

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { SetSlotTypeValues(value); return *this;}

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline CreateSlotTypeResult& WithSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { SetSlotTypeValues(std::move(value)); return *this;}

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline CreateSlotTypeResult& AddSlotTypeValues(const SlotTypeValue& value) { m_slotTypeValues.push_back(value); return *this; }

    /**
     * <p>The list of values that the slot type can assume.</p>
     */
    inline CreateSlotTypeResult& AddSlotTypeValues(SlotTypeValue&& value) { m_slotTypeValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The strategy that Amazon Lex uses to select a value from the list of possible
     * values.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const{ return m_valueSelectionSetting; }

    /**
     * <p>The strategy that Amazon Lex uses to select a value from the list of possible
     * values.</p>
     */
    inline void SetValueSelectionSetting(const SlotValueSelectionSetting& value) { m_valueSelectionSetting = value; }

    /**
     * <p>The strategy that Amazon Lex uses to select a value from the list of possible
     * values.</p>
     */
    inline void SetValueSelectionSetting(SlotValueSelectionSetting&& value) { m_valueSelectionSetting = std::move(value); }

    /**
     * <p>The strategy that Amazon Lex uses to select a value from the list of possible
     * values.</p>
     */
    inline CreateSlotTypeResult& WithValueSelectionSetting(const SlotValueSelectionSetting& value) { SetValueSelectionSetting(value); return *this;}

    /**
     * <p>The strategy that Amazon Lex uses to select a value from the list of possible
     * values.</p>
     */
    inline CreateSlotTypeResult& WithValueSelectionSetting(SlotValueSelectionSetting&& value) { SetValueSelectionSetting(std::move(value)); return *this;}


    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignature = value; }

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignature = std::move(value); }

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignature.assign(value); }

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the base slot type specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}


    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline CreateSlotTypeResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The specified language and local specified for the slot type.</p>
     */
    inline CreateSlotTypeResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline CreateSlotTypeResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline CreateSlotTypeResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The type of external information used to create the slot type.</p>
     */
    inline const ExternalSourceSetting& GetExternalSourceSetting() const{ return m_externalSourceSetting; }

    /**
     * <p>The type of external information used to create the slot type.</p>
     */
    inline void SetExternalSourceSetting(const ExternalSourceSetting& value) { m_externalSourceSetting = value; }

    /**
     * <p>The type of external information used to create the slot type.</p>
     */
    inline void SetExternalSourceSetting(ExternalSourceSetting&& value) { m_externalSourceSetting = std::move(value); }

    /**
     * <p>The type of external information used to create the slot type.</p>
     */
    inline CreateSlotTypeResult& WithExternalSourceSetting(const ExternalSourceSetting& value) { SetExternalSourceSetting(value); return *this;}

    /**
     * <p>The type of external information used to create the slot type.</p>
     */
    inline CreateSlotTypeResult& WithExternalSourceSetting(ExternalSourceSetting&& value) { SetExternalSourceSetting(std::move(value)); return *this;}


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
    inline CreateSlotTypeResult& WithCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { SetCompositeSlotTypeSetting(value); return *this;}

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline CreateSlotTypeResult& WithCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { SetCompositeSlotTypeSetting(std::move(value)); return *this;}

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

    ExternalSourceSetting m_externalSourceSetting;

    CompositeSlotTypeSetting m_compositeSlotTypeSetting;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
