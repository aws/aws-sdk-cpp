/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/MonitoredResourceIdentifier.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class ListMonitoredResourcesResult
  {
  public:
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult() = default;
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline const Aws::Vector<MonitoredResourceIdentifier>& GetMonitoredResourceIdentifiers() const { return m_monitoredResourceIdentifiers; }
    template<typename MonitoredResourceIdentifiersT = Aws::Vector<MonitoredResourceIdentifier>>
    void SetMonitoredResourceIdentifiers(MonitoredResourceIdentifiersT&& value) { m_monitoredResourceIdentifiersHasBeenSet = true; m_monitoredResourceIdentifiers = std::forward<MonitoredResourceIdentifiersT>(value); }
    template<typename MonitoredResourceIdentifiersT = Aws::Vector<MonitoredResourceIdentifier>>
    ListMonitoredResourcesResult& WithMonitoredResourceIdentifiers(MonitoredResourceIdentifiersT&& value) { SetMonitoredResourceIdentifiers(std::forward<MonitoredResourceIdentifiersT>(value)); return *this;}
    template<typename MonitoredResourceIdentifiersT = MonitoredResourceIdentifier>
    ListMonitoredResourcesResult& AddMonitoredResourceIdentifiers(MonitoredResourceIdentifiersT&& value) { m_monitoredResourceIdentifiersHasBeenSet = true; m_monitoredResourceIdentifiers.emplace_back(std::forward<MonitoredResourceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitoredResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitoredResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoredResourceIdentifier> m_monitoredResourceIdentifiers;
    bool m_monitoredResourceIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
