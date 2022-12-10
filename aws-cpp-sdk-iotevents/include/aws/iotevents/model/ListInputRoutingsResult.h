/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/RoutedResource.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListInputRoutingsResult
  {
  public:
    AWS_IOTEVENTS_API ListInputRoutingsResult();
    AWS_IOTEVENTS_API ListInputRoutingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListInputRoutingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline const Aws::Vector<RoutedResource>& GetRoutedResources() const{ return m_routedResources; }

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline void SetRoutedResources(const Aws::Vector<RoutedResource>& value) { m_routedResources = value; }

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline void SetRoutedResources(Aws::Vector<RoutedResource>&& value) { m_routedResources = std::move(value); }

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline ListInputRoutingsResult& WithRoutedResources(const Aws::Vector<RoutedResource>& value) { SetRoutedResources(value); return *this;}

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline ListInputRoutingsResult& WithRoutedResources(Aws::Vector<RoutedResource>&& value) { SetRoutedResources(std::move(value)); return *this;}

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline ListInputRoutingsResult& AddRoutedResources(const RoutedResource& value) { m_routedResources.push_back(value); return *this; }

    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline ListInputRoutingsResult& AddRoutedResources(RoutedResource&& value) { m_routedResources.push_back(std::move(value)); return *this; }


    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline ListInputRoutingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline ListInputRoutingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline ListInputRoutingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RoutedResource> m_routedResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
