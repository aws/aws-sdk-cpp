﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BuiltinIntentMetadata
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentMetadata();
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the built-in intent. To find the signature for an
     * intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }
    inline BuiltinIntentMetadata& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}
    inline BuiltinIntentMetadata& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}
    inline BuiltinIntentMetadata& WithSignature(const char* value) { SetSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers for the locales that the intent supports.</p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const{ return m_supportedLocales; }
    inline bool SupportedLocalesHasBeenSet() const { return m_supportedLocalesHasBeenSet; }
    inline void SetSupportedLocales(const Aws::Vector<Locale>& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = value; }
    inline void SetSupportedLocales(Aws::Vector<Locale>&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = std::move(value); }
    inline BuiltinIntentMetadata& WithSupportedLocales(const Aws::Vector<Locale>& value) { SetSupportedLocales(value); return *this;}
    inline BuiltinIntentMetadata& WithSupportedLocales(Aws::Vector<Locale>&& value) { SetSupportedLocales(std::move(value)); return *this;}
    inline BuiltinIntentMetadata& AddSupportedLocales(const Locale& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(value); return *this; }
    inline BuiltinIntentMetadata& AddSupportedLocales(Locale&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::Vector<Locale> m_supportedLocales;
    bool m_supportedLocalesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
