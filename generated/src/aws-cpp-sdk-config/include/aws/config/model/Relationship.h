/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The relationship of the related resource to the main resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Relationship">AWS
   * API Reference</a></p>
   */
  class Relationship
  {
  public:
    AWS_CONFIGSERVICE_API Relationship();
    AWS_CONFIGSERVICE_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type of the related resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline Relationship& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline Relationship& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline Relationship& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline Relationship& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline Relationship& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline Relationship& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline Relationship& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline Relationship& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline const Aws::String& GetRelationshipName() const{ return m_relationshipName; }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline bool RelationshipNameHasBeenSet() const { return m_relationshipNameHasBeenSet; }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline void SetRelationshipName(const Aws::String& value) { m_relationshipNameHasBeenSet = true; m_relationshipName = value; }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline void SetRelationshipName(Aws::String&& value) { m_relationshipNameHasBeenSet = true; m_relationshipName = std::move(value); }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline void SetRelationshipName(const char* value) { m_relationshipNameHasBeenSet = true; m_relationshipName.assign(value); }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline Relationship& WithRelationshipName(const Aws::String& value) { SetRelationshipName(value); return *this;}

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline Relationship& WithRelationshipName(Aws::String&& value) { SetRelationshipName(std::move(value)); return *this;}

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline Relationship& WithRelationshipName(const char* value) { SetRelationshipName(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_relationshipName;
    bool m_relationshipNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
