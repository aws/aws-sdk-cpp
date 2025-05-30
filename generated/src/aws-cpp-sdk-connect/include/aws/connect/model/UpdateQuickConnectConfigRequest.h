﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QuickConnectConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateQuickConnectConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateQuickConnectConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickConnectConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateQuickConnectConfigRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectId() const { return m_quickConnectId; }
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }
    template<typename QuickConnectIdT = Aws::String>
    void SetQuickConnectId(QuickConnectIdT&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::forward<QuickConnectIdT>(value); }
    template<typename QuickConnectIdT = Aws::String>
    UpdateQuickConnectConfigRequest& WithQuickConnectId(QuickConnectIdT&& value) { SetQuickConnectId(std::forward<QuickConnectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the configuration settings for the quick connect.</p>
     */
    inline const QuickConnectConfig& GetQuickConnectConfig() const { return m_quickConnectConfig; }
    inline bool QuickConnectConfigHasBeenSet() const { return m_quickConnectConfigHasBeenSet; }
    template<typename QuickConnectConfigT = QuickConnectConfig>
    void SetQuickConnectConfig(QuickConnectConfigT&& value) { m_quickConnectConfigHasBeenSet = true; m_quickConnectConfig = std::forward<QuickConnectConfigT>(value); }
    template<typename QuickConnectConfigT = QuickConnectConfig>
    UpdateQuickConnectConfigRequest& WithQuickConnectConfig(QuickConnectConfigT&& value) { SetQuickConnectConfig(std::forward<QuickConnectConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;

    QuickConnectConfig m_quickConnectConfig;
    bool m_quickConnectConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
