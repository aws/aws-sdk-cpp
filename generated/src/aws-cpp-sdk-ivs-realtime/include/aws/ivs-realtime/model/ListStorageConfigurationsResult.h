/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/StorageConfigurationSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListStorageConfigurationsResult
  {
  public:
    AWS_IVSREALTIME_API ListStorageConfigurationsResult();
    AWS_IVSREALTIME_API ListStorageConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListStorageConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStorageConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStorageConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStorageConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline const Aws::Vector<StorageConfigurationSummary>& GetStorageConfigurations() const{ return m_storageConfigurations; }

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline void SetStorageConfigurations(const Aws::Vector<StorageConfigurationSummary>& value) { m_storageConfigurations = value; }

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline void SetStorageConfigurations(Aws::Vector<StorageConfigurationSummary>&& value) { m_storageConfigurations = std::move(value); }

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline ListStorageConfigurationsResult& WithStorageConfigurations(const Aws::Vector<StorageConfigurationSummary>& value) { SetStorageConfigurations(value); return *this;}

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline ListStorageConfigurationsResult& WithStorageConfigurations(Aws::Vector<StorageConfigurationSummary>&& value) { SetStorageConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline ListStorageConfigurationsResult& AddStorageConfigurations(const StorageConfigurationSummary& value) { m_storageConfigurations.push_back(value); return *this; }

    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline ListStorageConfigurationsResult& AddStorageConfigurations(StorageConfigurationSummary&& value) { m_storageConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStorageConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStorageConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStorageConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<StorageConfigurationSummary> m_storageConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
