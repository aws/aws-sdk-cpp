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
#include <aws/lexv2-models/model/SlotResolutionSetting.h>
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
   * <p>Specifies the elicitation setting details eliciting a slot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValueElicitationSetting">AWS
   * API Reference</a></p>
   */
  class SlotValueElicitationSetting
  {
  public:
    AWS_LEXMODELSV2_API SlotValueElicitationSetting() = default;
    AWS_LEXMODELSV2_API SlotValueElicitationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueElicitationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of default values for a slot. Default values are used when Amazon Lex
     * hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline const SlotDefaultValueSpecification& GetDefaultValueSpecification() const { return m_defaultValueSpecification; }
    inline bool DefaultValueSpecificationHasBeenSet() const { return m_defaultValueSpecificationHasBeenSet; }
    template<typename DefaultValueSpecificationT = SlotDefaultValueSpecification>
    void SetDefaultValueSpecification(DefaultValueSpecificationT&& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = std::forward<DefaultValueSpecificationT>(value); }
    template<typename DefaultValueSpecificationT = SlotDefaultValueSpecification>
    SlotValueElicitationSetting& WithDefaultValueSpecification(DefaultValueSpecificationT&& value) { SetDefaultValueSpecification(std::forward<DefaultValueSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the slot is required or optional.</p>
     */
    inline SlotConstraint GetSlotConstraint() const { return m_slotConstraint; }
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }
    inline void SetSlotConstraint(SlotConstraint value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }
    inline SlotValueElicitationSetting& WithSlotConstraint(SlotConstraint value) { SetSlotConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline const PromptSpecification& GetPromptSpecification() const { return m_promptSpecification; }
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }
    template<typename PromptSpecificationT = PromptSpecification>
    void SetPromptSpecification(PromptSpecificationT&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::forward<PromptSpecificationT>(value); }
    template<typename PromptSpecificationT = PromptSpecification>
    SlotValueElicitationSetting& WithPromptSpecification(PromptSpecificationT&& value) { SetPromptSpecification(std::forward<PromptSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a slot value, you can provide those utterances to improve accuracy.
     * This is optional. In most cases, Amazon Lex is capable of understanding user
     * utterances.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const { return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    SlotValueElicitationSetting& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = SampleUtterance>
    SlotValueElicitationSetting& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const WaitAndContinueSpecification& GetWaitAndContinueSpecification() const { return m_waitAndContinueSpecification; }
    inline bool WaitAndContinueSpecificationHasBeenSet() const { return m_waitAndContinueSpecificationHasBeenSet; }
    template<typename WaitAndContinueSpecificationT = WaitAndContinueSpecification>
    void SetWaitAndContinueSpecification(WaitAndContinueSpecificationT&& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = std::forward<WaitAndContinueSpecificationT>(value); }
    template<typename WaitAndContinueSpecificationT = WaitAndContinueSpecification>
    SlotValueElicitationSetting& WithWaitAndContinueSpecification(WaitAndContinueSpecificationT&& value) { SetWaitAndContinueSpecification(std::forward<WaitAndContinueSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings that Amazon Lex uses when a slot value is successfully
     * entered by a user.</p>
     */
    inline const SlotCaptureSetting& GetSlotCaptureSetting() const { return m_slotCaptureSetting; }
    inline bool SlotCaptureSettingHasBeenSet() const { return m_slotCaptureSettingHasBeenSet; }
    template<typename SlotCaptureSettingT = SlotCaptureSetting>
    void SetSlotCaptureSetting(SlotCaptureSettingT&& value) { m_slotCaptureSettingHasBeenSet = true; m_slotCaptureSetting = std::forward<SlotCaptureSettingT>(value); }
    template<typename SlotCaptureSettingT = SlotCaptureSetting>
    SlotValueElicitationSetting& WithSlotCaptureSetting(SlotCaptureSettingT&& value) { SetSlotCaptureSetting(std::forward<SlotCaptureSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about whether assisted slot resolution is
     * turned on for the slot or not.</p>
     */
    inline const SlotResolutionSetting& GetSlotResolutionSetting() const { return m_slotResolutionSetting; }
    inline bool SlotResolutionSettingHasBeenSet() const { return m_slotResolutionSettingHasBeenSet; }
    template<typename SlotResolutionSettingT = SlotResolutionSetting>
    void SetSlotResolutionSetting(SlotResolutionSettingT&& value) { m_slotResolutionSettingHasBeenSet = true; m_slotResolutionSetting = std::forward<SlotResolutionSettingT>(value); }
    template<typename SlotResolutionSettingT = SlotResolutionSetting>
    SlotValueElicitationSetting& WithSlotResolutionSetting(SlotResolutionSettingT&& value) { SetSlotResolutionSetting(std::forward<SlotResolutionSettingT>(value)); return *this;}
    ///@}
  private:

    SlotDefaultValueSpecification m_defaultValueSpecification;
    bool m_defaultValueSpecificationHasBeenSet = false;

    SlotConstraint m_slotConstraint{SlotConstraint::NOT_SET};
    bool m_slotConstraintHasBeenSet = false;

    PromptSpecification m_promptSpecification;
    bool m_promptSpecificationHasBeenSet = false;

    Aws::Vector<SampleUtterance> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    WaitAndContinueSpecification m_waitAndContinueSpecification;
    bool m_waitAndContinueSpecificationHasBeenSet = false;

    SlotCaptureSetting m_slotCaptureSetting;
    bool m_slotCaptureSettingHasBeenSet = false;

    SlotResolutionSetting m_slotResolutionSetting;
    bool m_slotResolutionSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
