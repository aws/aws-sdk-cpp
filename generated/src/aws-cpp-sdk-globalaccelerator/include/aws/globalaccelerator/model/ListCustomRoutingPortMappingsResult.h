﻿/**
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


    ///@{
    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappings = value; }
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappings = std::move(value); }
    inline ListCustomRoutingPortMappingsResult& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}
    inline ListCustomRoutingPortMappingsResult& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(std::move(value)); return *this;}
    inline ListCustomRoutingPortMappingsResult& AddPortMappings(const PortMapping& value) { m_portMappings.push_back(value); return *this; }
    inline ListCustomRoutingPortMappingsResult& AddPortMappings(PortMapping&& value) { m_portMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomRoutingPortMappingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomRoutingPortMappingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomRoutingPortMappingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomRoutingPortMappingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomRoutingPortMappingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomRoutingPortMappingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PortMapping> m_portMappings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
