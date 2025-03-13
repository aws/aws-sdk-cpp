/**
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
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult() = default;
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListSupportedPhoneNumberCountriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The supported phone number countries.</p>
     */
    inline const Aws::Vector<PhoneNumberCountry>& GetPhoneNumberCountries() const { return m_phoneNumberCountries; }
    template<typename PhoneNumberCountriesT = Aws::Vector<PhoneNumberCountry>>
    void SetPhoneNumberCountries(PhoneNumberCountriesT&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = std::forward<PhoneNumberCountriesT>(value); }
    template<typename PhoneNumberCountriesT = Aws::Vector<PhoneNumberCountry>>
    ListSupportedPhoneNumberCountriesResult& WithPhoneNumberCountries(PhoneNumberCountriesT&& value) { SetPhoneNumberCountries(std::forward<PhoneNumberCountriesT>(value)); return *this;}
    template<typename PhoneNumberCountriesT = PhoneNumberCountry>
    ListSupportedPhoneNumberCountriesResult& AddPhoneNumberCountries(PhoneNumberCountriesT&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.emplace_back(std::forward<PhoneNumberCountriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSupportedPhoneNumberCountriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberCountry> m_phoneNumberCountries;
    bool m_phoneNumberCountriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
