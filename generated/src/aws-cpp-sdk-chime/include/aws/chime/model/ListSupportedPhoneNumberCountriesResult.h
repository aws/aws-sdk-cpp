﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberCountry.h>
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
namespace Chime
{
namespace Model
{
  class ListSupportedPhoneNumberCountriesResult
  {
  public:
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult();
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The supported phone number countries.</p>
     */
    inline const Aws::Vector<PhoneNumberCountry>& GetPhoneNumberCountries() const{ return m_phoneNumberCountries; }
    inline void SetPhoneNumberCountries(const Aws::Vector<PhoneNumberCountry>& value) { m_phoneNumberCountries = value; }
    inline void SetPhoneNumberCountries(Aws::Vector<PhoneNumberCountry>&& value) { m_phoneNumberCountries = std::move(value); }
    inline ListSupportedPhoneNumberCountriesResult& WithPhoneNumberCountries(const Aws::Vector<PhoneNumberCountry>& value) { SetPhoneNumberCountries(value); return *this;}
    inline ListSupportedPhoneNumberCountriesResult& WithPhoneNumberCountries(Aws::Vector<PhoneNumberCountry>&& value) { SetPhoneNumberCountries(std::move(value)); return *this;}
    inline ListSupportedPhoneNumberCountriesResult& AddPhoneNumberCountries(const PhoneNumberCountry& value) { m_phoneNumberCountries.push_back(value); return *this; }
    inline ListSupportedPhoneNumberCountriesResult& AddPhoneNumberCountries(PhoneNumberCountry&& value) { m_phoneNumberCountries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSupportedPhoneNumberCountriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSupportedPhoneNumberCountriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSupportedPhoneNumberCountriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberCountry> m_phoneNumberCountries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
