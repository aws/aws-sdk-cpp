﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncConfiguration.h>
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
namespace CodeConnections
{
namespace Model
{
  class ListSyncConfigurationsResult
  {
  public:
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult();
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline const Aws::Vector<SyncConfiguration>& GetSyncConfigurations() const{ return m_syncConfigurations; }
    inline void SetSyncConfigurations(const Aws::Vector<SyncConfiguration>& value) { m_syncConfigurations = value; }
    inline void SetSyncConfigurations(Aws::Vector<SyncConfiguration>&& value) { m_syncConfigurations = std::move(value); }
    inline ListSyncConfigurationsResult& WithSyncConfigurations(const Aws::Vector<SyncConfiguration>& value) { SetSyncConfigurations(value); return *this;}
    inline ListSyncConfigurationsResult& WithSyncConfigurations(Aws::Vector<SyncConfiguration>&& value) { SetSyncConfigurations(std::move(value)); return *this;}
    inline ListSyncConfigurationsResult& AddSyncConfigurations(const SyncConfiguration& value) { m_syncConfigurations.push_back(value); return *this; }
    inline ListSyncConfigurationsResult& AddSyncConfigurations(SyncConfiguration&& value) { m_syncConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSyncConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSyncConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSyncConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSyncConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSyncConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSyncConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SyncConfiguration> m_syncConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
