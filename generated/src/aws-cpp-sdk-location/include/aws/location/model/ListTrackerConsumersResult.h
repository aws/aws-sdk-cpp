/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{
  class ListTrackerConsumersResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult();
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerArns() const{ return m_consumerArns; }

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline void SetConsumerArns(const Aws::Vector<Aws::String>& value) { m_consumerArns = value; }

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline void SetConsumerArns(Aws::Vector<Aws::String>&& value) { m_consumerArns = std::move(value); }

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline ListTrackerConsumersResult& WithConsumerArns(const Aws::Vector<Aws::String>& value) { SetConsumerArns(value); return *this;}

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline ListTrackerConsumersResult& WithConsumerArns(Aws::Vector<Aws::String>&& value) { SetConsumerArns(std::move(value)); return *this;}

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline ListTrackerConsumersResult& AddConsumerArns(const Aws::String& value) { m_consumerArns.push_back(value); return *this; }

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline ListTrackerConsumersResult& AddConsumerArns(Aws::String&& value) { m_consumerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline ListTrackerConsumersResult& AddConsumerArns(const char* value) { m_consumerArns.push_back(value); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackerConsumersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackerConsumersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackerConsumersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_consumerArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
