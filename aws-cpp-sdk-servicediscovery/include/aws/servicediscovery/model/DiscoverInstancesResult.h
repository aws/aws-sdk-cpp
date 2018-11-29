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
#include <aws/servicediscovery/model/HttpInstanceSummary.h>
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
  class AWS_SERVICEDISCOVERY_API DiscoverInstancesResult
  {
  public:
    DiscoverInstancesResult();
    DiscoverInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DiscoverInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline const Aws::Vector<HttpInstanceSummary>& GetInstances() const{ return m_instances; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(const Aws::Vector<HttpInstanceSummary>& value) { m_instances = value; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(Aws::Vector<HttpInstanceSummary>&& value) { m_instances = std::move(value); }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(const Aws::Vector<HttpInstanceSummary>& value) { SetInstances(value); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(Aws::Vector<HttpInstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(const HttpInstanceSummary& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(HttpInstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HttpInstanceSummary> m_instances;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
