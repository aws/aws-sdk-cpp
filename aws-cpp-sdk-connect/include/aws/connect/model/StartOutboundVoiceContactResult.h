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
  class AWS_CONNECT_API StartOutboundVoiceContactResult
  {
  public:
    StartOutboundVoiceContactResult();
    StartOutboundVoiceContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartOutboundVoiceContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of this contact within your Amazon Connect
     * instance.</p>
     */
    inline StartOutboundVoiceContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}

  private:

    Aws::String m_contactId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
