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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API RegisterTransitGatewayResult
  {
  public:
    RegisterTransitGatewayResult();
    RegisterTransitGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterTransitGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline const TransitGatewayRegistration& GetTransitGatewayRegistration() const{ return m_transitGatewayRegistration; }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline void SetTransitGatewayRegistration(const TransitGatewayRegistration& value) { m_transitGatewayRegistration = value; }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline void SetTransitGatewayRegistration(TransitGatewayRegistration&& value) { m_transitGatewayRegistration = std::move(value); }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline RegisterTransitGatewayResult& WithTransitGatewayRegistration(const TransitGatewayRegistration& value) { SetTransitGatewayRegistration(value); return *this;}

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline RegisterTransitGatewayResult& WithTransitGatewayRegistration(TransitGatewayRegistration&& value) { SetTransitGatewayRegistration(std::move(value)); return *this;}

  private:

    TransitGatewayRegistration m_transitGatewayRegistration;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
