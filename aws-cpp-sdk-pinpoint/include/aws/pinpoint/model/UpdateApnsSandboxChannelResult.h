/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateApnsSandboxChannelResult
  {
  public:
    AWS_PINPOINT_API UpdateApnsSandboxChannelResult();
    AWS_PINPOINT_API UpdateApnsSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateApnsSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
