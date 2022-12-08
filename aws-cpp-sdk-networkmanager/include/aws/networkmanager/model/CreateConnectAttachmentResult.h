/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectAttachment.h>
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
namespace NetworkManager
{
namespace Model
{
  class CreateConnectAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult();
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline const ConnectAttachment& GetConnectAttachment() const{ return m_connectAttachment; }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline void SetConnectAttachment(const ConnectAttachment& value) { m_connectAttachment = value; }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline void SetConnectAttachment(ConnectAttachment&& value) { m_connectAttachment = std::move(value); }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline CreateConnectAttachmentResult& WithConnectAttachment(const ConnectAttachment& value) { SetConnectAttachment(value); return *this;}

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline CreateConnectAttachmentResult& WithConnectAttachment(ConnectAttachment&& value) { SetConnectAttachment(std::move(value)); return *this;}

  private:

    ConnectAttachment m_connectAttachment;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
