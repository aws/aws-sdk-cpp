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
#include <aws/workmail/WorkMail_EXPORTS.h>

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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API GetMailboxDetailsResult
  {
  public:
    GetMailboxDetailsResult();
    GetMailboxDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMailboxDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline int GetMailboxQuota() const{ return m_mailboxQuota; }

    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline void SetMailboxQuota(int value) { m_mailboxQuota = value; }

    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline GetMailboxDetailsResult& WithMailboxQuota(int value) { SetMailboxQuota(value); return *this;}


    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline double GetMailboxSize() const{ return m_mailboxSize; }

    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline void SetMailboxSize(double value) { m_mailboxSize = value; }

    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline GetMailboxDetailsResult& WithMailboxSize(double value) { SetMailboxSize(value); return *this;}

  private:

    int m_mailboxQuota;

    double m_mailboxSize;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
