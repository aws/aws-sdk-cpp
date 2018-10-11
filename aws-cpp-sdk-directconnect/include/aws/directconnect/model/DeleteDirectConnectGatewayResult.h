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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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
  class AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayResult
  {
  public:
    DeleteDirectConnectGatewayResult();
    DeleteDirectConnectGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDirectConnectGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline const DirectConnectGateway& GetDirectConnectGateway() const{ return m_directConnectGateway; }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGateway(const DirectConnectGateway& value) { m_directConnectGateway = value; }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGateway(DirectConnectGateway&& value) { m_directConnectGateway = std::move(value); }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline DeleteDirectConnectGatewayResult& WithDirectConnectGateway(const DirectConnectGateway& value) { SetDirectConnectGateway(value); return *this;}

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline DeleteDirectConnectGatewayResult& WithDirectConnectGateway(DirectConnectGateway&& value) { SetDirectConnectGateway(std::move(value)); return *this;}

  private:

    DirectConnectGateway m_directConnectGateway;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
