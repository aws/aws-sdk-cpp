/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The relationship of the related resource to the main resource.</p>
   */
  class AWS_CONFIGSERVICE_API Relationship
  {
  public:
    Relationship();
    Relationship(const Aws::Utils::Json::JsonValue& jsonValue);
    Relationship& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline Relationship& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the related resource.</p>
     */
    inline Relationship& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the related resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

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
    inline Relationship& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

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
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the related resource, if available.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

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
    inline Relationship& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

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
    inline void SetRelationshipName(const Aws::String& value) { m_relationshipNameHasBeenSet = true; m_relationshipName = value; }

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline void SetRelationshipName(Aws::String&& value) { m_relationshipNameHasBeenSet = true; m_relationshipName = value; }

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
    inline Relationship& WithRelationshipName(Aws::String&& value) { SetRelationshipName(value); return *this;}

    /**
     * <p>The type of relationship with the related resource.</p>
     */
    inline Relationship& WithRelationshipName(const char* value) { SetRelationshipName(value); return *this;}

  private:
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::String m_relationshipName;
    bool m_relationshipNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
