/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/MessagingSessionEndpoint.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMessagingSessionEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMessagingSessionEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMessagingSessionEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MessagingSessionEndpoint m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
