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
    AWS_KENDRA_API AdditionalResultAttribute() = default;
    AWS_KENDRA_API AdditionalResultAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AdditionalResultAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key that identifies the attribute.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    AdditionalResultAttribute& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the <code>Value</code> property.</p>
     */
    inline AdditionalResultAttributeValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(AdditionalResultAttributeValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline AdditionalResultAttribute& WithValueType(AdditionalResultAttributeValueType value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the attribute value.</p>
     */
    inline const AdditionalResultAttributeValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = AdditionalResultAttributeValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = AdditionalResultAttributeValue>
    AdditionalResultAttribute& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    AdditionalResultAttributeValueType m_valueType{AdditionalResultAttributeValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;

    AdditionalResultAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
