/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A mapping of Bedrock Knowledge Base fields to Pinecone field
   * names</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PineconeFieldMapping">AWS
   * API Reference</a></p>
   */
  class PineconeFieldMapping
  {
  public:
    AWS_BEDROCKAGENT_API PineconeFieldMapping();
    AWS_BEDROCKAGENT_API PineconeFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PineconeFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTextField() const{ return m_textField; }

    
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }

    
    inline void SetTextField(const Aws::String& value) { m_textFieldHasBeenSet = true; m_textField = value; }

    
    inline void SetTextField(Aws::String&& value) { m_textFieldHasBeenSet = true; m_textField = std::move(value); }

    
    inline void SetTextField(const char* value) { m_textFieldHasBeenSet = true; m_textField.assign(value); }

    
    inline PineconeFieldMapping& WithTextField(const Aws::String& value) { SetTextField(value); return *this;}

    
    inline PineconeFieldMapping& WithTextField(Aws::String&& value) { SetTextField(std::move(value)); return *this;}

    
    inline PineconeFieldMapping& WithTextField(const char* value) { SetTextField(value); return *this;}


    
    inline const Aws::String& GetMetadataField() const{ return m_metadataField; }

    
    inline bool MetadataFieldHasBeenSet() const { return m_metadataFieldHasBeenSet; }

    
    inline void SetMetadataField(const Aws::String& value) { m_metadataFieldHasBeenSet = true; m_metadataField = value; }

    
    inline void SetMetadataField(Aws::String&& value) { m_metadataFieldHasBeenSet = true; m_metadataField = std::move(value); }

    
    inline void SetMetadataField(const char* value) { m_metadataFieldHasBeenSet = true; m_metadataField.assign(value); }

    
    inline PineconeFieldMapping& WithMetadataField(const Aws::String& value) { SetMetadataField(value); return *this;}

    
    inline PineconeFieldMapping& WithMetadataField(Aws::String&& value) { SetMetadataField(std::move(value)); return *this;}

    
    inline PineconeFieldMapping& WithMetadataField(const char* value) { SetMetadataField(value); return *this;}

  private:

    Aws::String m_textField;
    bool m_textFieldHasBeenSet = false;

    Aws::String m_metadataField;
    bool m_metadataFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
