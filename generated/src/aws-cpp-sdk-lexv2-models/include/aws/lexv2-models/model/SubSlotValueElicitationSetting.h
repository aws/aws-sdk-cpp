/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotDefaultValueSpecification.h>
#include <aws/lexv2-models/model/PromptSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/WaitAndContinueSpecification.h>
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
   * <p>Subslot elicitation settings.</p> <p> <code>DefaultValueSpecification</code>
   * is a list of default values for a constituent sub slot in a composite slot.
   * Default values are used when Amazon Lex hasn't determined a value for a slot.
   * You can specify default values from context variables, session attributes, and
   * defined values. This is similar to <code>DefaultValueSpecification</code> for
   * slots.</p> <p> <code>PromptSpecification</code> is the prompt that Amazon Lex
   * uses to elicit the sub slot value from the user. This is similar to
   * <code>PromptSpecification</code> for slots.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SubSlotValueElicitationSetting">AWS
   * API Reference</a></p>
   */
  class SubSlotValueElicitationSetting
  {
  public:
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting() = default;
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SlotDefaultValueSpecification& GetDefaultValueSpecification() const { return m_defaultValueSpecification; }
    inline bool DefaultValueSpecificationHasBeenSet() const { return m_defaultValueSpecificationHasBeenSet; }
    template<typename DefaultValueSpecificationT = SlotDefaultValueSpecification>
    void SetDefaultValueSpecification(DefaultValueSpecificationT&& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = std::forward<DefaultValueSpecificationT>(value); }
    template<typename DefaultValueSpecificationT = SlotDefaultValueSpecification>
    SubSlotValueElicitationSetting& WithDefaultValueSpecification(DefaultValueSpecificationT&& value) { SetDefaultValueSpecification(std::forward<DefaultValueSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PromptSpecification& GetPromptSpecification() const { return m_promptSpecification; }
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }
    template<typename PromptSpecificationT = PromptSpecification>
    void SetPromptSpecification(PromptSpecificationT&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::forward<PromptSpecificationT>(value); }
    template<typename PromptSpecificationT = PromptSpecification>
    SubSlotValueElicitationSetting& WithPromptSpecification(PromptSpecificationT&& value) { SetPromptSpecification(std::forward<PromptSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const { return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    SubSlotValueElicitationSetting& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = SampleUtterance>
    SubSlotValueElicitationSetting& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const WaitAndContinueSpecification& GetWaitAndContinueSpecification() const { return m_waitAndContinueSpecification; }
    inline bool WaitAndContinueSpecificationHasBeenSet() const { return m_waitAndContinueSpecificationHasBeenSet; }
    template<typename WaitAndContinueSpecificationT = WaitAndContinueSpecification>
    void SetWaitAndContinueSpecification(WaitAndContinueSpecificationT&& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = std::forward<WaitAndContinueSpecificationT>(value); }
    template<typename WaitAndContinueSpecificationT = WaitAndContinueSpecification>
    SubSlotValueElicitationSetting& WithWaitAndContinueSpecification(WaitAndContinueSpecificationT&& value) { SetWaitAndContinueSpecification(std::forward<WaitAndContinueSpecificationT>(value)); return *this;}
    ///@}
  private:

    SlotDefaultValueSpecification m_defaultValueSpecification;
    bool m_defaultValueSpecificationHasBeenSet = false;

    PromptSpecification m_promptSpecification;
    bool m_promptSpecificationHasBeenSet = false;

    Aws::Vector<SampleUtterance> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    WaitAndContinueSpecification m_waitAndContinueSpecification;
    bool m_waitAndContinueSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
