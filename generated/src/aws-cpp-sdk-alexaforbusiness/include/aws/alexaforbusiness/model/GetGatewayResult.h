/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Gateway.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Gateway m_gateway;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
