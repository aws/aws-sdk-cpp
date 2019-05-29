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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/EntityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>Describes the properties of an entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/EntityDescription">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API EntityDescription
  {
  public:
    EntityDescription();
    EntityDescription(Aws::Utils::Json::JsonView jsonValue);
    EntityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The entity ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The entity ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The entity ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The entity ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The entity ID.</p>
     */
    inline EntityDescription& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The entity ID.</p>
     */
    inline EntityDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The entity ID.</p>
     */
    inline EntityDescription& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The entity ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The entity ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The entity ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The entity ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The entity ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The entity ARN.</p>
     */
    inline EntityDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The entity ARN.</p>
     */
    inline EntityDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The entity ARN.</p>
     */
    inline EntityDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The entity type.</p>
     */
    inline const EntityType& GetType() const{ return m_type; }

    /**
     * <p>The entity type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The entity type.</p>
     */
    inline void SetType(const EntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The entity type.</p>
     */
    inline void SetType(EntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The entity type.</p>
     */
    inline EntityDescription& WithType(const EntityType& value) { SetType(value); return *this;}

    /**
     * <p>The entity type.</p>
     */
    inline EntityDescription& WithType(EntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time at which the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the entity was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the entity was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the entity was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the entity was created.</p>
     */
    inline EntityDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the entity was created.</p>
     */
    inline EntityDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The definition document of the entity.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition document of the entity.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition document of the entity.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition document of the entity.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition document of the entity.</p>
     */
    inline EntityDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition document of the entity.</p>
     */
    inline EntityDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    EntityType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
