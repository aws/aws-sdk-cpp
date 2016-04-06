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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Method.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a resource.</p>
   */
  class AWS_APIGATEWAY_API Resource
  {
  public:
    Resource();
    Resource(const Aws::Utils::Json::JsonValue& jsonValue);
    Resource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(Aws::String&& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(const char* value) { SetParentId(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const Aws::String& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(Aws::String&& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const char* value) { m_pathPartHasBeenSet = true; m_pathPart.assign(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(Aws::String&& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(const char* value) { SetPathPart(value); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const{ return m_resourceMethods; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline void SetResourceMethods(const Aws::Map<Aws::String, Method>& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = value; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline void SetResourceMethods(Aws::Map<Aws::String, Method>&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = value; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& WithResourceMethods(const Aws::Map<Aws::String, Method>& value) { SetResourceMethods(value); return *this;}

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& WithResourceMethods(Aws::Map<Aws::String, Method>&& value) { SetResourceMethods(value); return *this;}

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(const Aws::String& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(Aws::String&& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(const Aws::String& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(Aws::String&& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(const char* key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

    /**
     * <p>Map of methods for this resource, which is included only if the request uses
     * the <b>embed</b> query option.</p>
     */
    inline Resource& AddResourceMethods(const char* key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods[key] = value; return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;
    Aws::String m_pathPart;
    bool m_pathPartHasBeenSet;
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::Map<Aws::String, Method> m_resourceMethods;
    bool m_resourceMethodsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
