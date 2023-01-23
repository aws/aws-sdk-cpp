/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/MessagingSessionEndpoint.h>
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
namespace Chime
{
namespace Model
{
  class GetMessagingSessionEndpointResult
  {
  public:
    AWS_CHIME_API GetMessagingSessionEndpointResult();
    AWS_CHIME_API GetMessagingSessionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetMessagingSessionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint returned in the response.</p>
     */
    inline const MessagingSessionEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint returned in the response.</p>
     */
    inline void SetEndpoint(const MessagingSessionEndpoint& value) { m_endpoint = value; }

    /**
     * <p>The endpoint returned in the response.</p>
     */
    inline void SetEndpoint(MessagingSessionEndpoint&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint returned in the response.</p>
     */
    inline GetMessagingSessionEndpointResult& WithEndpoint(const MessagingSessionEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint returned in the response.</p>
     */
    inline GetMessagingSessionEndpointResult& WithEndpoint(MessagingSessionEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}

  private:

    MessagingSessionEndpoint m_endpoint;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
