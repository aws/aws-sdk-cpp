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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>The combination of an attribute key and an attribute value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttributeKeyAndValue">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API AttributeKeyAndValue
  {
  public:
    AttributeKeyAndValue();
    AttributeKeyAndValue(Aws::Utils::Json::JsonView jsonValue);
    AttributeKeyAndValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the attribute.</p>
     */
    inline const AttributeKey& GetKey() const{ return m_key; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline void SetKey(const AttributeKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline void SetKey(AttributeKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithKey(const AttributeKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithKey(AttributeKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value of the attribute.</p>
     */
    inline const TypedAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const TypedAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(TypedAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithValue(const TypedAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithValue(TypedAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    AttributeKey m_key;
    bool m_keyHasBeenSet;

    TypedAttributeValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
