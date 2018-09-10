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
  class AWS_PINPOINT_API DeleteUserEndpointsResult
  {
  public:
    DeleteUserEndpointsResult();
    DeleteUserEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteUserEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EndpointsResponse& GetEndpointsResponse() const{ return m_endpointsResponse; }

    
    inline void SetEndpointsResponse(const EndpointsResponse& value) { m_endpointsResponse = value; }

    
    inline void SetEndpointsResponse(EndpointsResponse&& value) { m_endpointsResponse = std::move(value); }

    
    inline DeleteUserEndpointsResult& WithEndpointsResponse(const EndpointsResponse& value) { SetEndpointsResponse(value); return *this;}

    
    inline DeleteUserEndpointsResult& WithEndpointsResponse(EndpointsResponse&& value) { SetEndpointsResponse(std::move(value)); return *this;}

  private:

    EndpointsResponse m_endpointsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
