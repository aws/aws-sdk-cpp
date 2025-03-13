/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/InputContext.h>
#include <aws/lexv2-models/model/OutputContext.h>
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
   * <p>Summary information about an intent returned by the <code>ListIntents</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentSummary">AWS
   * API Reference</a></p>
   */
  class IntentSummary
  {
  public:
    AWS_LEXMODELSV2_API IntentSummary() = default;
    AWS_LEXMODELSV2_API IntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    IntentSummary& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    IntentSummary& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IntentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const { return m_parentIntentSignature; }
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }
    template<typename ParentIntentSignatureT = Aws::String>
    void SetParentIntentSignature(ParentIntentSignatureT&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::forward<ParentIntentSignatureT>(value); }
    template<typename ParentIntentSignatureT = Aws::String>
    IntentSummary& WithParentIntentSignature(ParentIntentSignatureT&& value) { SetParentIntentSignature(std::forward<ParentIntentSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const { return m_inputContexts; }
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    void SetInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::forward<InputContextsT>(value); }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    IntentSummary& WithInputContexts(InputContextsT&& value) { SetInputContexts(std::forward<InputContextsT>(value)); return *this;}
    template<typename InputContextsT = InputContext>
    IntentSummary& AddInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.emplace_back(std::forward<InputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const { return m_outputContexts; }
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    void SetOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::forward<OutputContextsT>(value); }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    IntentSummary& WithOutputContexts(OutputContextsT&& value) { SetOutputContexts(std::forward<OutputContextsT>(value)); return *this;}
    template<typename OutputContextsT = OutputContext>
    IntentSummary& AddOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.emplace_back(std::forward<OutputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    IntentSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_parentIntentSignature;
    bool m_parentIntentSignatureHasBeenSet = false;

    Aws::Vector<InputContext> m_inputContexts;
    bool m_inputContextsHasBeenSet = false;

    Aws::Vector<OutputContext> m_outputContexts;
    bool m_outputContextsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
