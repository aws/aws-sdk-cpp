/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The supported phone number countries.</p>
     */
    inline const Aws::Vector<PhoneNumberCountry>& GetPhoneNumberCountries() const{ return m_phoneNumberCountries; }

    /**
     * <p>The supported phone number countries.</p>
     */
    inline void SetPhoneNumberCountries(const Aws::Vector<PhoneNumberCountry>& value) { m_phoneNumberCountries = value; }

    /**
     * <p>The supported phone number countries.</p>
     */
    inline void SetPhoneNumberCountries(Aws::Vector<PhoneNumberCountry>&& value) { m_phoneNumberCountries = std::move(value); }

    /**
     * <p>The supported phone number countries.</p>
     */
    inline ListSupportedPhoneNumberCountriesResult& WithPhoneNumberCountries(const Aws::Vector<PhoneNumberCountry>& value) { SetPhoneNumberCountries(value); return *this;}

    /**
     * <p>The supported phone number countries.</p>
     */
    inline ListSupportedPhoneNumberCountriesResult& WithPhoneNumberCountries(Aws::Vector<PhoneNumberCountry>&& value) { SetPhoneNumberCountries(std::move(value)); return *this;}

    /**
     * <p>The supported phone number countries.</p>
     */
    inline ListSupportedPhoneNumberCountriesResult& AddPhoneNumberCountries(const PhoneNumberCountry& value) { m_phoneNumberCountries.push_back(value); return *this; }

    /**
     * <p>The supported phone number countries.</p>
     */
    inline ListSupportedPhoneNumberCountriesResult& AddPhoneNumberCountries(PhoneNumberCountry&& value) { m_phoneNumberCountries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PhoneNumberCountry> m_phoneNumberCountries;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
