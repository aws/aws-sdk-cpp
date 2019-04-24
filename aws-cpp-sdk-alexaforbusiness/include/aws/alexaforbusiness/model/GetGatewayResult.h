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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Gateway.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API GetGatewayResult
  {
  public:
    GetGatewayResult();
    GetGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the gateway.</p>
     */
    inline const Gateway& GetGateway() const{ return m_gateway; }

    /**
     * <p>The details of the gateway.</p>
     */
    inline void SetGateway(const Gateway& value) { m_gateway = value; }

    /**
     * <p>The details of the gateway.</p>
     */
    inline void SetGateway(Gateway&& value) { m_gateway = std::move(value); }

    /**
     * <p>The details of the gateway.</p>
     */
    inline GetGatewayResult& WithGateway(const Gateway& value) { SetGateway(value); return *this;}

    /**
     * <p>The details of the gateway.</p>
     */
    inline GetGatewayResult& WithGateway(Gateway&& value) { SetGateway(std::move(value)); return *this;}

  private:

    Gateway m_gateway;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
