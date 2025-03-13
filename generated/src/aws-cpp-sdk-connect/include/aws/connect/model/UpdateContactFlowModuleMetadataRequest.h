/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModuleState.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactFlowModuleMetadataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactFlowModuleMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactFlowModuleMetadata"; }

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
    UpdateContactFlowModuleMetadataRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow module.</p>
     */
    inline const Aws::String& GetContactFlowModuleId() const { return m_contactFlowModuleId; }
    inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }
    template<typename ContactFlowModuleIdT = Aws::String>
    void SetContactFlowModuleId(ContactFlowModuleIdT&& value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId = std::forward<ContactFlowModuleIdT>(value); }
    template<typename ContactFlowModuleIdT = Aws::String>
    UpdateContactFlowModuleMetadataRequest& WithContactFlowModuleId(ContactFlowModuleIdT&& value) { SetContactFlowModuleId(std::forward<ContactFlowModuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow module.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateContactFlowModuleMetadataRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow module.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateContactFlowModuleMetadataRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of flow module.</p>
     */
    inline ContactFlowModuleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ContactFlowModuleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateContactFlowModuleMetadataRequest& WithState(ContactFlowModuleState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactFlowModuleId;
    bool m_contactFlowModuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ContactFlowModuleState m_state{ContactFlowModuleState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
