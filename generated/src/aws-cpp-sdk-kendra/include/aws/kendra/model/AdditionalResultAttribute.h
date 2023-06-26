/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An attribute returned from an index query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AdditionalResultAttribute">AWS
   * API Reference</a></p>
   */
  class AdditionalResultAttribute
  {
  public:
    AWS_KENDRA_API AdditionalResultAttribute();
    AWS_KENDRA_API AdditionalResultAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AdditionalResultAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline AdditionalResultAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline AdditionalResultAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline AdditionalResultAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline const AdditionalResultAttributeValueType& GetValueType() const{ return m_valueType; }

    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline void SetValueType(const AdditionalResultAttributeValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline void SetValueType(AdditionalResultAttributeValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline AdditionalResultAttribute& WithValueType(const AdditionalResultAttributeValueType& value) { SetValueType(value); return *this;}

    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline AdditionalResultAttribute& WithValueType(AdditionalResultAttributeValueType&& value) { SetValueType(std::move(value)); return *this;}


    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline const AdditionalResultAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline void SetValue(const AdditionalResultAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline void SetValue(AdditionalResultAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline AdditionalResultAttribute& WithValue(const AdditionalResultAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline AdditionalResultAttribute& WithValue(AdditionalResultAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    AdditionalResultAttributeValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;

    AdditionalResultAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
