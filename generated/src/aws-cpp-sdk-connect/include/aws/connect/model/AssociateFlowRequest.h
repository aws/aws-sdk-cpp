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
    AWS_CONNECT_API AssociateFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFlow"; }

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
    AssociateFlowRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource.</p> <ul> <li> <p>Amazon Web Services End User
     * Messaging SMS phone number ARN when using <code>SMS_PHONE_NUMBER</code> </p>
     * </li> <li> <p>Amazon Web Services End User Messaging Social phone number ARN
     * when using <code>WHATSAPP_MESSAGING_PHONE_NUMBER</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    AssociateFlowRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const { return m_flowId; }
    inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
    template<typename FlowIdT = Aws::String>
    void SetFlowId(FlowIdT&& value) { m_flowIdHasBeenSet = true; m_flowId = std::forward<FlowIdT>(value); }
    template<typename FlowIdT = Aws::String>
    AssociateFlowRequest& WithFlowId(FlowIdT&& value) { SetFlowId(std::forward<FlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid resource type.</p>
     */
    inline FlowAssociationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(FlowAssociationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline AssociateFlowRequest& WithResourceType(FlowAssociationResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;

    FlowAssociationResourceType m_resourceType{FlowAssociationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
