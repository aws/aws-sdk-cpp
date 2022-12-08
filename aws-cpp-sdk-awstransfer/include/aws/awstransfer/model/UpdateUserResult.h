/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  /**
   * <p> <code>UpdateUserResponse</code> returns the user name and identifier for the
   * request to update a user's properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateUserResponse">AWS
   * API Reference</a></p>
   */
  class UpdateUserResult
  {
  public:
    AWS_TRANSFER_API UpdateUserResult();
    AWS_TRANSFER_API UpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline UpdateUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline UpdateUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a user that is assigned to a server instance that
     * was specified in the request.</p>
     */
    inline UpdateUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_userName;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
