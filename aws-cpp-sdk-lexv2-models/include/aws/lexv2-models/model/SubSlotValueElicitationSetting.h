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
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting();
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SubSlotValueElicitationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SlotDefaultValueSpecification& GetDefaultValueSpecification() const{ return m_defaultValueSpecification; }

    
    inline bool DefaultValueSpecificationHasBeenSet() const { return m_defaultValueSpecificationHasBeenSet; }

    
    inline void SetDefaultValueSpecification(const SlotDefaultValueSpecification& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = value; }

    
    inline void SetDefaultValueSpecification(SlotDefaultValueSpecification&& value) { m_defaultValueSpecificationHasBeenSet = true; m_defaultValueSpecification = std::move(value); }

    
    inline SubSlotValueElicitationSetting& WithDefaultValueSpecification(const SlotDefaultValueSpecification& value) { SetDefaultValueSpecification(value); return *this;}

    
    inline SubSlotValueElicitationSetting& WithDefaultValueSpecification(SlotDefaultValueSpecification&& value) { SetDefaultValueSpecification(std::move(value)); return *this;}


    
    inline const PromptSpecification& GetPromptSpecification() const{ return m_promptSpecification; }

    
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }

    
    inline void SetPromptSpecification(const PromptSpecification& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = value; }

    
    inline void SetPromptSpecification(PromptSpecification&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::move(value); }

    
    inline SubSlotValueElicitationSetting& WithPromptSpecification(const PromptSpecification& value) { SetPromptSpecification(value); return *this;}

    
    inline SubSlotValueElicitationSetting& WithPromptSpecification(PromptSpecification&& value) { SetPromptSpecification(std::move(value)); return *this;}


    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline SubSlotValueElicitationSetting& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline SubSlotValueElicitationSetting& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline SubSlotValueElicitationSetting& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>If you know a specific pattern that users might respond to an Amazon Lex
     * request for a sub slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases Amazon Lex is capable of understanding
     * user utterances. This is similar to <code>SampleUtterances</code> for slots.</p>
     */
    inline SubSlotValueElicitationSetting& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }


    
    inline const WaitAndContinueSpecification& GetWaitAndContinueSpecification() const{ return m_waitAndContinueSpecification; }

    
    inline bool WaitAndContinueSpecificationHasBeenSet() const { return m_waitAndContinueSpecificationHasBeenSet; }

    
    inline void SetWaitAndContinueSpecification(const WaitAndContinueSpecification& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = value; }

    
    inline void SetWaitAndContinueSpecification(WaitAndContinueSpecification&& value) { m_waitAndContinueSpecificationHasBeenSet = true; m_waitAndContinueSpecification = std::move(value); }

    
    inline SubSlotValueElicitationSetting& WithWaitAndContinueSpecification(const WaitAndContinueSpecification& value) { SetWaitAndContinueSpecification(value); return *this;}

    
    inline SubSlotValueElicitationSetting& WithWaitAndContinueSpecification(WaitAndContinueSpecification&& value) { SetWaitAndContinueSpecification(std::move(value)); return *this;}

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
