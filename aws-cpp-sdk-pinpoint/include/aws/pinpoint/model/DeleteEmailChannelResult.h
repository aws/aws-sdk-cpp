/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EmailChannelResponse.h>
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
  class DeleteEmailChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteEmailChannelResult();
    AWS_PINPOINT_API DeleteEmailChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteEmailChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EmailChannelResponse& GetEmailChannelResponse() const{ return m_emailChannelResponse; }

    
    inline void SetEmailChannelResponse(const EmailChannelResponse& value) { m_emailChannelResponse = value; }

    
    inline void SetEmailChannelResponse(EmailChannelResponse&& value) { m_emailChannelResponse = std::move(value); }

    
    inline DeleteEmailChannelResult& WithEmailChannelResponse(const EmailChannelResponse& value) { SetEmailChannelResponse(value); return *this;}

    
    inline DeleteEmailChannelResult& WithEmailChannelResponse(EmailChannelResponse&& value) { SetEmailChannelResponse(std::move(value)); return *this;}

  private:

    EmailChannelResponse m_emailChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
