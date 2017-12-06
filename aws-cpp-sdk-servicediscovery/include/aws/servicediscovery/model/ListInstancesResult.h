/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/InstanceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class AWS_SERVICEDISCOVERY_API ListInstancesResult
  {
  public:
    ListInstancesResult();
    ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstances() const{ return m_instances; }

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline void SetInstances(const Aws::Vector<InstanceSummary>& value) { m_instances = value; }

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline void SetInstances(Aws::Vector<InstanceSummary>&& value) { m_instances = std::move(value); }

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline ListInstancesResult& WithInstances(const Aws::Vector<InstanceSummary>& value) { SetInstances(value); return *this;}

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline ListInstancesResult& WithInstances(Aws::Vector<InstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline ListInstancesResult& AddInstances(const InstanceSummary& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline ListInstancesResult& AddInstances(InstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceSummary> m_instances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
