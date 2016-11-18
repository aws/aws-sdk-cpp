/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/VirtualGateway.h>

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
  /**
   * <p>A structure containing a list of virtual private gateways.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult
  {
  public:
    DescribeVirtualGatewaysResult();
    DescribeVirtualGatewaysResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVirtualGatewaysResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline const Aws::Vector<VirtualGateway>& GetVirtualGateways() const{ return m_virtualGateways; }

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline void SetVirtualGateways(const Aws::Vector<VirtualGateway>& value) { m_virtualGateways = value; }

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline void SetVirtualGateways(Aws::Vector<VirtualGateway>&& value) { m_virtualGateways = value; }

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& WithVirtualGateways(const Aws::Vector<VirtualGateway>& value) { SetVirtualGateways(value); return *this;}

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& WithVirtualGateways(Aws::Vector<VirtualGateway>&& value) { SetVirtualGateways(value); return *this;}

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& AddVirtualGateways(const VirtualGateway& value) { m_virtualGateways.push_back(value); return *this; }

    /**
     * <p>A list of virtual private gateways.</p>
     */
    inline DescribeVirtualGatewaysResult& AddVirtualGateways(VirtualGateway&& value) { m_virtualGateways.push_back(value); return *this; }

  private:
    Aws::Vector<VirtualGateway> m_virtualGateways;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
