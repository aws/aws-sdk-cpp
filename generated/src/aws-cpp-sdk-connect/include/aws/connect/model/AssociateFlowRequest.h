/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FlowAssociationResourceType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateFlowRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFlow"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline AssociateFlowRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline AssociateFlowRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline AssociateFlowRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline AssociateFlowRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline AssociateFlowRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline AssociateFlowRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const{ return m_flowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(const Aws::String& value) { m_flowIdHasBeenSet = true; m_flowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(Aws::String&& value) { m_flowIdHasBeenSet = true; m_flowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(const char* value) { m_flowIdHasBeenSet = true; m_flowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline AssociateFlowRequest& WithFlowId(const Aws::String& value) { SetFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline AssociateFlowRequest& WithFlowId(Aws::String&& value) { SetFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline AssociateFlowRequest& WithFlowId(const char* value) { SetFlowId(value); return *this;}


    /**
     * <p>A valid resource type.</p>
     */
    inline const FlowAssociationResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>A valid resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(const FlowAssociationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(FlowAssociationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>A valid resource type.</p>
     */
    inline AssociateFlowRequest& WithResourceType(const FlowAssociationResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>A valid resource type.</p>
     */
    inline AssociateFlowRequest& WithResourceType(FlowAssociationResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;

    FlowAssociationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
