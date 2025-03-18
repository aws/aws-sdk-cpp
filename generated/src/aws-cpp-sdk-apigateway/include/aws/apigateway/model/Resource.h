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
    AWS_APIGATEWAY_API Resource() = default;
    AWS_APIGATEWAY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Resource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    template<typename ParentIdT = Aws::String>
    void SetParentId(ParentIdT&& value) { m_parentIdHasBeenSet = true; m_parentId = std::forward<ParentIdT>(value); }
    template<typename ParentIdT = Aws::String>
    Resource& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const { return m_pathPart; }
    inline bool PathPartHasBeenSet() const { return m_pathPartHasBeenSet; }
    template<typename PathPartT = Aws::String>
    void SetPathPart(PathPartT&& value) { m_pathPartHasBeenSet = true; m_pathPart = std::forward<PathPartT>(value); }
    template<typename PathPartT = Aws::String>
    Resource& WithPathPart(PathPartT&& value) { SetPathPart(std::forward<PathPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    Resource& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const { return m_resourceMethods; }
    inline bool ResourceMethodsHasBeenSet() const { return m_resourceMethodsHasBeenSet; }
    template<typename ResourceMethodsT = Aws::Map<Aws::String, Method>>
    void SetResourceMethods(ResourceMethodsT&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = std::forward<ResourceMethodsT>(value); }
    template<typename ResourceMethodsT = Aws::Map<Aws::String, Method>>
    Resource& WithResourceMethods(ResourceMethodsT&& value) { SetResourceMethods(std::forward<ResourceMethodsT>(value)); return *this;}
    template<typename ResourceMethodsKeyT = Aws::String, typename ResourceMethodsValueT = Method>
    Resource& AddResourceMethods(ResourceMethodsKeyT&& key, ResourceMethodsValueT&& value) {
      m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(std::forward<ResourceMethodsKeyT>(key), std::forward<ResourceMethodsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    Resource& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
