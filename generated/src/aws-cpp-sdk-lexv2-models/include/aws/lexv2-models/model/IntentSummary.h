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
    AWS_LEXMODELSV2_API IntentSummary();
    AWS_LEXMODELSV2_API IntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline IntentSummary& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline IntentSummary& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the intent. Use this ID to get detailed
     * information about the intent with the <code>DescribeIntent</code> operation.</p>
     */
    inline IntentSummary& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline IntentSummary& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline IntentSummary& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline IntentSummary& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the intent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the intent.</p>
     */
    inline IntentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline IntentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline IntentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline IntentSummary& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline IntentSummary& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>If this intent is derived from a built-in intent, the name of the parent
     * intent.</p>
     */
    inline IntentSummary& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline IntentSummary& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline IntentSummary& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline IntentSummary& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }

    /**
     * <p>The input contexts that must be active for this intent to be considered for
     * recognition.</p>
     */
    inline IntentSummary& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline IntentSummary& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline IntentSummary& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline IntentSummary& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }

    /**
     * <p>The output contexts that are activated when this intent is fulfilled.</p>
     */
    inline IntentSummary& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline IntentSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The timestamp of the date and time that the intent was last updated.</p>
     */
    inline IntentSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
