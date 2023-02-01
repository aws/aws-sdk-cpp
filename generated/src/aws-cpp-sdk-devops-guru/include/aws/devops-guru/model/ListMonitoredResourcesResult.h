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
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult();
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListMonitoredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline const Aws::Vector<MonitoredResourceIdentifier>& GetMonitoredResourceIdentifiers() const{ return m_monitoredResourceIdentifiers; }

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline void SetMonitoredResourceIdentifiers(const Aws::Vector<MonitoredResourceIdentifier>& value) { m_monitoredResourceIdentifiers = value; }

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline void SetMonitoredResourceIdentifiers(Aws::Vector<MonitoredResourceIdentifier>&& value) { m_monitoredResourceIdentifiers = std::move(value); }

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline ListMonitoredResourcesResult& WithMonitoredResourceIdentifiers(const Aws::Vector<MonitoredResourceIdentifier>& value) { SetMonitoredResourceIdentifiers(value); return *this;}

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline ListMonitoredResourcesResult& WithMonitoredResourceIdentifiers(Aws::Vector<MonitoredResourceIdentifier>&& value) { SetMonitoredResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline ListMonitoredResourcesResult& AddMonitoredResourceIdentifiers(const MonitoredResourceIdentifier& value) { m_monitoredResourceIdentifiers.push_back(value); return *this; }

    /**
     * <p> Information about the resource that is being monitored, including the name
     * of the resource, the type of resource, and whether or not permission is given to
     * DevOps Guru to access that resource. </p>
     */
    inline ListMonitoredResourcesResult& AddMonitoredResourceIdentifiers(MonitoredResourceIdentifier&& value) { m_monitoredResourceIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListMonitoredResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListMonitoredResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListMonitoredResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitoredResourceIdentifier> m_monitoredResourceIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
