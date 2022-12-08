/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceInstanceSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListServiceInstancesResult
  {
  public:
    AWS_PROTON_API ListServiceInstancesResult();
    AWS_PROTON_API ListServiceInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline ListServiceInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline ListServiceInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline ListServiceInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline const Aws::Vector<ServiceInstanceSummary>& GetServiceInstances() const{ return m_serviceInstances; }

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline void SetServiceInstances(const Aws::Vector<ServiceInstanceSummary>& value) { m_serviceInstances = value; }

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline void SetServiceInstances(Aws::Vector<ServiceInstanceSummary>&& value) { m_serviceInstances = std::move(value); }

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline ListServiceInstancesResult& WithServiceInstances(const Aws::Vector<ServiceInstanceSummary>& value) { SetServiceInstances(value); return *this;}

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline ListServiceInstancesResult& WithServiceInstances(Aws::Vector<ServiceInstanceSummary>&& value) { SetServiceInstances(std::move(value)); return *this;}

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline ListServiceInstancesResult& AddServiceInstances(const ServiceInstanceSummary& value) { m_serviceInstances.push_back(value); return *this; }

    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline ListServiceInstancesResult& AddServiceInstances(ServiceInstanceSummary&& value) { m_serviceInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceInstanceSummary> m_serviceInstances;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
