/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/MetadataAttributeValue.h>
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
   * <p>Contains information about a metadata attribute.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MetadataAttribute">AWS
   * API Reference</a></p>
   */
  class MetadataAttribute
  {
  public:
    AWS_BEDROCKAGENT_API MetadataAttribute();
    AWS_BEDROCKAGENT_API MetadataAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MetadataAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the metadata attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline MetadataAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline MetadataAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline MetadataAttribute& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the value of the metadata attribute.</p>
     */
    inline const MetadataAttributeValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MetadataAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MetadataAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline MetadataAttribute& WithValue(const MetadataAttributeValue& value) { SetValue(value); return *this;}
    inline MetadataAttribute& WithValue(MetadataAttributeValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    MetadataAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
