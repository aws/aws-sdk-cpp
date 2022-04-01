﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   *  <p>This object belongs to the <a>CreatePredictor</a> operation. If you
   * created your predictor with <a>CreateAutoPredictor</a>, see
   * <a>AdditionalDataset</a>.</p>  <p>Describes a supplementary feature of a
   * dataset group. This object is part of the <a>InputDataConfig</a> object.
   * Forecast supports the Weather Index and Holidays built-in featurizations.</p>
   * <p> <b>Weather Index</b> </p> <p>The Amazon Forecast Weather Index is a built-in
   * featurization that incorporates historical and projected weather information
   * into your model. The Weather Index supplements your datasets with over two years
   * of historical weather data and up to 14 days of projected weather data. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/weather.html">Amazon
   * Forecast Weather Index</a>.</p> <p> <b>Holidays</b> </p> <p>Holidays is a
   * built-in featurization that incorporates a feature-engineered dataset of
   * national holiday information into your model. It provides native support for the
   * holiday calendars of 66 countries. To view the holiday calendars, refer to the
   * <a href="http://jollyday.sourceforge.net/data.html">Jollyday</a> library. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/holidays.html">Holidays
   * Featurization</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/SupplementaryFeature">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API SupplementaryFeature
  {
  public:
    SupplementaryFeature();
    SupplementaryFeature(Aws::Utils::Json::JsonView jsonValue);
    SupplementaryFeature& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline SupplementaryFeature& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline SupplementaryFeature& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature. Valid values: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline SupplementaryFeature& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline SupplementaryFeature& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline SupplementaryFeature& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, set the value to
     * <code>"true"</code> </p> <p> <b>Holidays</b> </p> <p>To enable Holidays, specify
     * a country with one of the following two-letter country codes:</p> <ul> <li>
     * <p>"AL" - ALBANIA</p> </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" -
     * AUSTRIA</p> </li> <li> <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA
     * HERZEGOVINA</p> </li> <li> <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" -
     * BULGARIA</p> </li> <li> <p>"BO" - BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p>
     * </li> <li> <p>"BY" - BELARUS</p> </li> <li> <p>"CA" - CANADA</p> </li> <li>
     * <p>"CL" - CHILE</p> </li> <li> <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA
     * RICA</p> </li> <li> <p>"HR" - CROATIA</p> </li> <li> <p>"CZ" - CZECH
     * REPUBLIC</p> </li> <li> <p>"DK" - DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p>
     * </li> <li> <p>"EE" - ESTONIA</p> </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li>
     * <p>"FI" - FINLAND</p> </li> <li> <p>"FR" - FRANCE</p> </li> <li> <p>"DE" -
     * GERMANY</p> </li> <li> <p>"GR" - GREECE</p> </li> <li> <p>"HU" - HUNGARY</p>
     * </li> <li> <p>"IS" - ICELAND</p> </li> <li> <p>"IN" - INDIA</p> </li> <li>
     * <p>"IE" - IRELAND</p> </li> <li> <p>"IT" - ITALY</p> </li> <li> <p>"JP" -
     * JAPAN</p> </li> <li> <p>"KZ" - KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p>
     * </li> <li> <p>"LV" - LATVIA</p> </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li>
     * <li> <p>"LT" - LITHUANIA</p> </li> <li> <p>"LU" - LUXEMBOURG</p> </li> <li>
     * <p>"MK" - MACEDONIA</p> </li> <li> <p>"MT" - MALTA</p> </li> <li> <p>"MX" -
     * MEXICO</p> </li> <li> <p>"MD" - MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p>
     * </li> <li> <p>"NL" - NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li>
     * <li> <p>"NI" - NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO"
     * - NORWAY</p> </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p>
     * </li> <li> <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT"
     * - PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline SupplementaryFeature& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
