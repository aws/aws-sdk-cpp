/**
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


    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline const Aws::Vector<EventDataStore>& GetEventDataStores() const{ return m_eventDataStores; }

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline void SetEventDataStores(const Aws::Vector<EventDataStore>& value) { m_eventDataStores = value; }

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline void SetEventDataStores(Aws::Vector<EventDataStore>&& value) { m_eventDataStores = std::move(value); }

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline ListEventDataStoresResult& WithEventDataStores(const Aws::Vector<EventDataStore>& value) { SetEventDataStores(value); return *this;}

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline ListEventDataStoresResult& WithEventDataStores(Aws::Vector<EventDataStore>&& value) { SetEventDataStores(std::move(value)); return *this;}

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline ListEventDataStoresResult& AddEventDataStores(const EventDataStore& value) { m_eventDataStores.push_back(value); return *this; }

    /**
     * <p>Contains information about event data stores in the account, in the current
     * region.</p>
     */
    inline ListEventDataStoresResult& AddEventDataStores(EventDataStore&& value) { m_eventDataStores.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListEventDataStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListEventDataStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListEventDataStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventDataStore> m_eventDataStores;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
