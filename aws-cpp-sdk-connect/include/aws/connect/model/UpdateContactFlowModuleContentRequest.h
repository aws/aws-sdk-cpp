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
  class UpdateContactFlowModuleContentRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactFlowModuleContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactFlowModuleContent"; }

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
    inline UpdateContactFlowModuleContentRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline UpdateContactFlowModuleContentRequest& WithContactFlowModuleId(const Aws::String& value) { SetContactFlowModuleId(value); return *this;}

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithContactFlowModuleId(Aws::String&& value) { SetContactFlowModuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow module.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithContactFlowModuleId(const char* value) { SetContactFlowModuleId(value); return *this;}


    /**
     * <p>The content of the flow module.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the flow module.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the flow module.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the flow module.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the flow module.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the flow module.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the flow module.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the flow module.</p>
     */
    inline UpdateContactFlowModuleContentRequest& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactFlowModuleId;
    bool m_contactFlowModuleIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
