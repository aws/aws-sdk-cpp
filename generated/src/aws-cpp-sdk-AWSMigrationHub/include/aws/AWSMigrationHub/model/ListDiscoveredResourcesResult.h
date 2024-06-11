﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListDiscoveredResourcesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult();
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more discovered resources than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDiscoveredResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDiscoveredResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDiscoveredResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned list of discovered resources associated with the given
     * MigrationTask.</p>
     */
    inline const Aws::Vector<DiscoveredResource>& GetDiscoveredResourceList() const{ return m_discoveredResourceList; }
    inline void SetDiscoveredResourceList(const Aws::Vector<DiscoveredResource>& value) { m_discoveredResourceList = value; }
    inline void SetDiscoveredResourceList(Aws::Vector<DiscoveredResource>&& value) { m_discoveredResourceList = std::move(value); }
    inline ListDiscoveredResourcesResult& WithDiscoveredResourceList(const Aws::Vector<DiscoveredResource>& value) { SetDiscoveredResourceList(value); return *this;}
    inline ListDiscoveredResourcesResult& WithDiscoveredResourceList(Aws::Vector<DiscoveredResource>&& value) { SetDiscoveredResourceList(std::move(value)); return *this;}
    inline ListDiscoveredResourcesResult& AddDiscoveredResourceList(const DiscoveredResource& value) { m_discoveredResourceList.push_back(value); return *this; }
    inline ListDiscoveredResourcesResult& AddDiscoveredResourceList(DiscoveredResource&& value) { m_discoveredResourceList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDiscoveredResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDiscoveredResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDiscoveredResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DiscoveredResource> m_discoveredResourceList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
