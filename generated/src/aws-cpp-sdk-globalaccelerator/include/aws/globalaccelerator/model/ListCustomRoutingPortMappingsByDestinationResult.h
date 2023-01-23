/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/DestinationPortMapping.h>
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
  class ListCustomRoutingPortMappingsByDestinationResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline const Aws::Vector<DestinationPortMapping>& GetDestinationPortMappings() const{ return m_destinationPortMappings; }

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline void SetDestinationPortMappings(const Aws::Vector<DestinationPortMapping>& value) { m_destinationPortMappings = value; }

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline void SetDestinationPortMappings(Aws::Vector<DestinationPortMapping>&& value) { m_destinationPortMappings = std::move(value); }

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& WithDestinationPortMappings(const Aws::Vector<DestinationPortMapping>& value) { SetDestinationPortMappings(value); return *this;}

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& WithDestinationPortMappings(Aws::Vector<DestinationPortMapping>&& value) { SetDestinationPortMappings(std::move(value)); return *this;}

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& AddDestinationPortMappings(const DestinationPortMapping& value) { m_destinationPortMappings.push_back(value); return *this; }

    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& AddDestinationPortMappings(DestinationPortMapping&& value) { m_destinationPortMappings.push_back(std::move(value)); return *this; }


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
    inline ListCustomRoutingPortMappingsByDestinationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DestinationPortMapping> m_destinationPortMappings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
