/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotDefaultValueSpecification.h>
#include <aws/lexv2-models/model/SlotConstraint.h>
#include <aws/lexv2-models/model/PromptSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/WaitAndContinueSpecification.h>
#include <aws/lexv2-models/model/SlotCaptureSetting.h>
#include <aws/lexv2-models/model/SampleUtterance.h>
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
   * <p>Specifies the elicitation setting details for constituent sub slots of a
   * composite slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValueElicitationSetting">AWS
   * API Reference</a></p>
   */
  class SlotValueElicitationSetting
  {
  public:
    AWS_LEXMODELSV2_API SlotValueElicitationSetting();
    AWS_LEXMODELSV2_API SlotValueElicitationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueElicitationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline const SlotDefaultValueSpecification& GetDefaultValueSpecification() const{ return m_defaultValueSpecification; }

    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline bool DefaultValueSpecificationHasBeenSet() const { return m_defaultValueSpecificationHasBeenSet; }

    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline void SetDefaultValueSpecification(const SlotDefaultValueSpecification& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = value; }

    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline void SetDefaultValueSpecification(SlotDefaultValueSpecification&& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = std::move(value); }

    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline SlotValueElicitationSetting& WithDefaultValueSpecification(const SlotDefaultValueSpecification& value) { SetDefaultValueSpecification(value); return *this;}

    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline SlotValueElicitationSetting& WithDefaultValueSpecification(SlotDefaultValueSpecification&& value) { SetDefaultValueSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline const SlotConstraint& GetSlotConstraint() const{ return m_slotConstraint; }

    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }

    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline void SetSlotConstraint(const SlotConstraint& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }

    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline void SetSlotConstraint(SlotConstraint&& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = std::move(value); }

    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline SlotValueElicitationSetting& WithSlotConstraint(const SlotConstraint& value) { SetSlotConstraint(value); return *this;}

    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline SlotValueElicitationSetting& WithSlotConstraint(SlotConstraint&& value) { SetSlotConstraint(std::move(value)); return *this;}


    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline const PromptSpecification& GetPromptSpecification() const{ return m_promptSpecification; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline void SetPromptSpecification(const PromptSpecification& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = value; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline void SetPromptSpecification(PromptSpecification&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::move(value); }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline SlotValueElicitationSetting& WithPromptSpecification(const PromptSpecification& value) { SetPromptSpecification(value); return *this;}

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline SlotValueElicitationSetting& WithPromptSpecification(PromptSpecification&& value) { SetPromptSpecification(std::move(value)); return *this;}


    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline SlotValueElicitationSetting& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline SlotValueElicitationSetting& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline SlotValueElicitationSetting& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline SlotValueElicitationSetting& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }


    
    inline const WaitAndContinueSpecification& GetWaitAndContinueSpecification() const{ return m_waitAndContinueSpecification; }

    
    inline bool WaitAndContinueSpecificationHasBeenSet() const { return m_waitAndContinueSpecificationHasBeenSet; }

    
    inline void SetWaitAndContinueSpecification(const WaitAndContinueSpecification& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = value; }

    
    inline void SetWaitAndContinueSpecification(WaitAndContinueSpecification&& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = std::move(value); }

    
    inline SlotValueElicitationSetting& WithWaitAndContinueSpecification(const WaitAndContinueSpecification& value) { SetWaitAndContinueSpecification(value); return *this;}

    
    inline SlotValueElicitationSetting& WithWaitAndContinueSpecification(WaitAndContinueSpecification&& value) { SetWaitAndContinueSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline const SlotCaptureSetting& GetSlotCaptureSetting() const{ return m_slotCaptureSetting; }

    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline bool SlotCaptureSettingHasBeenSet() const { return m_slotCaptureSettingHasBeenSet; }

    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline void SetSlotCaptureSetting(const SlotCaptureSetting& value) { m_slotCaptureSettingHasBeenSet = true; m_slotCaptureSetting = value; }

    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline void SetSlotCaptureSetting(SlotCaptureSetting&& value) { m_slotCaptureSettingHasBeenSet = true; m_slotCaptureSetting = std::move(value); }

    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline SlotValueElicitationSetting& WithSlotCaptureSetting(const SlotCaptureSetting& value) { SetSlotCaptureSetting(value); return *this;}

    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline SlotValueElicitationSetting& WithSlotCaptureSetting(SlotCaptureSetting&& value) { SetSlotCaptureSetting(std::move(value)); return *this;}

  private:

    SlotDefaultValueSpecification m_defaultValueSpecification;
    bool m_defaultValueSpecificationHasBeenSet = false;

    SlotConstraint m_slotConstraint;
    bool m_slotConstraintHasBeenSet = false;

    PromptSpecification m_promptSpecification;
    bool m_promptSpecificationHasBeenSet = false;

    Aws::Vector<SampleUtterance> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    WaitAndContinueSpecification m_waitAndContinueSpecification;
    bool m_waitAndContinueSpecificationHasBeenSet = false;

    SlotCaptureSetting m_slotCaptureSetting;
    bool m_slotCaptureSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
