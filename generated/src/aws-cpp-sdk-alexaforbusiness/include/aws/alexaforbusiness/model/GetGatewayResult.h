/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetGatewayResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetGatewayResult();
    AWS_ALEXAFORBUSINESS_API GetGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
