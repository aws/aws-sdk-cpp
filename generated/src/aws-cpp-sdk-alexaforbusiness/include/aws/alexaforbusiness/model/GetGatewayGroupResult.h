/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/GatewayGroup.h>
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
  class GetGatewayGroupResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetGatewayGroupResult();
    AWS_ALEXAFORBUSINESS_API GetGatewayGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetGatewayGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const GatewayGroup& GetGatewayGroup() const{ return m_gatewayGroup; }

    
    inline void SetGatewayGroup(const GatewayGroup& value) { m_gatewayGroup = value; }

    
    inline void SetGatewayGroup(GatewayGroup&& value) { m_gatewayGroup = std::move(value); }

    
    inline GetGatewayGroupResult& WithGatewayGroup(const GatewayGroup& value) { SetGatewayGroup(value); return *this;}

    
    inline GetGatewayGroupResult& WithGatewayGroup(GatewayGroup&& value) { SetGatewayGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGatewayGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGatewayGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGatewayGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GatewayGroup m_gatewayGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
