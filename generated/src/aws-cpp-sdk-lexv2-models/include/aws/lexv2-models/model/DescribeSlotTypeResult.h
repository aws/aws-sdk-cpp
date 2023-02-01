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
  class DescribeSlotTypeResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeSlotTypeResult();
    AWS_LEXMODELSV2_API DescribeSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


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
    inline DescribeSlotTypeResult& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}


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
    inline DescribeSlotTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const{ return m_slotTypeValues; }

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline void SetSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { m_slotTypeValues = value; }

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline void SetSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { m_slotTypeValues = std::move(value); }

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { SetSlotTypeValues(value); return *this;}

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline DescribeSlotTypeResult& WithSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { SetSlotTypeValues(std::move(value)); return *this;}

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline DescribeSlotTypeResult& AddSlotTypeValues(const SlotTypeValue& value) { m_slotTypeValues.push_back(value); return *this; }

    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline DescribeSlotTypeResult& AddSlotTypeValues(SlotTypeValue&& value) { m_slotTypeValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const{ return m_valueSelectionSetting; }

    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline void SetValueSelectionSetting(const SlotValueSelectionSetting& value) { m_valueSelectionSetting = value; }

    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline void SetValueSelectionSetting(SlotValueSelectionSetting&& value) { m_valueSelectionSetting = std::move(value); }

    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline DescribeSlotTypeResult& WithValueSelectionSetting(const SlotValueSelectionSetting& value) { SetValueSelectionSetting(value); return *this;}

    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline DescribeSlotTypeResult& WithValueSelectionSetting(SlotValueSelectionSetting&& value) { SetValueSelectionSetting(std::move(value)); return *this;}


    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignature = value; }

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignature = std::move(value); }

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignature.assign(value); }

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline DescribeSlotTypeResult& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline DescribeSlotTypeResult& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}

    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline DescribeSlotTypeResult& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}


    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithBotId(const char* value) { SetBotId(value); return *this;}


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
    inline DescribeSlotTypeResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline DescribeSlotTypeResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


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
    inline DescribeSlotTypeResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline DescribeSlotTypeResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


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
    inline DescribeSlotTypeResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline DescribeSlotTypeResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    
    inline const ExternalSourceSetting& GetExternalSourceSetting() const{ return m_externalSourceSetting; }

    
    inline void SetExternalSourceSetting(const ExternalSourceSetting& value) { m_externalSourceSetting = value; }

    
    inline void SetExternalSourceSetting(ExternalSourceSetting&& value) { m_externalSourceSetting = std::move(value); }

    
    inline DescribeSlotTypeResult& WithExternalSourceSetting(const ExternalSourceSetting& value) { SetExternalSourceSetting(value); return *this;}

    
    inline DescribeSlotTypeResult& WithExternalSourceSetting(ExternalSourceSetting&& value) { SetExternalSourceSetting(std::move(value)); return *this;}


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
    inline DescribeSlotTypeResult& WithCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { SetCompositeSlotTypeSetting(value); return *this;}

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline DescribeSlotTypeResult& WithCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { SetCompositeSlotTypeSetting(std::move(value)); return *this;}

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
