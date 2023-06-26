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
  class UpdateServerResult
  {
  public:
    AWS_TRANSFER_API UpdateServerResult();
    AWS_TRANSFER_API UpdateServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline UpdateServerResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline UpdateServerResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server that the Transfer Family
     * user is assigned to.</p>
     */
    inline UpdateServerResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
