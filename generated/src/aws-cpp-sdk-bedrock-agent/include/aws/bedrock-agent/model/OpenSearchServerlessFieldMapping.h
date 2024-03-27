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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/OpenSearchServerlessFieldMapping">AWS
   * API Reference</a></p>
   */
  class OpenSearchServerlessFieldMapping
  {
  public:
    AWS_BEDROCKAGENT_API OpenSearchServerlessFieldMapping();
    AWS_BEDROCKAGENT_API OpenSearchServerlessFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OpenSearchServerlessFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline const Aws::String& GetMetadataField() const{ return m_metadataField; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline bool MetadataFieldHasBeenSet() const { return m_metadataFieldHasBeenSet; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline void SetMetadataField(const Aws::String& value) { m_metadataFieldHasBeenSet = true; m_metadataField = value; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline void SetMetadataField(Aws::String&& value) { m_metadataFieldHasBeenSet = true; m_metadataField = std::move(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline void SetMetadataField(const char* value) { m_metadataFieldHasBeenSet = true; m_metadataField.assign(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithMetadataField(const Aws::String& value) { SetMetadataField(value); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithMetadataField(Aws::String&& value) { SetMetadataField(std::move(value)); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores metadata about the
     * vector store.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithMetadataField(const char* value) { SetMetadataField(value); return *this;}


    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline const Aws::String& GetTextField() const{ return m_textField; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline void SetTextField(const Aws::String& value) { m_textFieldHasBeenSet = true; m_textField = value; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline void SetTextField(Aws::String&& value) { m_textFieldHasBeenSet = true; m_textField = std::move(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline void SetTextField(const char* value) { m_textFieldHasBeenSet = true; m_textField.assign(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithTextField(const Aws::String& value) { SetTextField(value); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithTextField(Aws::String&& value) { SetTextField(std::move(value)); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores the raw text from your
     * data. The text is split according to the chunking strategy you choose.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithTextField(const char* value) { SetTextField(value); return *this;}


    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline const Aws::String& GetVectorField() const{ return m_vectorField; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline bool VectorFieldHasBeenSet() const { return m_vectorFieldHasBeenSet; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline void SetVectorField(const Aws::String& value) { m_vectorFieldHasBeenSet = true; m_vectorField = value; }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline void SetVectorField(Aws::String&& value) { m_vectorFieldHasBeenSet = true; m_vectorField = std::move(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline void SetVectorField(const char* value) { m_vectorFieldHasBeenSet = true; m_vectorField.assign(value); }

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithVectorField(const Aws::String& value) { SetVectorField(value); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithVectorField(Aws::String&& value) { SetVectorField(std::move(value)); return *this;}

    /**
     * <p>The name of the field in which Amazon Bedrock stores the vector embeddings
     * for your data sources.</p>
     */
    inline OpenSearchServerlessFieldMapping& WithVectorField(const char* value) { SetVectorField(value); return *this;}

  private:

    Aws::String m_metadataField;
    bool m_metadataFieldHasBeenSet = false;

    Aws::String m_textField;
    bool m_textFieldHasBeenSet = false;

    Aws::String m_vectorField;
    bool m_vectorFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
