/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EndpointResponse.h>
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
  class GetEndpointResult
  {
  public:
    AWS_PINPOINT_API GetEndpointResult();
    AWS_PINPOINT_API GetEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EndpointResponse& GetEndpointResponse() const{ return m_endpointResponse; }

    
    inline void SetEndpointResponse(const EndpointResponse& value) { m_endpointResponse = value; }

    
    inline void SetEndpointResponse(EndpointResponse&& value) { m_endpointResponse = std::move(value); }

    
    inline GetEndpointResult& WithEndpointResponse(const EndpointResponse& value) { SetEndpointResponse(value); return *this;}

    
    inline GetEndpointResult& WithEndpointResponse(EndpointResponse&& value) { SetEndpointResponse(std::move(value)); return *this;}

  private:

    EndpointResponse m_endpointResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
