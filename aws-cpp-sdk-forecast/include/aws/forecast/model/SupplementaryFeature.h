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
   * <p>Describes a supplementary feature of a dataset group. This object is part of
   * the <a>InputDataConfig</a> object.</p> <p>The only supported feature is a
   * holiday calendar. If you use the calendar, all data in the datasets should
   * belong to the same country as the calendar. For the holiday calendar data, see
   * the <a href="http://jollyday.sourceforge.net/data.html">Jollyday</a> web
   * site.</p><p><h3>See Also:</h3>   <a
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
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline SupplementaryFeature& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline SupplementaryFeature& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature. This must be "holiday".</p>
     */
    inline SupplementaryFeature& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline SupplementaryFeature& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
     */
    inline SupplementaryFeature& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>One of the following 2 letter country codes:</p> <ul> <li> <p>"AU" -
     * AUSTRALIA</p> </li> <li> <p>"DE" - GERMANY</p> </li> <li> <p>"JP" - JAPAN</p>
     * </li> <li> <p>"US" - UNITED_STATES</p> </li> <li> <p>"UK" - UNITED_KINGDOM</p>
     * </li> </ul>
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
