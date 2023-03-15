﻿/**
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
  class CreateAccessResult
  {
  public:
    AWS_TRANSFER_API CreateAccessResult();
    AWS_TRANSFER_API CreateAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateAccessResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline CreateAccessResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server that the user is attached to.</p>
     */
    inline CreateAccessResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalId = value; }

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalId = std::move(value); }

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline void SetExternalId(const char* value) { m_externalId.assign(value); }

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline CreateAccessResult& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline CreateAccessResult& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external identifier of the group whose users have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family.</p>
     */
    inline CreateAccessResult& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_externalId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
