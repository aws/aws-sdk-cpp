/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/iottwinmaker/model/ComponentResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{
  class AWS_IOTTWINMAKER_API GetEntityResult
  {
  public:
    GetEntityResult();
    GetEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the entity.</p>
     */
    inline GetEntityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the entity.</p>
     */
    inline GetEntityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the entity.</p>
     */
    inline GetEntityResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentResponse>& GetComponents() const{ return m_components; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline void SetComponents(const Aws::Map<Aws::String, ComponentResponse>& value) { m_components = value; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline void SetComponents(Aws::Map<Aws::String, ComponentResponse>&& value) { m_components = std::move(value); }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& WithComponents(const Aws::Map<Aws::String, ComponentResponse>& value) { SetComponents(value); return *this;}

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& WithComponents(Aws::Map<Aws::String, ComponentResponse>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(const Aws::String& key, const ComponentResponse& value) { m_components.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(Aws::String&& key, const ComponentResponse& value) { m_components.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(const Aws::String& key, ComponentResponse&& value) { m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(Aws::String&& key, ComponentResponse&& value) { m_components.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(const char* key, ComponentResponse&& value) { m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline GetEntityResult& AddComponents(const char* key, const ComponentResponse& value) { m_components.emplace(key, value); return *this; }


    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline GetEntityResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline GetEntityResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline GetEntityResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline GetEntityResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline GetEntityResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetEntityResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetEntityResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetEntityResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const Aws::String& value) { m_entityName = value; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(Aws::String&& value) { m_entityName = std::move(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const char* value) { m_entityName.assign(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline GetEntityResult& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline GetEntityResult& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline GetEntityResult& WithEntityName(const char* value) { SetEntityName(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the entity has associated child
     * entities.</p>
     */
    inline bool GetHasChildEntities() const{ return m_hasChildEntities; }

    /**
     * <p>A Boolean value that specifies whether the entity has associated child
     * entities.</p>
     */
    inline void SetHasChildEntities(bool value) { m_hasChildEntities = value; }

    /**
     * <p>A Boolean value that specifies whether the entity has associated child
     * entities.</p>
     */
    inline GetEntityResult& WithHasChildEntities(bool value) { SetHasChildEntities(value); return *this;}


    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityId = value; }

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityId = std::move(value); }

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline void SetParentEntityId(const char* value) { m_parentEntityId.assign(value); }

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline GetEntityResult& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline GetEntityResult& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline GetEntityResult& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}


    /**
     * <p>The current status of the entity.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the entity.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The current status of the entity.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the entity.</p>
     */
    inline GetEntityResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the entity.</p>
     */
    inline GetEntityResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline GetEntityResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline GetEntityResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetEntityResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetEntityResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetEntityResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Map<Aws::String, ComponentResponse> m_components;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_description;

    Aws::String m_entityId;

    Aws::String m_entityName;

    bool m_hasChildEntities;

    Aws::String m_parentEntityId;

    Status m_status;

    Aws::Utils::DateTime m_updateDateTime;

    Aws::String m_workspaceId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
