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
  class UpdateGatewayInformationRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API UpdateGatewayInformationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayInformation"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway to update.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }
    inline UpdateGatewayInformationRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline UpdateGatewayInformationRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline UpdateGatewayInformationRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated display name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const{ return m_gatewayDisplayName; }
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }
    inline void SetGatewayDisplayName(const Aws::String& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = value; }
    inline void SetGatewayDisplayName(Aws::String&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::move(value); }
    inline void SetGatewayDisplayName(const char* value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName.assign(value); }
    inline UpdateGatewayInformationRequest& WithGatewayDisplayName(const Aws::String& value) { SetGatewayDisplayName(value); return *this;}
    inline UpdateGatewayInformationRequest& WithGatewayDisplayName(Aws::String&& value) { SetGatewayDisplayName(std::move(value)); return *this;}
    inline UpdateGatewayInformationRequest& WithGatewayDisplayName(const char* value) { SetGatewayDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_gatewayDisplayName;
    bool m_gatewayDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
