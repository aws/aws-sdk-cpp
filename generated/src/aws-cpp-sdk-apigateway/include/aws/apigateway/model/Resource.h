/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Method.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an API resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_APIGATEWAY_API Resource();
    AWS_APIGATEWAY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Resource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline Resource& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline Resource& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline Resource& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }
    inline bool PathPartHasBeenSet() const { return m_pathPartHasBeenSet; }
    inline void SetPathPart(const Aws::String& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }
    inline void SetPathPart(Aws::String&& value) { m_pathPartHasBeenSet = true; m_pathPart = std::move(value); }
    inline void SetPathPart(const char* value) { m_pathPartHasBeenSet = true; m_pathPart.assign(value); }
    inline Resource& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}
    inline Resource& WithPathPart(Aws::String&& value) { SetPathPart(std::move(value)); return *this;}
    inline Resource& WithPathPart(const char* value) { SetPathPart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline Resource& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline Resource& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline Resource& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const{ return m_resourceMethods; }
    inline bool ResourceMethodsHasBeenSet() const { return m_resourceMethodsHasBeenSet; }
    inline void SetResourceMethods(const Aws::Map<Aws::String, Method>& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = value; }
    inline void SetResourceMethods(Aws::Map<Aws::String, Method>&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = std::move(value); }
    inline Resource& WithResourceMethods(const Aws::Map<Aws::String, Method>& value) { SetResourceMethods(value); return *this;}
    inline Resource& WithResourceMethods(Aws::Map<Aws::String, Method>&& value) { SetResourceMethods(std::move(value)); return *this;}
    inline Resource& AddResourceMethods(const Aws::String& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, value); return *this; }
    inline Resource& AddResourceMethods(Aws::String&& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(std::move(key), value); return *this; }
    inline Resource& AddResourceMethods(const Aws::String& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, std::move(value)); return *this; }
    inline Resource& AddResourceMethods(Aws::String&& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(std::move(key), std::move(value)); return *this; }
    inline Resource& AddResourceMethods(const char* key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, std::move(value)); return *this; }
    inline Resource& AddResourceMethods(const char* key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Resource& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Resource& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Resource& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_pathPart;
    bool m_pathPartHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Map<Aws::String, Method> m_resourceMethods;
    bool m_resourceMethodsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
