﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/lex-models/model/EnumerationValue.h>
#include <aws/lex-models/model/SlotTypeConfiguration.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class PutSlotTypeRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutSlotTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSlotType"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutSlotTypeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutSlotTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>A regular expression slot type
     * doesn't require enumeration values. All other slot types require a list of
     * enumeration values.</p> <p>When Amazon Lex resolves a slot value, it generates a
     * resolution list that contains up to five possible values for the slot. If you
     * are using a Lambda function, this resolution list is passed to the function. If
     * you are not using a Lambda function you can choose to return the value that the
     * user entered or the first value in the resolution list as the slot value. The
     * <code>valueSelectionStrategy</code> field indicates the option to use. </p>
     */
    inline const Aws::Vector<EnumerationValue>& GetEnumerationValues() const { return m_enumerationValues; }
    inline bool EnumerationValuesHasBeenSet() const { return m_enumerationValuesHasBeenSet; }
    template<typename EnumerationValuesT = Aws::Vector<EnumerationValue>>
    void SetEnumerationValues(EnumerationValuesT&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues = std::forward<EnumerationValuesT>(value); }
    template<typename EnumerationValuesT = Aws::Vector<EnumerationValue>>
    PutSlotTypeRequest& WithEnumerationValues(EnumerationValuesT&& value) { SetEnumerationValues(std::forward<EnumerationValuesT>(value)); return *this;}
    template<typename EnumerationValuesT = EnumerationValue>
    PutSlotTypeRequest& AddEnumerationValues(EnumerationValuesT&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues.emplace_back(std::forward<EnumerationValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new slot type, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a slot type, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    PutSlotTypeRequest& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the slot resolution strategy that Amazon Lex uses to return slot
     * type values. The field can be set to one of the following values:</p> <ul> <li>
     * <p> <code>ORIGINAL_VALUE</code> - Returns the value entered by the user, if the
     * user value is similar to the slot value.</p> </li> <li> <p>
     * <code>TOP_RESOLUTION</code> - If there is a resolution list for the slot, return
     * the first value in the resolution list as the slot type value. If there is no
     * resolution list, null is returned.</p> </li> </ul> <p>If you don't specify the
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline SlotValueSelectionStrategy GetValueSelectionStrategy() const { return m_valueSelectionStrategy; }
    inline bool ValueSelectionStrategyHasBeenSet() const { return m_valueSelectionStrategyHasBeenSet; }
    inline void SetValueSelectionStrategy(SlotValueSelectionStrategy value) { m_valueSelectionStrategyHasBeenSet = true; m_valueSelectionStrategy = value; }
    inline PutSlotTypeRequest& WithValueSelectionStrategy(SlotValueSelectionStrategy value) { SetValueSelectionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code> a new numbered version of the slot type is
     * created. This is the same as calling the <code>CreateSlotTypeVersion</code>
     * operation. If you do not specify <code>createVersion</code>, the default is
     * <code>false</code>.</p>
     */
    inline bool GetCreateVersion() const { return m_createVersion; }
    inline bool CreateVersionHasBeenSet() const { return m_createVersionHasBeenSet; }
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }
    inline PutSlotTypeRequest& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built-in slot type used as the parent of the slot type. When you define a
     * parent slot type, the new slot type has all of the same configuration as the
     * parent.</p> <p>Only <code>AMAZON.AlphaNumeric</code> is supported.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    PutSlotTypeRequest& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information that extends the parent built-in slot type. The
     * configuration is added to the settings for the parent slot type.</p>
     */
    inline const Aws::Vector<SlotTypeConfiguration>& GetSlotTypeConfigurations() const { return m_slotTypeConfigurations; }
    inline bool SlotTypeConfigurationsHasBeenSet() const { return m_slotTypeConfigurationsHasBeenSet; }
    template<typename SlotTypeConfigurationsT = Aws::Vector<SlotTypeConfiguration>>
    void SetSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { m_slotTypeConfigurationsHasBeenSet = true; m_slotTypeConfigurations = std::forward<SlotTypeConfigurationsT>(value); }
    template<typename SlotTypeConfigurationsT = Aws::Vector<SlotTypeConfiguration>>
    PutSlotTypeRequest& WithSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { SetSlotTypeConfigurations(std::forward<SlotTypeConfigurationsT>(value)); return *this;}
    template<typename SlotTypeConfigurationsT = SlotTypeConfiguration>
    PutSlotTypeRequest& AddSlotTypeConfigurations(SlotTypeConfigurationsT&& value) { m_slotTypeConfigurationsHasBeenSet = true; m_slotTypeConfigurations.emplace_back(std::forward<SlotTypeConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EnumerationValue> m_enumerationValues;
    bool m_enumerationValuesHasBeenSet = false;

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
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
