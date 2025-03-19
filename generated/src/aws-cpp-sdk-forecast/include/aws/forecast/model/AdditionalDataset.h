/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an additional dataset. This object is part of the <a>DataConfig</a>
   * object. Forecast supports the Weather Index and Holidays additional
   * datasets.</p> <p> <b>Weather Index</b> </p> <p>The Amazon Forecast Weather Index
   * is a built-in dataset that incorporates historical and projected weather
   * information into your model. The Weather Index supplements your datasets with
   * over two years of historical weather data and up to 14 days of projected weather
   * data. For more information, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/weather.html">Amazon
   * Forecast Weather Index</a>.</p> <p> <b>Holidays</b> </p> <p>Holidays is a
   * built-in dataset that incorporates national holiday information into your model.
   * It provides native support for the holiday calendars of 66 countries. To view
   * the holiday calendars, refer to the <a
   * href="http://jollyday.sourceforge.net/data.html">Jollyday</a> library. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/holidays.html">Holidays
   * Featurization</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/AdditionalDataset">AWS
   * API Reference</a></p>
   */
  class AdditionalDataset
  {
  public:
    AWS_FORECASTSERVICE_API AdditionalDataset() = default;
    AWS_FORECASTSERVICE_API AdditionalDataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API AdditionalDataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the additional dataset. Valid names: <code>"holiday"</code> and
     * <code>"weather"</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AdditionalDataset& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Weather Index</b> </p> <p>To enable the Weather Index, do not specify a
     * value for <code>Configuration</code>.</p> <p> <b>Holidays</b> </p> <p>
     * <b>Holidays</b> </p> <p>To enable Holidays, set <code>CountryCode</code> to one
     * of the following two-letter country codes:</p> <ul> <li> <p>"AL" - ALBANIA</p>
     * </li> <li> <p>"AR" - ARGENTINA</p> </li> <li> <p>"AT" - AUSTRIA</p> </li> <li>
     * <p>"AU" - AUSTRALIA</p> </li> <li> <p>"BA" - BOSNIA HERZEGOVINA</p> </li> <li>
     * <p>"BE" - BELGIUM</p> </li> <li> <p>"BG" - BULGARIA</p> </li> <li> <p>"BO" -
     * BOLIVIA</p> </li> <li> <p>"BR" - BRAZIL</p> </li> <li> <p>"BY" - BELARUS</p>
     * </li> <li> <p>"CA" - CANADA</p> </li> <li> <p>"CL" - CHILE</p> </li> <li>
     * <p>"CO" - COLOMBIA</p> </li> <li> <p>"CR" - COSTA RICA</p> </li> <li> <p>"HR" -
     * CROATIA</p> </li> <li> <p>"CZ" - CZECH REPUBLIC</p> </li> <li> <p>"DK" -
     * DENMARK</p> </li> <li> <p>"EC" - ECUADOR</p> </li> <li> <p>"EE" - ESTONIA</p>
     * </li> <li> <p>"ET" - ETHIOPIA</p> </li> <li> <p>"FI" - FINLAND</p> </li> <li>
     * <p>"FR" - FRANCE</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"GR" -
     * GREECE</p> </li> <li> <p>"HU" - HUNGARY</p> </li> <li> <p>"IS" - ICELAND</p>
     * </li> <li> <p>"IN" - INDIA</p> </li> <li> <p>"IE" - IRELAND</p> </li> <li>
     * <p>"IT" - ITALY</p> </li> <li> <p>"JP" - JAPAN</p> </li> <li> <p>"KZ" -
     * KAZAKHSTAN</p> </li> <li> <p>"KR" - KOREA</p> </li> <li> <p>"LV" - LATVIA</p>
     * </li> <li> <p>"LI" - LIECHTENSTEIN</p> </li> <li> <p>"LT" - LITHUANIA</p> </li>
     * <li> <p>"LU" - LUXEMBOURG</p> </li> <li> <p>"MK" - MACEDONIA</p> </li> <li>
     * <p>"MT" - MALTA</p> </li> <li> <p>"MX" - MEXICO</p> </li> <li> <p>"MD" -
     * MOLDOVA</p> </li> <li> <p>"ME" - MONTENEGRO</p> </li> <li> <p>"NL" -
     * NETHERLANDS</p> </li> <li> <p>"NZ" - NEW ZEALAND</p> </li> <li> <p>"NI" -
     * NICARAGUA</p> </li> <li> <p>"NG" - NIGERIA</p> </li> <li> <p>"NO" - NORWAY</p>
     * </li> <li> <p>"PA" - PANAMA</p> </li> <li> <p>"PY" - PARAGUAY</p> </li> <li>
     * <p>"PE" - PERU</p> </li> <li> <p>"PL" - POLAND</p> </li> <li> <p>"PT" -
     * PORTUGAL</p> </li> <li> <p>"RO" - ROMANIA</p> </li> <li> <p>"RU" - RUSSIA</p>
     * </li> <li> <p>"RS" - SERBIA</p> </li> <li> <p>"SK" - SLOVAKIA</p> </li> <li>
     * <p>"SI" - SLOVENIA</p> </li> <li> <p>"ZA" - SOUTH AFRICA</p> </li> <li> <p>"ES"
     * - SPAIN</p> </li> <li> <p>"SE" - SWEDEN</p> </li> <li> <p>"CH" - SWITZERLAND</p>
     * </li> <li> <p>"UA" - UKRAINE</p> </li> <li> <p>"AE" - UNITED ARAB EMIRATES</p>
     * </li> <li> <p>"US" - UNITED STATES</p> </li> <li> <p>"UK" - UNITED KINGDOM</p>
     * </li> <li> <p>"UY" - URUGUAY</p> </li> <li> <p>"VE" - VENEZUELA</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AdditionalDataset& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationKeyT = Aws::String, typename ConfigurationValueT = Aws::Vector<Aws::String>>
    AdditionalDataset& AddConfiguration(ConfigurationKeyT&& key, ConfigurationValueT&& value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(std::forward<ConfigurationKeyT>(key), std::forward<ConfigurationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
