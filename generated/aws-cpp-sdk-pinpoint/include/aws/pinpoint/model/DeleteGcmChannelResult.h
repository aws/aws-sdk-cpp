﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/GCMChannelResponse.h>
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
  class AWS_PINPOINT_API DeleteGcmChannelResult
  {
  public:
    DeleteGcmChannelResult();
    DeleteGcmChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteGcmChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const GCMChannelResponse& GetGCMChannelResponse() const{ return m_gCMChannelResponse; }

    
    inline void SetGCMChannelResponse(const GCMChannelResponse& value) { m_gCMChannelResponse = value; }

    
    inline void SetGCMChannelResponse(GCMChannelResponse&& value) { m_gCMChannelResponse = std::move(value); }

    
    inline DeleteGcmChannelResult& WithGCMChannelResponse(const GCMChannelResponse& value) { SetGCMChannelResponse(value); return *this;}

    
    inline DeleteGcmChannelResult& WithGCMChannelResponse(GCMChannelResponse&& value) { SetGCMChannelResponse(std::move(value)); return *this;}

  private:

    GCMChannelResponse m_gCMChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
