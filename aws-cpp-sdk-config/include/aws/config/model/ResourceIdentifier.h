﻿/*
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
#include <aws/core/utils/DateTime.h>

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
   * <p>The details that identify a resource that is discovered by AWS Config,
   * including the resource type, ID, and (if available) the custom resource
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ResourceIdentifier
  {
  public:
    ResourceIdentifier();
    ResourceIdentifier(const Aws::Utils::Json::JsonValue& jsonValue);
    ResourceIdentifier& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceIdentifier& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceIdentifier& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceDeletionTime() const{ return m_resourceDeletionTime; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline void SetResourceDeletionTime(const Aws::Utils::DateTime& value) { m_resourceDeletionTimeHasBeenSet = true; m_resourceDeletionTime = value; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline void SetResourceDeletionTime(Aws::Utils::DateTime&& value) { m_resourceDeletionTimeHasBeenSet = true; m_resourceDeletionTime = value; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline ResourceIdentifier& WithResourceDeletionTime(const Aws::Utils::DateTime& value) { SetResourceDeletionTime(value); return *this;}

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline ResourceIdentifier& WithResourceDeletionTime(Aws::Utils::DateTime&& value) { SetResourceDeletionTime(value); return *this;}

  private:
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::Utils::DateTime m_resourceDeletionTime;
    bool m_resourceDeletionTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
