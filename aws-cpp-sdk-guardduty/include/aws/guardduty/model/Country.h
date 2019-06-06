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

  class AWS_GUARDDUTY_API Country
  {
  public:
    Country();
    Country(Aws::Utils::Json::JsonView jsonValue);
    Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = std::move(value); }

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(Aws::String&& value) { SetCountryName(std::move(value)); return *this;}

    /**
     * <p>Country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(const char* value) { SetCountryName(value); return *this;}

  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
