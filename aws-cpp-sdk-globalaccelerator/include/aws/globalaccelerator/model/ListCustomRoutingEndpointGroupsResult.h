/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointGroup.h>
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
  class ListCustomRoutingEndpointGroupsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointGroup>& GetEndpointGroups() const{ return m_endpointGroups; }

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline void SetEndpointGroups(const Aws::Vector<CustomRoutingEndpointGroup>& value) { m_endpointGroups = value; }

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline void SetEndpointGroups(Aws::Vector<CustomRoutingEndpointGroup>&& value) { m_endpointGroups = std::move(value); }

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& WithEndpointGroups(const Aws::Vector<CustomRoutingEndpointGroup>& value) { SetEndpointGroups(value); return *this;}

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& WithEndpointGroups(Aws::Vector<CustomRoutingEndpointGroup>&& value) { SetEndpointGroups(std::move(value)); return *this;}

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& AddEndpointGroups(const CustomRoutingEndpointGroup& value) { m_endpointGroups.push_back(value); return *this; }

    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& AddEndpointGroups(CustomRoutingEndpointGroup&& value) { m_endpointGroups.push_back(std::move(value)); return *this; }


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
    inline ListCustomRoutingEndpointGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingEndpointGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomRoutingEndpointGroup> m_endpointGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
