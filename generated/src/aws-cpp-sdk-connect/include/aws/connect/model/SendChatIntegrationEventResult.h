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
  class SendChatIntegrationEventResult
  {
  public:
    AWS_CONNECT_API SendChatIntegrationEventResult();
    AWS_CONNECT_API SendChatIntegrationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SendChatIntegrationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactId = value; }

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactId = std::move(value); }

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactId.assign(value); }

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline SendChatIntegrationEventResult& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline SendChatIntegrationEventResult& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline SendChatIntegrationEventResult& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


    /**
     * <p>Whether handling the integration event resulted in creating a new chat or
     * acting on existing chat.</p>
     */
    inline bool GetNewChatCreated() const{ return m_newChatCreated; }

    /**
     * <p>Whether handling the integration event resulted in creating a new chat or
     * acting on existing chat.</p>
     */
    inline void SetNewChatCreated(bool value) { m_newChatCreated = value; }

    /**
     * <p>Whether handling the integration event resulted in creating a new chat or
     * acting on existing chat.</p>
     */
    inline SendChatIntegrationEventResult& WithNewChatCreated(bool value) { SetNewChatCreated(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SendChatIntegrationEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SendChatIntegrationEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SendChatIntegrationEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_initialContactId;

    bool m_newChatCreated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
