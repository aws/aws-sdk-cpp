/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Entity.h>
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
namespace Glue
{
namespace Model
{
  class ListEntitiesResult
  {
  public:
    AWS_GLUE_API ListEntitiesResult();
    AWS_GLUE_API ListEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>Entity</code> objects.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entities = std::move(value); }
    inline ListEntitiesResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}
    inline ListEntitiesResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}
    inline ListEntitiesResult& AddEntities(const Entity& value) { m_entities.push_back(value); return *this; }
    inline ListEntitiesResult& AddEntities(Entity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current segment is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEntitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEntitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEntitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Entity> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
