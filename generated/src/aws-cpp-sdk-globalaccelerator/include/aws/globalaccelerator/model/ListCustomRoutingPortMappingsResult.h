/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/PortMapping.h>
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
  class ListCustomRoutingPortMappingsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappings = value; }

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappings = std::move(value); }

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingPortMappingsResult& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingPortMappingsResult& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(std::move(value)); return *this;}

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingPortMappingsResult& AddPortMappings(const PortMapping& value) { m_portMappings.push_back(value); return *this; }

    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingPortMappingsResult& AddPortMappings(PortMapping&& value) { m_portMappings.push_back(std::move(value)); return *this; }


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
    inline ListCustomRoutingPortMappingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PortMapping> m_portMappings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
