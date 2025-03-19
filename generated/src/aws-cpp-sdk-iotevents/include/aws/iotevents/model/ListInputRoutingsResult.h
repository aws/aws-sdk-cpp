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
    AWS_IOTEVENTS_API ListInputRoutingsResult() = default;
    AWS_IOTEVENTS_API ListInputRoutingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListInputRoutingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Summary information about the routed resources. </p>
     */
    inline const Aws::Vector<RoutedResource>& GetRoutedResources() const { return m_routedResources; }
    template<typename RoutedResourcesT = Aws::Vector<RoutedResource>>
    void SetRoutedResources(RoutedResourcesT&& value) { m_routedResourcesHasBeenSet = true; m_routedResources = std::forward<RoutedResourcesT>(value); }
    template<typename RoutedResourcesT = Aws::Vector<RoutedResource>>
    ListInputRoutingsResult& WithRoutedResources(RoutedResourcesT&& value) { SetRoutedResources(std::forward<RoutedResourcesT>(value)); return *this;}
    template<typename RoutedResourcesT = RoutedResource>
    ListInputRoutingsResult& AddRoutedResources(RoutedResourcesT&& value) { m_routedResourcesHasBeenSet = true; m_routedResources.emplace_back(std::forward<RoutedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInputRoutingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInputRoutingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoutedResource> m_routedResources;
    bool m_routedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
