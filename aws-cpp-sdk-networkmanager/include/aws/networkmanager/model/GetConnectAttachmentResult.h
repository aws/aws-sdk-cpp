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
  class GetConnectAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult();
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline const ConnectAttachment& GetConnectAttachment() const{ return m_connectAttachment; }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline void SetConnectAttachment(const ConnectAttachment& value) { m_connectAttachment = value; }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline void SetConnectAttachment(ConnectAttachment&& value) { m_connectAttachment = std::move(value); }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline GetConnectAttachmentResult& WithConnectAttachment(const ConnectAttachment& value) { SetConnectAttachment(value); return *this;}

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline GetConnectAttachmentResult& WithConnectAttachment(ConnectAttachment&& value) { SetConnectAttachment(std::move(value)); return *this;}

  private:

    ConnectAttachment m_connectAttachment;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
