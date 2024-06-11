﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/EventDataStore.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListEventDataStoresResult
  {
  public:
    AWS_CLOUDTRAIL_API ListEventDataStoresResult();
    AWS_CLOUDTRAIL_API ListEventDataStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListEventDataStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about event data stores in the account, in the current
     * Region.</p>
     */
    inline const Aws::Vector<EventDataStore>& GetEventDataStores() const{ return m_eventDataStores; }
    inline void SetEventDataStores(const Aws::Vector<EventDataStore>& value) { m_eventDataStores = value; }
    inline void SetEventDataStores(Aws::Vector<EventDataStore>&& value) { m_eventDataStores = std::move(value); }
    inline ListEventDataStoresResult& WithEventDataStores(const Aws::Vector<EventDataStore>& value) { SetEventDataStores(value); return *this;}
    inline ListEventDataStoresResult& WithEventDataStores(Aws::Vector<EventDataStore>&& value) { SetEventDataStores(std::move(value)); return *this;}
    inline ListEventDataStoresResult& AddEventDataStores(const EventDataStore& value) { m_eventDataStores.push_back(value); return *this; }
    inline ListEventDataStoresResult& AddEventDataStores(EventDataStore&& value) { m_eventDataStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventDataStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventDataStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventDataStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventDataStoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventDataStoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventDataStoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventDataStore> m_eventDataStores;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
