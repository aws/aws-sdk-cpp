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
  class PutSlotTypeResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutSlotTypeResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API PutSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API PutSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the slot type.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutSlotTypeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutSlotTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline const Aws::Vector<EnumerationValue>& GetEnumerationValues() const { return m_enumerationValues; }
    template<typename EnumerationValuesT = Aws::Vector<EnumerationValue>>
    void SetEnumerationValues(EnumerationValuesT&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues = std::forward<EnumerationValuesT>(value); }
    template<typename EnumerationValuesT = Aws::Vector<EnumerationValue>>
    PutSlotTypeResult& WithEnumerationValues(EnumerationValuesT&& value) { SetEnumerationValues(std::forward<EnumerationValuesT>(value)); return *this;}
    template<typename EnumerationValuesT = EnumerationValue>
    PutSlotTypeResult& AddEnumerationValues(EnumerationValuesT&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues.emplace_back(std::forward<EnumerationValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date that the slot type was updated. When you create a slot type, the
     * creation date and last update date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    PutSlotTypeResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    PutSlotTypeResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the slot type. For a new slot type, the version is always
     * <code>$LATEST</code>. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PutSlotTypeResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    PutSlotTypeResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slot resolution strategy that Amazon Lex uses to determine the value of
     * the slot. For more information, see <a>PutSlotType</a>.</p>
     */
    inline SlotValueSelectionStrategy GetValueSelectionStrategy() const { return m_valueSelectionStrategy; }
    inline void SetValueSelectionStrategy(SlotValueSelectionStrategy value) { m_valueSelectionStrategyHasBeenSet = true; m_valueSelectionStrategy = value; }
    inline PutSlotTypeResult& WithValueSelectionStrategy(SlotValueSelectionStrategy value) { SetValueSelectionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if a new version of the slot type was created. If the
     * <code>createVersion</code> field was not specified in the request, the
     * <code>createVersion</code> field is set to false in the response.</p>
     */
    inline bool GetCreateVersion() const { return m_createVersion; }
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }
    inline PutSlotTypeResult& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built-in slot type used as the parent of the slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    PutSlotTypeResult& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information that extends the parent built-in slot type.</p>
     */
    inline const Aws::Vector<SlotTypeConfiguration>& GetSlotTypeConfigurations() const { return m_slotTypeConfigurations; }
    template<typename SlotTypeConfigurationsT = Aws::Vector<SlotTypeConfiguration>>
    void SetSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { m_slotTypeConfigurationsHasBeenSet = true; m_slotTypeConfigurations = std::forward<SlotTypeConfigurationsT>(value); }
    template<typename SlotTypeConfigurationsT = Aws::Vector<SlotTypeConfiguration>>
    PutSlotTypeResult& WithSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { SetSlotTypeConfigurations(std::forward<SlotTypeConfigurationsT>(value)); return *this;}
    template<typename SlotTypeConfigurationsT = SlotTypeConfiguration>
    PutSlotTypeResult& AddSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { m_slotTypeConfigurationsHasBeenSet = true; m_slotTypeConfigurations.emplace_back(std::forward<SlotTypeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSlotTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EnumerationValue> m_enumerationValues;
    bool m_enumerationValuesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    SlotValueSelectionStrategy m_valueSelectionStrategy{SlotValueSelectionStrategy::NOT_SET};
    bool m_valueSelectionStrategyHasBeenSet = false;

    bool m_createVersion{false};
    bool m_createVersionHasBeenSet = false;

    Aws::String m_parentSlotTypeSignature;
    bool m_parentSlotTypeSignatureHasBeenSet = false;

    Aws::Vector<SlotTypeConfiguration> m_slotTypeConfigurations;
    bool m_slotTypeConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
