﻿/**
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
  class GetGatewayRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API GetGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGateway"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }
    inline GetGatewayRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline GetGatewayRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline GetGatewayRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
