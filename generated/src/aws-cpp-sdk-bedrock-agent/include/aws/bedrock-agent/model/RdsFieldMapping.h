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
   * <p>A mapping of Bedrock Knowledge Base fields to RDS column names</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RdsFieldMapping">AWS
   * API Reference</a></p>
   */
  class RdsFieldMapping
  {
  public:
    AWS_BEDROCKAGENT_API RdsFieldMapping();
    AWS_BEDROCKAGENT_API RdsFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RdsFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPrimaryKeyField() const{ return m_primaryKeyField; }

    
    inline bool PrimaryKeyFieldHasBeenSet() const { return m_primaryKeyFieldHasBeenSet; }

    
    inline void SetPrimaryKeyField(const Aws::String& value) { m_primaryKeyFieldHasBeenSet = true; m_primaryKeyField = value; }

    
    inline void SetPrimaryKeyField(Aws::String&& value) { m_primaryKeyFieldHasBeenSet = true; m_primaryKeyField = std::move(value); }

    
    inline void SetPrimaryKeyField(const char* value) { m_primaryKeyFieldHasBeenSet = true; m_primaryKeyField.assign(value); }

    
    inline RdsFieldMapping& WithPrimaryKeyField(const Aws::String& value) { SetPrimaryKeyField(value); return *this;}

    
    inline RdsFieldMapping& WithPrimaryKeyField(Aws::String&& value) { SetPrimaryKeyField(std::move(value)); return *this;}

    
    inline RdsFieldMapping& WithPrimaryKeyField(const char* value) { SetPrimaryKeyField(value); return *this;}


    
    inline const Aws::String& GetVectorField() const{ return m_vectorField; }

    
    inline bool VectorFieldHasBeenSet() const { return m_vectorFieldHasBeenSet; }

    
    inline void SetVectorField(const Aws::String& value) { m_vectorFieldHasBeenSet = true; m_vectorField = value; }

    
    inline void SetVectorField(Aws::String&& value) { m_vectorFieldHasBeenSet = true; m_vectorField = std::move(value); }

    
    inline void SetVectorField(const char* value) { m_vectorFieldHasBeenSet = true; m_vectorField.assign(value); }

    
    inline RdsFieldMapping& WithVectorField(const Aws::String& value) { SetVectorField(value); return *this;}

    
    inline RdsFieldMapping& WithVectorField(Aws::String&& value) { SetVectorField(std::move(value)); return *this;}

    
    inline RdsFieldMapping& WithVectorField(const char* value) { SetVectorField(value); return *this;}


    
    inline const Aws::String& GetTextField() const{ return m_textField; }

    
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }

    
    inline void SetTextField(const Aws::String& value) { m_textFieldHasBeenSet = true; m_textField = value; }

    
    inline void SetTextField(Aws::String&& value) { m_textFieldHasBeenSet = true; m_textField = std::move(value); }

    
    inline void SetTextField(const char* value) { m_textFieldHasBeenSet = true; m_textField.assign(value); }

    
    inline RdsFieldMapping& WithTextField(const Aws::String& value) { SetTextField(value); return *this;}

    
    inline RdsFieldMapping& WithTextField(Aws::String&& value) { SetTextField(std::move(value)); return *this;}

    
    inline RdsFieldMapping& WithTextField(const char* value) { SetTextField(value); return *this;}


    
    inline const Aws::String& GetMetadataField() const{ return m_metadataField; }

    
    inline bool MetadataFieldHasBeenSet() const { return m_metadataFieldHasBeenSet; }

    
    inline void SetMetadataField(const Aws::String& value) { m_metadataFieldHasBeenSet = true; m_metadataField = value; }

    
    inline void SetMetadataField(Aws::String&& value) { m_metadataFieldHasBeenSet = true; m_metadataField = std::move(value); }

    
    inline void SetMetadataField(const char* value) { m_metadataFieldHasBeenSet = true; m_metadataField.assign(value); }

    
    inline RdsFieldMapping& WithMetadataField(const Aws::String& value) { SetMetadataField(value); return *this;}

    
    inline RdsFieldMapping& WithMetadataField(Aws::String&& value) { SetMetadataField(std::move(value)); return *this;}

    
    inline RdsFieldMapping& WithMetadataField(const char* value) { SetMetadataField(value); return *this;}

  private:

    Aws::String m_primaryKeyField;
    bool m_primaryKeyFieldHasBeenSet = false;

    Aws::String m_vectorField;
    bool m_vectorFieldHasBeenSet = false;

    Aws::String m_textField;
    bool m_textFieldHasBeenSet = false;

    Aws::String m_metadataField;
    bool m_metadataFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
