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
  class CreateServerResult
  {
  public:
    AWS_TRANSFER_API CreateServerResult();
    AWS_TRANSFER_API CreateServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline CreateServerResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline CreateServerResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The service-assigned identifier of the server that is created.</p>
     */
    inline CreateServerResult& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    Aws::String m_serverId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
