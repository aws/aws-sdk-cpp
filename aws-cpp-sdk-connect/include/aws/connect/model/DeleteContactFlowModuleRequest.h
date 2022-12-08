/**
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
  class DeleteContactFlowModuleRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteContactFlowModuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContactFlowModule"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


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
    inline DeleteContactFlowModuleRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteContactFlowModuleRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteContactFlowModuleRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the flow module.</p>
     */
    inline const Aws::String& GetContactFlowModuleId() const{ return m_contactFlowModuleId; }

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline void SetContactFlowModuleId(const Aws::String& value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId = value; }

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline void SetContactFlowModuleId(Aws::String&& value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId = std::move(value); }

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline void SetContactFlowModuleId(const char* value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId.assign(value); }

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline DeleteContactFlowModuleRequest& WithContactFlowModuleId(const Aws::String& value) { SetContactFlowModuleId(value); return *this;}

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline DeleteContactFlowModuleRequest& WithContactFlowModuleId(Aws::String&& value) { SetContactFlowModuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline DeleteContactFlowModuleRequest& WithContactFlowModuleId(const char* value) { SetContactFlowModuleId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactFlowModuleId;
    bool m_contactFlowModuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
