/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
  class GetEntityResult
  {
  public:
    AWS_IOTTWINMAKER_API GetEntityResult();
    AWS_IOTTWINMAKER_API GetEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }
    inline GetEntityResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline GetEntityResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline GetEntityResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline void SetEntityName(const Aws::String& value) { m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityName.assign(value); }
    inline GetEntityResult& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline GetEntityResult& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline GetEntityResult& WithEntityName(const char* value) { SetEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetEntityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetEntityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetEntityResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the entity.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetEntityResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetEntityResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline GetEntityResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline GetEntityResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline GetEntityResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEntityResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEntityResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEntityResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentResponse>& GetComponents() const{ return m_components; }
    inline void SetComponents(const Aws::Map<Aws::String, ComponentResponse>& value) { m_components = value; }
    inline void SetComponents(Aws::Map<Aws::String, ComponentResponse>&& value) { m_components = std::move(value); }
    inline GetEntityResult& WithComponents(const Aws::Map<Aws::String, ComponentResponse>& value) { SetComponents(value); return *this;}
    inline GetEntityResult& WithComponents(Aws::Map<Aws::String, ComponentResponse>&& value) { SetComponents(std::move(value)); return *this;}
    inline GetEntityResult& AddComponents(const Aws::String& key, const ComponentResponse& value) { m_components.emplace(key, value); return *this; }
    inline GetEntityResult& AddComponents(Aws::String&& key, const ComponentResponse& value) { m_components.emplace(std::move(key), value); return *this; }
    inline GetEntityResult& AddComponents(const Aws::String& key, ComponentResponse&& value) { m_components.emplace(key, std::move(value)); return *this; }
    inline GetEntityResult& AddComponents(Aws::String&& key, ComponentResponse&& value) { m_components.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEntityResult& AddComponents(const char* key, ComponentResponse&& value) { m_components.emplace(key, std::move(value)); return *this; }
    inline GetEntityResult& AddComponents(const char* key, const ComponentResponse& value) { m_components.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the parent entity for this entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityId = value; }
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityId = std::move(value); }
    inline void SetParentEntityId(const char* value) { m_parentEntityId.assign(value); }
    inline GetEntityResult& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}
    inline GetEntityResult& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}
    inline GetEntityResult& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the entity has associated child
     * entities.</p>
     */
    inline bool GetHasChildEntities() const{ return m_hasChildEntities; }
    inline void SetHasChildEntities(bool value) { m_hasChildEntities = value; }
    inline GetEntityResult& WithHasChildEntities(bool value) { SetHasChildEntities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline GetEntityResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline GetEntityResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }
    inline GetEntityResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline GetEntityResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The syncSource of the sync job, if this entity was created by a sync job.</p>
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }
    inline void SetSyncSource(const Aws::String& value) { m_syncSource = value; }
    inline void SetSyncSource(Aws::String&& value) { m_syncSource = std::move(value); }
    inline void SetSyncSource(const char* value) { m_syncSource.assign(value); }
    inline GetEntityResult& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}
    inline GetEntityResult& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}
    inline GetEntityResult& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all components are returned in the API response. The
     * maximum number of components returned is 30.</p>
     */
    inline bool GetAreAllComponentsReturned() const{ return m_areAllComponentsReturned; }
    inline void SetAreAllComponentsReturned(bool value) { m_areAllComponentsReturned = value; }
    inline GetEntityResult& WithAreAllComponentsReturned(bool value) { SetAreAllComponentsReturned(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_entityId;

    Aws::String m_entityName;

    Aws::String m_arn;

    Status m_status;

    Aws::String m_workspaceId;

    Aws::String m_description;

    Aws::Map<Aws::String, ComponentResponse> m_components;

    Aws::String m_parentEntityId;

    bool m_hasChildEntities;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;

    Aws::String m_syncSource;

    bool m_areAllComponentsReturned;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
