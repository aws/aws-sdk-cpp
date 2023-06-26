/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class StartOutboundVoiceContactResult
  {
  public:
    AWS_CONNECT_API StartOutboundVoiceContactResult();
    AWS_CONNECT_API StartOutboundVoiceContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartOutboundVoiceContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartOutboundVoiceContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartOutboundVoiceContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartOutboundVoiceContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_contactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
