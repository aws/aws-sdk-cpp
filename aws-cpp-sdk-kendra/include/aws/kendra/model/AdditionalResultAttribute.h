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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/AdditionalResultAttributeValueType.h>
#include <aws/kendra/model/AdditionalResultAttributeValue.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AdditionalResultAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API AdditionalResultAttribute
  {
  public:
    AdditionalResultAttribute();
    AdditionalResultAttribute(Aws::Utils::Json::JsonView jsonValue);
    AdditionalResultAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p/>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p/>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p/>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p/>
     */
    inline const AdditionalResultAttributeValueType& GetValueType() const{ return m_valueType; }

    /**
     * <p/>
     */
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetValueType(const AdditionalResultAttributeValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

    /**
     * <p/>
     */
    inline void SetValueType(AdditionalResultAttributeValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithValueType(const AdditionalResultAttributeValueType& value) { SetValueType(value); return *this;}

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithValueType(AdditionalResultAttributeValueType&& value) { SetValueType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AdditionalResultAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p/>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetValue(const AdditionalResultAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p/>
     */
    inline void SetValue(AdditionalResultAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithValue(const AdditionalResultAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p/>
     */
    inline AdditionalResultAttribute& WithValue(AdditionalResultAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    AdditionalResultAttributeValueType m_valueType;
    bool m_valueTypeHasBeenSet;

    AdditionalResultAttributeValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
