/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/lex-models/model/EnumerationValue.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API PutSlotTypeRequest : public LexModelBuildingServiceRequest
  {
  public:
    PutSlotTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSlotType"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutSlotTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutSlotTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot type. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in slot type name, or a built-in slot type name with
     * "AMAZON." removed. For example, because there is a built-in slot type called
     * <code>AMAZON.DATE</code>, you can't create a custom slot type called
     * <code>DATE</code>.</p> <p>For a list of built-in slot types, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutSlotTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the slot type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the slot type.</p>
     */
    inline PutSlotTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the slot type.</p>
     */
    inline PutSlotTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the slot type.</p>
     */
    inline PutSlotTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline const Aws::Vector<EnumerationValue>& GetEnumerationValues() const{ return m_enumerationValues; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline bool EnumerationValuesHasBeenSet() const { return m_enumerationValuesHasBeenSet; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline void SetEnumerationValues(const Aws::Vector<EnumerationValue>& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues = value; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline void SetEnumerationValues(Aws::Vector<EnumerationValue>&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues = std::move(value); }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline PutSlotTypeRequest& WithEnumerationValues(const Aws::Vector<EnumerationValue>& value) { SetEnumerationValues(value); return *this;}

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline PutSlotTypeRequest& WithEnumerationValues(Aws::Vector<EnumerationValue>&& value) { SetEnumerationValues(std::move(value)); return *this;}

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline PutSlotTypeRequest& AddEnumerationValues(const EnumerationValue& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues.push_back(value); return *this; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take. Each value can have a list of <code>synonyms</code>,
     * which are additional values that help train the machine learning model about the
     * values that it resolves for a slot. </p> <p>When Amazon Lex resolves a slot
     * value, it generates a resolution list that contains up to five possible values
     * for the slot. If you are using a Lambda function, this resolution list is passed
     * to the function. If you are not using a Lambda function you can choose to return
     * the value that the user entered or the first value in the resolution list as the
     * slot value. The <code>valueSelectionStrategy</code> field indicates the option
     * to use. </p>
     */
    inline PutSlotTypeRequest& AddEnumerationValues(EnumerationValue&& value) { m_enumerationValuesHasBeenSet = true; m_enumerationValues.push_back(std::move(value)); return *this; }


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
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

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
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

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
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

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
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

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
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

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
    inline PutSlotTypeRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

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
    inline PutSlotTypeRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

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
    inline PutSlotTypeRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


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
    inline const SlotValueSelectionStrategy& GetValueSelectionStrategy() const{ return m_valueSelectionStrategy; }

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
    inline bool ValueSelectionStrategyHasBeenSet() const { return m_valueSelectionStrategyHasBeenSet; }

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
    inline void SetValueSelectionStrategy(const SlotValueSelectionStrategy& value) { m_valueSelectionStrategyHasBeenSet = true; m_valueSelectionStrategy = value; }

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
    inline void SetValueSelectionStrategy(SlotValueSelectionStrategy&& value) { m_valueSelectionStrategyHasBeenSet = true; m_valueSelectionStrategy = std::move(value); }

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
    inline PutSlotTypeRequest& WithValueSelectionStrategy(const SlotValueSelectionStrategy& value) { SetValueSelectionStrategy(value); return *this;}

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
    inline PutSlotTypeRequest& WithValueSelectionStrategy(SlotValueSelectionStrategy&& value) { SetValueSelectionStrategy(std::move(value)); return *this;}


    
    inline bool GetCreateVersion() const{ return m_createVersion; }

    
    inline bool CreateVersionHasBeenSet() const { return m_createVersionHasBeenSet; }

    
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }

    
    inline PutSlotTypeRequest& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<EnumerationValue> m_enumerationValues;
    bool m_enumerationValuesHasBeenSet;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet;

    SlotValueSelectionStrategy m_valueSelectionStrategy;
    bool m_valueSelectionStrategyHasBeenSet;

    bool m_createVersion;
    bool m_createVersionHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
