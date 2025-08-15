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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RdsFieldMapping">AWS
   * API Reference</a></p>
   */
  class RdsFieldMapping
  {
  public:
    AWS_BEDROCKAGENT_API RdsFieldMapping() = default;
    AWS_BEDROCKAGENT_API RdsFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RdsFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in which Amazon Bedrock stores the ID for each
     * entry.</p>
     */
    inline const Aws::String& GetPrimaryKeyField() const { return m_primaryKeyField; }
    inline bool PrimaryKeyFieldHasBeenSet() const { return m_primaryKeyFieldHasBeenSet; }
    template<typename PrimaryKeyFieldT = Aws::String>
    void SetPrimaryKeyField(PrimaryKeyFieldT&& value) { m_primaryKeyFieldHasBeenSet = true; m_primaryKeyField = std::forward<PrimaryKeyFieldT>(value); }
    template<typename PrimaryKeyFieldT = Aws::String>
    RdsFieldMapping& WithPrimaryKeyField(PrimaryKeyFieldT&& value) { SetPrimaryKeyField(std::forward<PrimaryKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline const Aws::String& GetVectorField() const { return m_vectorField; }
    inline bool VectorFieldHasBeenSet() const { return m_vectorFieldHasBeenSet; }
    template<typename VectorFieldT = Aws::String>
    void SetVectorField(VectorFieldT&& value) { m_vectorFieldHasBeenSet = true; m_vectorField = std::forward<VectorFieldT>(value); }
    template<typename VectorFieldT = Aws::String>
    RdsFieldMapping& WithVectorField(VectorFieldT&& value) { SetVectorField(std::forward<VectorFieldT>(value)); return *this;}
    ///@}

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
    RdsFieldMapping& WithTextField(TextFieldT&& value) { SetTextField(std::forward<TextFieldT>(value)); return *this;}
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
    RdsFieldMapping& WithMetadataField(MetadataFieldT&& value) { SetMetadataField(std::forward<MetadataFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide a name for the universal metadata field where Amazon Bedrock will
     * store any custom metadata from your data source.</p>
     */
    inline const Aws::String& GetCustomMetadataField() const { return m_customMetadataField; }
    inline bool CustomMetadataFieldHasBeenSet() const { return m_customMetadataFieldHasBeenSet; }
    template<typename CustomMetadataFieldT = Aws::String>
    void SetCustomMetadataField(CustomMetadataFieldT&& value) { m_customMetadataFieldHasBeenSet = true; m_customMetadataField = std::forward<CustomMetadataFieldT>(value); }
    template<typename CustomMetadataFieldT = Aws::String>
    RdsFieldMapping& WithCustomMetadataField(CustomMetadataFieldT&& value) { SetCustomMetadataField(std::forward<CustomMetadataFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primaryKeyField;
    bool m_primaryKeyFieldHasBeenSet = false;

    Aws::String m_vectorField;
    bool m_vectorFieldHasBeenSet = false;

    Aws::String m_textField;
    bool m_textFieldHasBeenSet = false;

    Aws::String m_metadataField;
    bool m_metadataFieldHasBeenSet = false;

    Aws::String m_customMetadataField;
    bool m_customMetadataFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
