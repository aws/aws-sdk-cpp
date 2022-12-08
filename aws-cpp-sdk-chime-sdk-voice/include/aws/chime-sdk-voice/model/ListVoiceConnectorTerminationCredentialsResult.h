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
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult();
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorTerminationCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetUsernames() const{ return m_usernames; }

    
    inline void SetUsernames(const Aws::Vector<Aws::String>& value) { m_usernames = value; }

    
    inline void SetUsernames(Aws::Vector<Aws::String>&& value) { m_usernames = std::move(value); }

    
    inline ListVoiceConnectorTerminationCredentialsResult& WithUsernames(const Aws::Vector<Aws::String>& value) { SetUsernames(value); return *this;}

    
    inline ListVoiceConnectorTerminationCredentialsResult& WithUsernames(Aws::Vector<Aws::String>&& value) { SetUsernames(std::move(value)); return *this;}

    
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(const Aws::String& value) { m_usernames.push_back(value); return *this; }

    
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(Aws::String&& value) { m_usernames.push_back(std::move(value)); return *this; }

    
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(const char* value) { m_usernames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_usernames;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
