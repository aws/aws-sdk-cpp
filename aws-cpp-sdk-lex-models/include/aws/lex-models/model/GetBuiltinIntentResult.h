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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentResult
  {
  public:
    GetBuiltinIntentResult();
    GetBuiltinIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBuiltinIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signature = value; }

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline void SetSignature(const char* value) { m_signature.assign(value); }

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline GetBuiltinIntentResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline GetBuiltinIntentResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a built-in intent.</p>
     */
    inline GetBuiltinIntentResult& WithSignature(const char* value) { SetSignature(value); return *this;}


    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline const Aws::Vector<Locale>& GetSupportedLocales() const{ return m_supportedLocales; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline void SetSupportedLocales(const Aws::Vector<Locale>& value) { m_supportedLocales = value; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline void SetSupportedLocales(Aws::Vector<Locale>&& value) { m_supportedLocales = std::move(value); }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentResult& WithSupportedLocales(const Aws::Vector<Locale>& value) { SetSupportedLocales(value); return *this;}

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentResult& WithSupportedLocales(Aws::Vector<Locale>&& value) { SetSupportedLocales(std::move(value)); return *this;}

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentResult& AddSupportedLocales(const Locale& value) { m_supportedLocales.push_back(value); return *this; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentResult& AddSupportedLocales(Locale&& value) { m_supportedLocales.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline const Aws::Vector<BuiltinIntentSlot>& GetSlots() const{ return m_slots; }

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline void SetSlots(const Aws::Vector<BuiltinIntentSlot>& value) { m_slots = value; }

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline void SetSlots(Aws::Vector<BuiltinIntentSlot>&& value) { m_slots = std::move(value); }

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline GetBuiltinIntentResult& WithSlots(const Aws::Vector<BuiltinIntentSlot>& value) { SetSlots(value); return *this;}

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline GetBuiltinIntentResult& WithSlots(Aws::Vector<BuiltinIntentSlot>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline GetBuiltinIntentResult& AddSlots(const BuiltinIntentSlot& value) { m_slots.push_back(value); return *this; }

    /**
     * <p>An array of <code>BuiltinIntentSlot</code> objects, one entry for each slot
     * type in the intent.</p>
     */
    inline GetBuiltinIntentResult& AddSlots(BuiltinIntentSlot&& value) { m_slots.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_signature;

    Aws::Vector<Locale> m_supportedLocales;

    Aws::Vector<BuiltinIntentSlot> m_slots;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
