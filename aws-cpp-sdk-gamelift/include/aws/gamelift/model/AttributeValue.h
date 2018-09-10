﻿/*
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Values for use in <a>Player</a> attribute key:value pairs. This object lets
   * you specify an attribute value using any of the valid data types: string,
   * number, string array or data map. Each <code>AttributeValue</code> object can
   * use only one of the available properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API AttributeValue
  {
  public:
    AttributeValue();
    AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline const Aws::String& GetS() const{ return m_s; }

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline void SetS(const Aws::String& value) { m_sHasBeenSet = true; m_s = value; }

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline void SetS(Aws::String&& value) { m_sHasBeenSet = true; m_s = std::move(value); }

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline void SetS(const char* value) { m_sHasBeenSet = true; m_s.assign(value); }

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline AttributeValue& WithS(const Aws::String& value) { SetS(value); return *this;}

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline AttributeValue& WithS(Aws::String&& value) { SetS(std::move(value)); return *this;}

    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
     */
    inline AttributeValue& WithS(const char* value) { SetS(value); return *this;}


    /**
     * <p>For number values, expressed as double.</p>
     */
    inline double GetN() const{ return m_n; }

    /**
     * <p>For number values, expressed as double.</p>
     */
    inline void SetN(double value) { m_nHasBeenSet = true; m_n = value; }

    /**
     * <p>For number values, expressed as double.</p>
     */
    inline AttributeValue& WithN(double value) { SetN(value); return *this;}


    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSL() const{ return m_sL; }

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline void SetSL(const Aws::Vector<Aws::String>& value) { m_sLHasBeenSet = true; m_sL = value; }

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline void SetSL(Aws::Vector<Aws::String>&& value) { m_sLHasBeenSet = true; m_sL = std::move(value); }

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline AttributeValue& WithSL(const Aws::Vector<Aws::String>& value) { SetSL(value); return *this;}

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline AttributeValue& WithSL(Aws::Vector<Aws::String>&& value) { SetSL(std::move(value)); return *this;}

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline AttributeValue& AddSL(const Aws::String& value) { m_sLHasBeenSet = true; m_sL.push_back(value); return *this; }

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline AttributeValue& AddSL(Aws::String&& value) { m_sLHasBeenSet = true; m_sL.push_back(std::move(value)); return *this; }

    /**
     * <p>For a list of up to 10 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline AttributeValue& AddSL(const char* value) { m_sLHasBeenSet = true; m_sL.push_back(value); return *this; }


    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline const Aws::Map<Aws::String, double>& GetSDM() const{ return m_sDM; }

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline void SetSDM(const Aws::Map<Aws::String, double>& value) { m_sDMHasBeenSet = true; m_sDM = value; }

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline void SetSDM(Aws::Map<Aws::String, double>&& value) { m_sDMHasBeenSet = true; m_sDM = std::move(value); }

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline AttributeValue& WithSDM(const Aws::Map<Aws::String, double>& value) { SetSDM(value); return *this;}

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline AttributeValue& WithSDM(Aws::Map<Aws::String, double>&& value) { SetSDM(std::move(value)); return *this;}

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline AttributeValue& AddSDM(const Aws::String& key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(key, value); return *this; }

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline AttributeValue& AddSDM(Aws::String&& key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(std::move(key), value); return *this; }

    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline AttributeValue& AddSDM(const char* key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(key, value); return *this; }

  private:

    Aws::String m_s;
    bool m_sHasBeenSet;

    double m_n;
    bool m_nHasBeenSet;

    Aws::Vector<Aws::String> m_sL;
    bool m_sLHasBeenSet;

    Aws::Map<Aws::String, double> m_sDM;
    bool m_sDMHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
