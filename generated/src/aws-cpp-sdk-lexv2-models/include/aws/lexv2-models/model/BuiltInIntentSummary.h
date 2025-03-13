/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides summary information about a built-in intent for the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListBuiltInIntents.html">
   * ListBuiltInIntents </a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuiltInIntentSummary">AWS
   * API Reference</a></p>
   */
  class BuiltInIntentSummary
  {
  public:
    AWS_LEXMODELSV2_API BuiltInIntentSummary() = default;
    AWS_LEXMODELSV2_API BuiltInIntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuiltInIntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline const Aws::String& GetIntentSignature() const { return m_intentSignature; }
    inline bool IntentSignatureHasBeenSet() const { return m_intentSignatureHasBeenSet; }
    template<typename IntentSignatureT = Aws::String>
    void SetIntentSignature(IntentSignatureT&& value) { m_intentSignatureHasBeenSet = true; m_intentSignature = std::forward<IntentSignatureT>(value); }
    template<typename IntentSignatureT = Aws::String>
    BuiltInIntentSummary& WithIntentSignature(IntentSignatureT&& value) { SetIntentSignature(std::forward<IntentSignatureT>(value)); return *this;}
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
    BuiltInIntentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentSignature;
    bool m_intentSignatureHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
