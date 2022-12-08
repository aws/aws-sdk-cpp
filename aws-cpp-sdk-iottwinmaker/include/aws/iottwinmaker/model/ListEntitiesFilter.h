/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that filters items in a list of entities.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListEntitiesFilter">AWS
   * API Reference</a></p>
   */
  class ListEntitiesFilter
  {
  public:
    AWS_IOTTWINMAKER_API ListEntitiesFilter();
    AWS_IOTTWINMAKER_API ListEntitiesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ListEntitiesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = value; }

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::move(value); }

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline void SetParentEntityId(const char* value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId.assign(value); }

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}

    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}


    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline ListEntitiesFilter& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline ListEntitiesFilter& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline ListEntitiesFilter& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline ListEntitiesFilter& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
