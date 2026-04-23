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
#include <aws/servicediscovery/model/ServiceSummary.h>
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
  class AWS_SERVICEDISCOVERY_API ListServicesResult
  {
  public:
    ListServicesResult();
    ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServices() const{ return m_services; }

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline void SetServices(const Aws::Vector<ServiceSummary>& value) { m_services = value; }

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline void SetServices(Aws::Vector<ServiceSummary>&& value) { m_services = std::move(value); }

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline ListServicesResult& WithServices(const Aws::Vector<ServiceSummary>& value) { SetServices(value); return *this;}

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline ListServicesResult& WithServices(Aws::Vector<ServiceSummary>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline ListServicesResult& AddServices(const ServiceSummary& value) { m_services.push_back(value); return *this; }

    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline ListServicesResult& AddServices(ServiceSummary&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> services and
     * then filters them based on the specified criteria. It's possible that no
     * services in the first <code>MaxResults</code> services matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> services do
     * contain services that match the criteria.</p> </note>
     */
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ServiceSummary> m_services;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
