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
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata() = default;
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinSlotTypeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the built-in slot type. To find the signature for a
     * slot type, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
     * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    BuiltinSlotTypeMetadata& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of target locales for the slot. </p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const { return m_supportedLocales; }
    inline bool SupportedLocalesHasBeenSet() const { return m_supportedLocalesHasBeenSet; }
    template<typename SupportedLocalesT = Aws::Vector<Locale>>
    void SetSupportedLocales(SupportedLocalesT&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = std::forward<SupportedLocalesT>(value); }
    template<typename SupportedLocalesT = Aws::Vector<Locale>>
    BuiltinSlotTypeMetadata& WithSupportedLocales(SupportedLocalesT&& value) { SetSupportedLocales(std::forward<SupportedLocalesT>(value)); return *this;}
    inline BuiltinSlotTypeMetadata& AddSupportedLocales(Locale value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(value); return *this; }
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
