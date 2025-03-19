/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ListVoiceConnectorTerminationCredentialsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult() = default;
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of user names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsernames() const { return m_usernames; }
    template<typename UsernamesT = Aws::Vector<Aws::String>>
    void SetUsernames(UsernamesT&& value) { m_usernamesHasBeenSet = true; m_usernames = std::forward<UsernamesT>(value); }
    template<typename UsernamesT = Aws::Vector<Aws::String>>
    ListVoiceConnectorTerminationCredentialsResult& WithUsernames(UsernamesT&& value) { SetUsernames(std::forward<UsernamesT>(value)); return *this;}
    template<typename UsernamesT = Aws::String>
    ListVoiceConnectorTerminationCredentialsResult& AddUsernames(UsernamesT&& value) { m_usernamesHasBeenSet = true; m_usernames.emplace_back(std::forward<UsernamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVoiceConnectorTerminationCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_usernames;
    bool m_usernamesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
