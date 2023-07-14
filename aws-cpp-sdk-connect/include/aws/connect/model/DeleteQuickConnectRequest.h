﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API DeleteQuickConnectRequest : public ConnectRequest
  {
  public:
    DeleteQuickConnectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQuickConnect"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteQuickConnectRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteQuickConnectRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteQuickConnectRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = value; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::move(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const char* value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId.assign(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline DeleteQuickConnectRequest& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline DeleteQuickConnectRequest& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline DeleteQuickConnectRequest& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
