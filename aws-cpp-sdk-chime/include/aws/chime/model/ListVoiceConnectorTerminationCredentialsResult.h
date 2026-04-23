/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API ListVoiceConnectorTerminationCredentialsResult
  {
  public:
    ListVoiceConnectorTerminationCredentialsResult();
    ListVoiceConnectorTerminationCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVoiceConnectorTerminationCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of user names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsernames() const{ return m_usernames; }

    /**
     * <p>A list of user names.</p>
     */
    inline void SetUsernames(const Aws::Vector<Aws::String>& value) { m_usernames = value; }

    /**
     * <p>A list of user names.</p>
     */
    inline void SetUsernames(Aws::Vector<Aws::String>&& value) { m_usernames = std::move(value); }

    /**
     * <p>A list of user names.</p>
     */
    inline ListVoiceConnectorTerminationCredentialsResult& WithUsernames(const Aws::Vector<Aws::String>& value) { SetUsernames(value); return *this;}

    /**
     * <p>A list of user names.</p>
     */
    inline ListVoiceConnectorTerminationCredentialsResult& WithUsernames(Aws::Vector<Aws::String>&& value) { SetUsernames(std::move(value)); return *this;}

    /**
     * <p>A list of user names.</p>
     */
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(const Aws::String& value) { m_usernames.push_back(value); return *this; }

    /**
     * <p>A list of user names.</p>
     */
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(Aws::String&& value) { m_usernames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of user names.</p>
     */
    inline ListVoiceConnectorTerminationCredentialsResult& AddUsernames(const char* value) { m_usernames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_usernames;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
