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
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListBuiltInIntents.html">
   * ListBuiltInIntents </a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuiltInIntentSummary">AWS
   * API Reference</a></p>
   */
  class BuiltInIntentSummary
  {
  public:
    AWS_LEXMODELSV2_API BuiltInIntentSummary();
    AWS_LEXMODELSV2_API BuiltInIntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuiltInIntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline const Aws::String& GetIntentSignature() const{ return m_intentSignature; }

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline bool IntentSignatureHasBeenSet() const { return m_intentSignatureHasBeenSet; }

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline void SetIntentSignature(const Aws::String& value) { m_intentSignatureHasBeenSet = true; m_intentSignature = value; }

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline void SetIntentSignature(Aws::String&& value) { m_intentSignatureHasBeenSet = true; m_intentSignature = std::move(value); }

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline void SetIntentSignature(const char* value) { m_intentSignatureHasBeenSet = true; m_intentSignature.assign(value); }

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline BuiltInIntentSummary& WithIntentSignature(const Aws::String& value) { SetIntentSignature(value); return *this;}

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline BuiltInIntentSummary& WithIntentSignature(Aws::String&& value) { SetIntentSignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the built-in intent. Use this to specify the parent intent
     * of a derived intent.</p>
     */
    inline BuiltInIntentSummary& WithIntentSignature(const char* value) { SetIntentSignature(value); return *this;}


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
    inline BuiltInIntentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline BuiltInIntentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline BuiltInIntentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_intentSignature;
    bool m_intentSignatureHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
