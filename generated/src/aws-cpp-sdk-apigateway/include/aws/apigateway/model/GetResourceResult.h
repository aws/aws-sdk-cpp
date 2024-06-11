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
  class GetResourceResult
  {
  public:
    AWS_APIGATEWAY_API GetResourceResult();
    AWS_APIGATEWAY_API GetResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetResourceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetResourceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetResourceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline void SetParentId(const Aws::String& value) { m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentId.assign(value); }
    inline GetResourceResult& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline GetResourceResult& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline GetResourceResult& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }
    inline void SetPathPart(const Aws::String& value) { m_pathPart = value; }
    inline void SetPathPart(Aws::String&& value) { m_pathPart = std::move(value); }
    inline void SetPathPart(const char* value) { m_pathPart.assign(value); }
    inline GetResourceResult& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}
    inline GetResourceResult& WithPathPart(Aws::String&& value) { SetPathPart(std::move(value)); return *this;}
    inline GetResourceResult& WithPathPart(const char* value) { SetPathPart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline void SetPath(const Aws::String& value) { m_path = value; }
    inline void SetPath(Aws::String&& value) { m_path = std::move(value); }
    inline void SetPath(const char* value) { m_path.assign(value); }
    inline GetResourceResult& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline GetResourceResult& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline GetResourceResult& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const{ return m_resourceMethods; }
    inline void SetResourceMethods(const Aws::Map<Aws::String, Method>& value) { m_resourceMethods = value; }
    inline void SetResourceMethods(Aws::Map<Aws::String, Method>&& value) { m_resourceMethods = std::move(value); }
    inline GetResourceResult& WithResourceMethods(const Aws::Map<Aws::String, Method>& value) { SetResourceMethods(value); return *this;}
    inline GetResourceResult& WithResourceMethods(Aws::Map<Aws::String, Method>&& value) { SetResourceMethods(std::move(value)); return *this;}
    inline GetResourceResult& AddResourceMethods(const Aws::String& key, const Method& value) { m_resourceMethods.emplace(key, value); return *this; }
    inline GetResourceResult& AddResourceMethods(Aws::String&& key, const Method& value) { m_resourceMethods.emplace(std::move(key), value); return *this; }
    inline GetResourceResult& AddResourceMethods(const Aws::String& key, Method&& value) { m_resourceMethods.emplace(key, std::move(value)); return *this; }
    inline GetResourceResult& AddResourceMethods(Aws::String&& key, Method&& value) { m_resourceMethods.emplace(std::move(key), std::move(value)); return *this; }
    inline GetResourceResult& AddResourceMethods(const char* key, Method&& value) { m_resourceMethods.emplace(key, std::move(value)); return *this; }
    inline GetResourceResult& AddResourceMethods(const char* key, const Method& value) { m_resourceMethods.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
