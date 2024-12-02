/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/MetadataValueType.h>
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
    AWS_BEDROCKAGENT_API MetadataAttributeValue();
    AWS_BEDROCKAGENT_API MetadataAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MetadataAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the Boolean metadata attribute.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline MetadataAttributeValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the numeric metadata attribute.</p>
     */
    inline double GetNumberValue() const{ return m_numberValue; }
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
    inline void SetNumberValue(double value) { m_numberValueHasBeenSet = true; m_numberValue = value; }
    inline MetadataAttributeValue& WithNumberValue(double value) { SetNumberValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that define the value of the metadata attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValue() const{ return m_stringListValue; }
    inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
    inline void SetStringListValue(const Aws::Vector<Aws::String>& value) { m_stringListValueHasBeenSet = true; m_stringListValue = value; }
    inline void SetStringListValue(Aws::Vector<Aws::String>&& value) { m_stringListValueHasBeenSet = true; m_stringListValue = std::move(value); }
    inline MetadataAttributeValue& WithStringListValue(const Aws::Vector<Aws::String>& value) { SetStringListValue(value); return *this;}
    inline MetadataAttributeValue& WithStringListValue(Aws::Vector<Aws::String>&& value) { SetStringListValue(std::move(value)); return *this;}
    inline MetadataAttributeValue& AddStringListValue(const Aws::String& value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(value); return *this; }
    inline MetadataAttributeValue& AddStringListValue(Aws::String&& value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(std::move(value)); return *this; }
    inline MetadataAttributeValue& AddStringListValue(const char* value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the string metadata attribute.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline MetadataAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline MetadataAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline MetadataAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the metadata attribute.</p>
     */
    inline const MetadataValueType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MetadataValueType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MetadataValueType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MetadataAttributeValue& WithType(const MetadataValueType& value) { SetType(value); return *this;}
    inline MetadataAttributeValue& WithType(MetadataValueType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    double m_numberValue;
    bool m_numberValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringListValue;
    bool m_stringListValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    MetadataValueType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
