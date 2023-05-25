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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents an API resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Resource">AWS
   * API Reference</a></p>
   */
  class UpdateResourceResult
  {
  public:
    AWS_APIGATEWAY_API UpdateResourceResult();
    AWS_APIGATEWAY_API UpdateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The resource's identifier.</p>
     */
    inline UpdateResourceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline UpdateResourceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline UpdateResourceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentId = std::move(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const char* value) { m_parentId.assign(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline UpdateResourceResult& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline UpdateResourceResult& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline UpdateResourceResult& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const Aws::String& value) { m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(Aws::String&& value) { m_pathPart = std::move(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const char* value) { m_pathPart.assign(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline UpdateResourceResult& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline UpdateResourceResult& WithPathPart(Aws::String&& value) { SetPathPart(std::move(value)); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline UpdateResourceResult& WithPathPart(const char* value) { SetPathPart(value); return *this;}


    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const Aws::String& value) { m_path = value; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(Aws::String&& value) { m_path = std::move(value); }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const char* value) { m_path.assign(value); }

    /**
     * <p>The full path for this resource.</p>
     */
    inline UpdateResourceResult& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline UpdateResourceResult& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline UpdateResourceResult& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const{ return m_resourceMethods; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline void SetResourceMethods(const Aws::Map<Aws::String, Method>& value) { m_resourceMethods = value; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline void SetResourceMethods(Aws::Map<Aws::String, Method>&& value) { m_resourceMethods = std::move(value); }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& WithResourceMethods(const Aws::Map<Aws::String, Method>& value) { SetResourceMethods(value); return *this;}

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& WithResourceMethods(Aws::Map<Aws::String, Method>&& value) { SetResourceMethods(std::move(value)); return *this;}

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(const Aws::String& key, const Method& value) { m_resourceMethods.emplace(key, value); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(Aws::String&& key, const Method& value) { m_resourceMethods.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(const Aws::String& key, Method&& value) { m_resourceMethods.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(Aws::String&& key, Method&& value) { m_resourceMethods.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(const char* key, Method&& value) { m_resourceMethods.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline UpdateResourceResult& AddResourceMethods(const char* key, const Method& value) { m_resourceMethods.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_parentId;

    Aws::String m_pathPart;

    Aws::String m_path;

    Aws::Map<Aws::String, Method> m_resourceMethods;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
