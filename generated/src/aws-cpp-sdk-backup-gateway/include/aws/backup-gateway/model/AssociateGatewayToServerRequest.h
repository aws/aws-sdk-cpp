/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class AssociateGatewayToServerRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API AssociateGatewayToServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateGatewayToServer"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline AssociateGatewayToServerRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline AssociateGatewayToServerRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline AssociateGatewayToServerRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline const Aws::String& GetServerArn() const{ return m_serverArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline bool ServerArnHasBeenSet() const { return m_serverArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline void SetServerArn(const Aws::String& value) { m_serverArnHasBeenSet = true; m_serverArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline void SetServerArn(Aws::String&& value) { m_serverArnHasBeenSet = true; m_serverArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline void SetServerArn(const char* value) { m_serverArnHasBeenSet = true; m_serverArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline AssociateGatewayToServerRequest& WithServerArn(const Aws::String& value) { SetServerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline AssociateGatewayToServerRequest& WithServerArn(Aws::String&& value) { SetServerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the server that hosts your virtual
     * machines.</p>
     */
    inline AssociateGatewayToServerRequest& WithServerArn(const char* value) { SetServerArn(value); return *this;}

  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_serverArn;
    bool m_serverArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
