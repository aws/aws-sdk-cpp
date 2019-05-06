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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A request for information about whether a specified geographic location is
   * supported for Amazon Route 53 geolocation resource record sets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetGeoLocationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetGeoLocationRequest : public Route53Request
  {
  public:
    GetGeoLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeoLocation"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}

    /**
     * <p>Amazon Route 53 supports the following continent codes:</p> <ul> <li> <p>
     * <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>: Antarctica</p> </li> <li> <p>
     * <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>: Europe</p> </li> <li> <p>
     * <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North America</p> </li> <li>
     * <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}


    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>Amazon Route 53 uses the one- to three-letter subdivision codes that are
     * specified in <a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO
     * standard 3166-1 alpha-2</a>. Route 53 doesn't support subdivision codes for all
     * countries. If you specify <code>subdivisioncode</code>, you must also specify
     * <code>countrycode</code>. </p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}

  private:

    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
