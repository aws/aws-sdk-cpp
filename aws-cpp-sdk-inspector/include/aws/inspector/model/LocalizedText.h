/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/LocalizedTextKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Parameter.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>The textual identifier. This data type is used as the request parameter in
   * the <a>LocalizeText</a> action.</p>
   */
  class AWS_INSPECTOR_API LocalizedText
  {
  public:
    LocalizedText();
    LocalizedText(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalizedText& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The facility and id properties of the <a>LocalizedTextKey</a> data type.</p>
     */
    inline const LocalizedTextKey& GetKey() const{ return m_key; }

    /**
     * <p>The facility and id properties of the <a>LocalizedTextKey</a> data type.</p>
     */
    inline void SetKey(const LocalizedTextKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The facility and id properties of the <a>LocalizedTextKey</a> data type.</p>
     */
    inline void SetKey(LocalizedTextKey&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The facility and id properties of the <a>LocalizedTextKey</a> data type.</p>
     */
    inline LocalizedText& WithKey(const LocalizedTextKey& value) { SetKey(value); return *this;}

    /**
     * <p>The facility and id properties of the <a>LocalizedTextKey</a> data type.</p>
     */
    inline LocalizedText& WithKey(LocalizedTextKey&& value) { SetKey(value); return *this;}

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline LocalizedText& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline LocalizedText& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline LocalizedText& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Values for the dynamic elements of the string specified by the textual
     * identifier.</p>
     */
    inline LocalizedText& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

  private:
    LocalizedTextKey m_key;
    bool m_keyHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
