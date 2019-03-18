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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Locale.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides metadata for a built-in intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/BuiltinIntentMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentMetadata
  {
  public:
    BuiltinIntentMetadata();
    BuiltinIntentMetadata(Aws::Utils::Json::JsonView jsonValue);
    BuiltinIntentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinIntentMetadata& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinIntentMetadata& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinIntentMetadata& WithSignature(const char* value) { SetSignature(value); return *this;}


    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const{ return m_supportedLocales; }

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline bool SupportedLocalesHasBeenSet() const { return m_supportedLocalesHasBeenSet; }

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline void SetSupportedLocales(const Aws::Vector<Locale>& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = value; }

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline void SetSupportedLocales(Aws::Vector<Locale>&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = std::move(value); }

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline BuiltinIntentMetadata& WithSupportedLocales(const Aws::Vector<Locale>& value) { SetSupportedLocales(value); return *this;}

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline BuiltinIntentMetadata& WithSupportedLocales(Aws::Vector<Locale>&& value) { SetSupportedLocales(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline BuiltinIntentMetadata& AddSupportedLocales(const Locale& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline BuiltinIntentMetadata& AddSupportedLocales(Locale&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_signature;
    bool m_signatureHasBeenSet;

    Aws::Vector<Locale> m_supportedLocales;
    bool m_supportedLocalesHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
