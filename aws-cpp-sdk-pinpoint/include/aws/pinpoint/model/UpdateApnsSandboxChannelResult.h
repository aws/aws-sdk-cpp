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
#include <aws/pinpoint/model/APNSSandboxChannelResponse.h>
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
  class AWS_PINPOINT_API UpdateApnsSandboxChannelResult
  {
  public:
    UpdateApnsSandboxChannelResult();
    UpdateApnsSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateApnsSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const APNSSandboxChannelResponse& GetAPNSSandboxChannelResponse() const{ return m_aPNSSandboxChannelResponse; }

    
    inline void SetAPNSSandboxChannelResponse(const APNSSandboxChannelResponse& value) { m_aPNSSandboxChannelResponse = value; }

    
    inline void SetAPNSSandboxChannelResponse(APNSSandboxChannelResponse&& value) { m_aPNSSandboxChannelResponse = std::move(value); }

    
    inline UpdateApnsSandboxChannelResult& WithAPNSSandboxChannelResponse(const APNSSandboxChannelResponse& value) { SetAPNSSandboxChannelResponse(value); return *this;}

    
    inline UpdateApnsSandboxChannelResult& WithAPNSSandboxChannelResponse(APNSSandboxChannelResponse&& value) { SetAPNSSandboxChannelResponse(std::move(value)); return *this;}

  private:

    APNSSandboxChannelResponse m_aPNSSandboxChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
