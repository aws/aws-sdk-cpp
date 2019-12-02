/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/schemas/model/Type.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class AWS_SCHEMAS_API CreateSchemaRequest : public SchemasRequest
  {
  public:
    CreateSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchema"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetContent() const{ return m_content; }

    
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    
    inline CreateSchemaRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    
    inline CreateSchemaRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    
    inline CreateSchemaRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the schema.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline CreateSchemaRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline CreateSchemaRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline CreateSchemaRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    
    inline CreateSchemaRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    
    inline CreateSchemaRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    
    inline CreateSchemaRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    
    inline CreateSchemaRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    
    inline CreateSchemaRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    
    inline CreateSchemaRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>Tags associated with the schema.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline CreateSchemaRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const Type& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline CreateSchemaRequest& WithType(const Type& value) { SetType(value); return *this;}

    
    inline CreateSchemaRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
