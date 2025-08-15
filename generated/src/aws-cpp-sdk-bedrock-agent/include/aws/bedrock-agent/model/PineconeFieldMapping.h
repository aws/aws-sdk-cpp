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
   * <p>Contains the names of the fields to which to map information about the vector
   * store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PineconeFieldMapping">AWS
   * API Reference</a></p>
   */
  class PineconeFieldMapping
  {
  public:
    AWS_BEDROCKAGENT_API PineconeFieldMapping() = default;
    AWS_BEDROCKAGENT_API PineconeFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PineconeFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline const Aws::String& GetTextField() const { return m_textField; }
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }
    template<typename TextFieldT = Aws::String>
    void SetTextField(TextFieldT&& value) { m_textFieldHasBeenSet = true; m_textField = std::forward<TextFieldT>(value); }
    template<typename TextFieldT = Aws::String>
    PineconeFieldMapping& WithTextField(TextFieldT&& value) { SetTextField(std::forward<TextFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline const Aws::String& GetMetadataField() const { return m_metadataField; }
    inline bool MetadataFieldHasBeenSet() const { return m_metadataFieldHasBeenSet; }
    template<typename MetadataFieldT = Aws::String>
    void SetMetadataField(MetadataFieldT&& value) { m_metadataFieldHasBeenSet = true; m_metadataField = std::forward<MetadataFieldT>(value); }
    template<typename MetadataFieldT = Aws::String>
    PineconeFieldMapping& WithMetadataField(MetadataFieldT&& value) { SetMetadataField(std::forward<MetadataFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textField;
    bool m_textFieldHasBeenSet = false;

    Aws::String m_metadataField;
    bool m_metadataFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
