/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/lex-models/model/EnumerationValue.h>
#include <aws/lex-models/model/SlotTypeConfiguration.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class CreateSlotTypeVersionResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CreateSlotTypeVersionResult();
    AWS_LEXMODELBUILDINGSERVICE_API CreateSlotTypeVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API CreateSlotTypeVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the slot type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSlotTypeVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSlotTypeVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSlotTypeVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSlotTypeVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline const Aws::Vector<EnumerationValue>& GetEnumerationValues() const{ return m_enumerationValues; }
    inline void SetEnumerationValues(const Aws::Vector<EnumerationValue>& value) { m_enumerationValues = value; }
    inline void SetEnumerationValues(Aws::Vector<EnumerationValue>&& value) { m_enumerationValues = std::move(value); }
    inline CreateSlotTypeVersionResult& WithEnumerationValues(const Aws::Vector<EnumerationValue>& value) { SetEnumerationValues(value); return *this;}
    inline CreateSlotTypeVersionResult& WithEnumerationValues(Aws::Vector<EnumerationValue>&& value) { SetEnumerationValues(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& AddEnumerationValues(const EnumerationValue& value) { m_enumerationValues.push_back(value); return *this; }
    inline CreateSlotTypeVersionResult& AddEnumerationValues(EnumerationValue&& value) { m_enumerationValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline CreateSlotTypeVersionResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline CreateSlotTypeVersionResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreateSlotTypeVersionResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreateSlotTypeVersionResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version assigned to the new slot type version. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateSlotTypeVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateSlotTypeVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline CreateSlotTypeVersionResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline CreateSlotTypeVersionResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline const SlotValueSelectionStrategy& GetValueSelectionStrategy() const{ return m_valueSelectionStrategy; }
    inline void SetValueSelectionStrategy(const SlotValueSelectionStrategy& value) { m_valueSelectionStrategy = value; }
    inline void SetValueSelectionStrategy(SlotValueSelectionStrategy&& value) { m_valueSelectionStrategy = std::move(value); }
    inline CreateSlotTypeVersionResult& WithValueSelectionStrategy(const SlotValueSelectionStrategy& value) { SetValueSelectionStrategy(value); return *this;}
    inline CreateSlotTypeVersionResult& WithValueSelectionStrategy(SlotValueSelectionStrategy&& value) { SetValueSelectionStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built-in slot type used a the parent of the slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignature = value; }
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignature = std::move(value); }
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignature.assign(value); }
    inline CreateSlotTypeVersionResult& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}
    inline CreateSlotTypeVersionResult& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information that extends the parent built-in slot type.</p>
     */
    inline const Aws::Vector<SlotTypeConfiguration>& GetSlotTypeConfigurations() const{ return m_slotTypeConfigurations; }
    inline void SetSlotTypeConfigurations(const Aws::Vector<SlotTypeConfiguration>& value) { m_slotTypeConfigurations = value; }
    inline void SetSlotTypeConfigurations(Aws::Vector<SlotTypeConfiguration>&& value) { m_slotTypeConfigurations = std::move(value); }
    inline CreateSlotTypeVersionResult& WithSlotTypeConfigurations(const Aws::Vector<SlotTypeConfiguration>& value) { SetSlotTypeConfigurations(value); return *this;}
    inline CreateSlotTypeVersionResult& WithSlotTypeConfigurations(Aws::Vector<SlotTypeConfiguration>&& value) { SetSlotTypeConfigurations(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& AddSlotTypeConfigurations(const SlotTypeConfiguration& value) { m_slotTypeConfigurations.push_back(value); return *this; }
    inline CreateSlotTypeVersionResult& AddSlotTypeConfigurations(SlotTypeConfiguration&& value) { m_slotTypeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSlotTypeVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSlotTypeVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSlotTypeVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<EnumerationValue> m_enumerationValues;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_version;

    Aws::String m_checksum;

    SlotValueSelectionStrategy m_valueSelectionStrategy;

    Aws::String m_parentSlotTypeSignature;

    Aws::Vector<SlotTypeConfiguration> m_slotTypeConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
