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
  class UpdateHostKeyResult
  {
  public:
    AWS_TRANSFER_API UpdateHostKeyResult();
    AWS_TRANSFER_API UpdateHostKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateHostKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline UpdateHostKeyResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline UpdateHostKeyResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Returns the server identifier for the server that contains the updated host
     * key.</p>
     */
    inline UpdateHostKeyResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline const Aws::String& GetHostKeyId() const{ return m_hostKeyId; }

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline void SetHostKeyId(const Aws::String& value) { m_hostKeyId = value; }

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline void SetHostKeyId(Aws::String&& value) { m_hostKeyId = std::move(value); }

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline void SetHostKeyId(const char* value) { m_hostKeyId.assign(value); }

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline UpdateHostKeyResult& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline UpdateHostKeyResult& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}

    /**
     * <p>Returns the host key identifier for the updated host key.</p>
     */
    inline UpdateHostKeyResult& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_hostKeyId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
