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
  class ImportHostKeyResult
  {
  public:
    AWS_TRANSFER_API ImportHostKeyResult();
    AWS_TRANSFER_API ImportHostKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ImportHostKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the server identifier that contains the imported key.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverId.assign(value); }
    inline ImportHostKeyResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline ImportHostKeyResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline ImportHostKeyResult& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the host key identifier for the imported key.</p>
     */
    inline const Aws::String& GetHostKeyId() const{ return m_hostKeyId; }
    inline void SetHostKeyId(const Aws::String& value) { m_hostKeyId = value; }
    inline void SetHostKeyId(Aws::String&& value) { m_hostKeyId = std::move(value); }
    inline void SetHostKeyId(const char* value) { m_hostKeyId.assign(value); }
    inline ImportHostKeyResult& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}
    inline ImportHostKeyResult& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}
    inline ImportHostKeyResult& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportHostKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportHostKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportHostKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_serverId;

    Aws::String m_hostKeyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
