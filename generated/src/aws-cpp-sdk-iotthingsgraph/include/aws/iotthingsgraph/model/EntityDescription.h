/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EntityDescription
  {
  public:
    AWS_IOTTHINGSGRAPH_API EntityDescription();
    AWS_IOTTHINGSGRAPH_API EntityDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API EntityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EntityDescription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EntityDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EntityDescription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EntityDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EntityDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EntityDescription& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type.</p>
     */
    inline const EntityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EntityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EntityDescription& WithType(const EntityType& value) { SetType(value); return *this;}
    inline EntityDescription& WithType(EntityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EntityDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EntityDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition document of the entity.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline EntityDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}
    inline EntityDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    EntityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
