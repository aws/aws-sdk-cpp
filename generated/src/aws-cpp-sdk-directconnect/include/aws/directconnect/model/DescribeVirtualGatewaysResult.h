/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/VirtualGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeVirtualGatewaysResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult();
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual private gateways.</p>
     */
    inline const Aws::Vector<VirtualGateway>& GetVirtualGateways() const{ return m_virtualGateways; }

    /**
     * <p>The virtual private gateways.</p>
     */
    inline void SetVirtualGateways(const Aws::Vector<VirtualGateway>& value) { m_virtualGateways = value; }

    /**
     * <p>The virtual private gateways.</p>
     */
    inline void SetVirtualGateways(Aws::Vector<VirtualGateway>&& value) { m_virtualGateways = std::move(value); }

    /**
     * <p>The virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& WithVirtualGateways(const Aws::Vector<VirtualGateway>& value) { SetVirtualGateways(value); return *this;}

    /**
     * <p>The virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& WithVirtualGateways(Aws::Vector<VirtualGateway>&& value) { SetVirtualGateways(std::move(value)); return *this;}

    /**
     * <p>The virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& AddVirtualGateways(const VirtualGateway& value) { m_virtualGateways.push_back(value); return *this; }

    /**
     * <p>The virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& AddVirtualGateways(VirtualGateway&& value) { m_virtualGateways.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeVirtualGatewaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeVirtualGatewaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeVirtualGatewaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VirtualGateway> m_virtualGateways;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
