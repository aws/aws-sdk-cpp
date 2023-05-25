/**
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
   * <p>Provides information about a built in slot type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/BuiltinSlotTypeMetadata">AWS
   * API Reference</a></p>
   */
  class BuiltinSlotTypeMetadata
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata();
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinSlotTypeMetadata& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinSlotTypeMetadata& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline BuiltinSlotTypeMetadata& WithSignature(const char* value) { SetSignature(value); return *this;}


    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const{ return m_supportedLocales; }

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline bool SupportedLocalesHasBeenSet() const { return m_supportedLocalesHasBeenSet; }

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline void SetSupportedLocales(const Aws::Vector<Locale>& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = value; }

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline void SetSupportedLocales(Aws::Vector<Locale>&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = std::move(value); }

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline BuiltinSlotTypeMetadata& WithSupportedLocales(const Aws::Vector<Locale>& value) { SetSupportedLocales(value); return *this;}

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline BuiltinSlotTypeMetadata& WithSupportedLocales(Aws::Vector<Locale>&& value) { SetSupportedLocales(std::move(value)); return *this;}

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline BuiltinSlotTypeMetadata& AddSupportedLocales(const Locale& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(value); return *this; }

    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline BuiltinSlotTypeMetadata& AddSupportedLocales(Locale&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::Vector<Locale> m_supportedLocales;
    bool m_supportedLocalesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
