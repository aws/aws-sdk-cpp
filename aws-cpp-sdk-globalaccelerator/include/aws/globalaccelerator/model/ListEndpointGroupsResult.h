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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointGroup.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AWS_GLOBALACCELERATOR_API ListEndpointGroupsResult
  {
  public:
    ListEndpointGroupsResult();
    ListEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline const Aws::Vector<EndpointGroup>& GetEndpointGroups() const{ return m_endpointGroups; }

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline void SetEndpointGroups(const Aws::Vector<EndpointGroup>& value) { m_endpointGroups = value; }

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline void SetEndpointGroups(Aws::Vector<EndpointGroup>&& value) { m_endpointGroups = std::move(value); }

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline ListEndpointGroupsResult& WithEndpointGroups(const Aws::Vector<EndpointGroup>& value) { SetEndpointGroups(value); return *this;}

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline ListEndpointGroupsResult& WithEndpointGroups(Aws::Vector<EndpointGroup>&& value) { SetEndpointGroups(std::move(value)); return *this;}

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline ListEndpointGroupsResult& AddEndpointGroups(const EndpointGroup& value) { m_endpointGroups.push_back(value); return *this; }

    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline ListEndpointGroupsResult& AddEndpointGroups(EndpointGroup&& value) { m_endpointGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListEndpointGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListEndpointGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListEndpointGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EndpointGroup> m_endpointGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
