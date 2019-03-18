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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * City information of the remote IP address.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/City">AWS API
   * Reference</a></p>
   */
  class AWS_GUARDDUTY_API City
  {
  public:
    City();
    City(Aws::Utils::Json::JsonView jsonValue);
    City& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * City name of the remote IP address.
     */
    inline const Aws::String& GetCityName() const{ return m_cityName; }

    /**
     * City name of the remote IP address.
     */
    inline bool CityNameHasBeenSet() const { return m_cityNameHasBeenSet; }

    /**
     * City name of the remote IP address.
     */
    inline void SetCityName(const Aws::String& value) { m_cityNameHasBeenSet = true; m_cityName = value; }

    /**
     * City name of the remote IP address.
     */
    inline void SetCityName(Aws::String&& value) { m_cityNameHasBeenSet = true; m_cityName = std::move(value); }

    /**
     * City name of the remote IP address.
     */
    inline void SetCityName(const char* value) { m_cityNameHasBeenSet = true; m_cityName.assign(value); }

    /**
     * City name of the remote IP address.
     */
    inline City& WithCityName(const Aws::String& value) { SetCityName(value); return *this;}

    /**
     * City name of the remote IP address.
     */
    inline City& WithCityName(Aws::String&& value) { SetCityName(std::move(value)); return *this;}

    /**
     * City name of the remote IP address.
     */
    inline City& WithCityName(const char* value) { SetCityName(value); return *this;}

  private:

    Aws::String m_cityName;
    bool m_cityNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
