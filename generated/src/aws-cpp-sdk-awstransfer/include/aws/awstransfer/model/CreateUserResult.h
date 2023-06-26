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
  class CreateUserResult
  {
  public:
    AWS_TRANSFER_API CreateUserResult();
    AWS_TRANSFER_API CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline CreateUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline CreateUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a Transfer Family user.</p>
     */
    inline CreateUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_userName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
