/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/AttributeType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Details about a metadata attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/MetadataAttributeSchema">AWS
   * API Reference</a></p>
   */
  class MetadataAttributeSchema
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API MetadataAttributeSchema();
    AWS_BEDROCKAGENTRUNTIME_API MetadataAttributeSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API MetadataAttributeSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MetadataAttributeSchema& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MetadataAttributeSchema& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MetadataAttributeSchema& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute's key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline MetadataAttributeSchema& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline MetadataAttributeSchema& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline MetadataAttributeSchema& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute's type.</p>
     */
    inline const AttributeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AttributeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MetadataAttributeSchema& WithType(const AttributeType& value) { SetType(value); return *this;}
    inline MetadataAttributeSchema& WithType(AttributeType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    AttributeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
