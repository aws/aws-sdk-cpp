/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EndpointsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetUserEndpointsResult
  {
  public:
    AWS_PINPOINT_API GetUserEndpointsResult();
    AWS_PINPOINT_API GetUserEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetUserEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EndpointsResponse& GetEndpointsResponse() const{ return m_endpointsResponse; }

    
    inline void SetEndpointsResponse(const EndpointsResponse& value) { m_endpointsResponse = value; }

    
    inline void SetEndpointsResponse(EndpointsResponse&& value) { m_endpointsResponse = std::move(value); }

    
    inline GetUserEndpointsResult& WithEndpointsResponse(const EndpointsResponse& value) { SetEndpointsResponse(value); return *this;}

    
    inline GetUserEndpointsResult& WithEndpointsResponse(EndpointsResponse&& value) { SetEndpointsResponse(std::move(value)); return *this;}

  private:

    EndpointsResponse m_endpointsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
