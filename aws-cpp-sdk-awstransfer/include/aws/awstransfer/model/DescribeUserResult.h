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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/DescribedUser.h>
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
namespace Transfer
{
namespace Model
{
  class AWS_TRANSFER_API DescribeUserResult
  {
  public:
    DescribeUserResult();
    DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline DescribeUserResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline DescribeUserResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server that has this user
     * assigned.</p>
     */
    inline DescribeUserResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>An array containing the properties of the user account for the
     * <code>ServerID</code> value that you specified.</p>
     */
    inline const DescribedUser& GetUser() const{ return m_user; }

    /**
     * <p>An array containing the properties of the user account for the
     * <code>ServerID</code> value that you specified.</p>
     */
    inline void SetUser(const DescribedUser& value) { m_user = value; }

    /**
     * <p>An array containing the properties of the user account for the
     * <code>ServerID</code> value that you specified.</p>
     */
    inline void SetUser(DescribedUser&& value) { m_user = std::move(value); }

    /**
     * <p>An array containing the properties of the user account for the
     * <code>ServerID</code> value that you specified.</p>
     */
    inline DescribeUserResult& WithUser(const DescribedUser& value) { SetUser(value); return *this;}

    /**
     * <p>An array containing the properties of the user account for the
     * <code>ServerID</code> value that you specified.</p>
     */
    inline DescribeUserResult& WithUser(DescribedUser&& value) { SetUser(std::move(value)); return *this;}

  private:

    Aws::String m_serverId;

    DescribedUser m_user;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
