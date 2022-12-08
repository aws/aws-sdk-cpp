/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/EntitySummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListEntitiesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListEntitiesResult();
    AWS_IOTTWINMAKER_API ListEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline const Aws::Vector<EntitySummary>& GetEntitySummaries() const{ return m_entitySummaries; }

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline void SetEntitySummaries(const Aws::Vector<EntitySummary>& value) { m_entitySummaries = value; }

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline void SetEntitySummaries(Aws::Vector<EntitySummary>&& value) { m_entitySummaries = std::move(value); }

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline ListEntitiesResult& WithEntitySummaries(const Aws::Vector<EntitySummary>& value) { SetEntitySummaries(value); return *this;}

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline ListEntitiesResult& WithEntitySummaries(Aws::Vector<EntitySummary>&& value) { SetEntitySummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline ListEntitiesResult& AddEntitySummaries(const EntitySummary& value) { m_entitySummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline ListEntitiesResult& AddEntitySummaries(EntitySummary&& value) { m_entitySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntitySummary> m_entitySummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
