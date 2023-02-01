/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that contains information about an entity.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/EntitySummary">AWS
   * API Reference</a></p>
   */
  class EntitySummary
  {
  public:
    AWS_IOTTWINMAKER_API EntitySummary();
    AWS_IOTTWINMAKER_API EntitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API EntitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntitySummary& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntitySummary& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntitySummary& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }

    /**
     * <p>The name of the entity.</p>
     */
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline EntitySummary& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline EntitySummary& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline EntitySummary& WithEntityName(const char* value) { SetEntityName(value); return *this;}


    /**
     * <p>The ARN of the entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline EntitySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the entity.</p>
     */
    inline EntitySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the entity.</p>
     */
    inline EntitySummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the parent entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = value; }

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::move(value); }

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline void SetParentEntityId(const char* value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId.assign(value); }

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline EntitySummary& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline EntitySummary& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent entity.</p>
     */
    inline EntitySummary& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}


    /**
     * <p>The current status of the entity.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the entity.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the entity.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the entity.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the entity.</p>
     */
    inline EntitySummary& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the entity.</p>
     */
    inline EntitySummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the entity.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline EntitySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline EntitySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline EntitySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the entity has child entities or
     * not.</p>
     */
    inline bool GetHasChildEntities() const{ return m_hasChildEntities; }

    /**
     * <p>A Boolean value that specifies whether the entity has child entities or
     * not.</p>
     */
    inline bool HasChildEntitiesHasBeenSet() const { return m_hasChildEntitiesHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the entity has child entities or
     * not.</p>
     */
    inline void SetHasChildEntities(bool value) { m_hasChildEntitiesHasBeenSet = true; m_hasChildEntities = value; }

    /**
     * <p>A Boolean value that specifies whether the entity has child entities or
     * not.</p>
     */
    inline EntitySummary& WithHasChildEntities(bool value) { SetHasChildEntities(value); return *this;}


    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline EntitySummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline EntitySummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline EntitySummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The last date and time when the entity was updated.</p>
     */
    inline EntitySummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_hasChildEntities;
    bool m_hasChildEntitiesHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
