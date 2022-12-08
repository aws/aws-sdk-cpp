/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ChannelsResponse.h>
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
  class GetChannelsResult
  {
  public:
    AWS_PINPOINT_API GetChannelsResult();
    AWS_PINPOINT_API GetChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ChannelsResponse& GetChannelsResponse() const{ return m_channelsResponse; }

    
    inline void SetChannelsResponse(const ChannelsResponse& value) { m_channelsResponse = value; }

    
    inline void SetChannelsResponse(ChannelsResponse&& value) { m_channelsResponse = std::move(value); }

    
    inline GetChannelsResult& WithChannelsResponse(const ChannelsResponse& value) { SetChannelsResponse(value); return *this;}

    
    inline GetChannelsResult& WithChannelsResponse(ChannelsResponse&& value) { SetChannelsResponse(std::move(value)); return *this;}

  private:

    ChannelsResponse m_channelsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
