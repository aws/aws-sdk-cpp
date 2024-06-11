﻿/**
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
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }
    inline void SetSignature(const Aws::String& value) { m_signature = value; }
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }
    inline void SetSignature(const char* value) { m_signature.assign(value); }
    inline GetBuiltinIntentResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}
    inline GetBuiltinIntentResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}
    inline GetBuiltinIntentResult& WithSignature(const char* value) { SetSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const{ return m_supportedLocales; }
    inline void SetSupportedLocales(const Aws::Vector<Locale>& value) { m_supportedLocales = value; }
    inline void SetSupportedLocales(Aws::Vector<Locale>&& value) { m_supportedLocales = std::move(value); }
    inline GetBuiltinIntentResult& WithSupportedLocales(const Aws::Vector<Locale>& value) { SetSupportedLocales(value); return *this;}
    inline GetBuiltinIntentResult& WithSupportedLocales(Aws::Vector<Locale>&& value) { SetSupportedLocales(std::move(value)); return *this;}
    inline GetBuiltinIntentResult& AddSupportedLocales(const Locale& value) { m_supportedLocales.push_back(value); return *this; }
    inline GetBuiltinIntentResult& AddSupportedLocales(Locale&& value) { m_supportedLocales.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline const Aws::Vector<BuiltinIntentSlot>& GetSlots() const{ return m_slots; }
    inline void SetSlots(const Aws::Vector<BuiltinIntentSlot>& value) { m_slots = value; }
    inline void SetSlots(Aws::Vector<BuiltinIntentSlot>&& value) { m_slots = std::move(value); }
    inline GetBuiltinIntentResult& WithSlots(const Aws::Vector<BuiltinIntentSlot>& value) { SetSlots(value); return *this;}
    inline GetBuiltinIntentResult& WithSlots(Aws::Vector<BuiltinIntentSlot>&& value) { SetSlots(std::move(value)); return *this;}
    inline GetBuiltinIntentResult& AddSlots(const BuiltinIntentSlot& value) { m_slots.push_back(value); return *this; }
    inline GetBuiltinIntentResult& AddSlots(BuiltinIntentSlot&& value) { m_slots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBuiltinIntentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBuiltinIntentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBuiltinIntentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_signature;

    Aws::Vector<Locale> m_supportedLocales;

    Aws::Vector<BuiltinIntentSlot> m_slots;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
