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
    AWS_CONNECT_API SendChatIntegrationEventResult() = default;
    AWS_CONNECT_API SendChatIntegrationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SendChatIntegrationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier of chat contact used to handle integration event. This may be null
     * if the integration event is not valid without an already existing chat
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    SendChatIntegrationEventResult& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether handling the integration event resulted in creating a new chat or
     * acting on existing chat.</p>
     */
    inline bool GetNewChatCreated() const { return m_newChatCreated; }
    inline void SetNewChatCreated(bool value) { m_newChatCreatedHasBeenSet = true; m_newChatCreated = value; }
    inline SendChatIntegrationEventResult& WithNewChatCreated(bool value) { SetNewChatCreated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendChatIntegrationEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    bool m_newChatCreated{false};
    bool m_newChatCreatedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
