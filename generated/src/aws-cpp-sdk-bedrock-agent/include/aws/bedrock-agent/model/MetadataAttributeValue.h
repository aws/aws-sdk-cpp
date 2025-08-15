/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/MetadataValueType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the value of the metadata attribute. Choose a <code>type</code> and
   * include the field that corresponds to it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MetadataAttributeValue">AWS
   * API Reference</a></p>
   */
  class MetadataAttributeValue
  {
  public:
    AWS_BEDROCKAGENT_API MetadataAttributeValue() = default;
    AWS_BEDROCKAGENT_API MetadataAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MetadataAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the metadata attribute.</p>
     */
    inline MetadataValueType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MetadataValueType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MetadataAttributeValue& WithType(MetadataValueType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the numeric metadata attribute.</p>
     */
    inline double GetNumberValue() const { return m_numberValue; }
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
    inline void SetNumberValue(double value) { m_numberValueHasBeenSet = true; m_numberValue = value; }
    inline MetadataAttributeValue& WithNumberValue(double value) { SetNumberValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the Boolean metadata attribute.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline MetadataAttributeValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the string metadata attribute.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    MetadataAttributeValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that define the value of the metadata attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
    inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
    template<typename StringListValueT = Aws::Vector<Aws::String>>
    void SetStringListValue(StringListValueT&& value) { m_stringListValueHasBeenSet = true; m_stringListValue = std::forward<StringListValueT>(value); }
    template<typename StringListValueT = Aws::Vector<Aws::String>>
    MetadataAttributeValue& WithStringListValue(StringListValueT&& value) { SetStringListValue(std::forward<StringListValueT>(value)); return *this;}
    template<typename StringListValueT = Aws::String>
    MetadataAttributeValue& AddStringListValue(StringListValueT&& value) { m_stringListValueHasBeenSet = true; m_stringListValue.emplace_back(std::forward<StringListValueT>(value)); return *this; }
    ///@}
  private:

    MetadataValueType m_type{MetadataValueType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_numberValue{0.0};
    bool m_numberValueHasBeenSet = false;

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringListValue;
    bool m_stringListValueHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
