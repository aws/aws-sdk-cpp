/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/BuiltinIntentSlot.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{
  class GetBuiltinIntentResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    GetBuiltinIntentResult& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const { return m_supportedLocales; }
    template<typename SupportedLocalesT = Aws::Vector<Locale>>
    void SetSupportedLocales(SupportedLocalesT&& value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales = std::forward<SupportedLocalesT>(value); }
    template<typename SupportedLocalesT = Aws::Vector<Locale>>
    GetBuiltinIntentResult& WithSupportedLocales(SupportedLocalesT&& value) { SetSupportedLocales(std::forward<SupportedLocalesT>(value)); return *this;}
    inline GetBuiltinIntentResult& AddSupportedLocales(Locale value) { m_supportedLocalesHasBeenSet = true; m_supportedLocales.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline const Aws::Vector<BuiltinIntentSlot>& GetSlots() const { return m_slots; }
    template<typename SlotsT = Aws::Vector<BuiltinIntentSlot>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Vector<BuiltinIntentSlot>>
    GetBuiltinIntentResult& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsT = BuiltinIntentSlot>
    GetBuiltinIntentResult& AddSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots.emplace_back(std::forward<SlotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBuiltinIntentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::Vector<Locale> m_supportedLocales;
    bool m_supportedLocalesHasBeenSet = false;

    Aws::Vector<BuiltinIntentSlot> m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
