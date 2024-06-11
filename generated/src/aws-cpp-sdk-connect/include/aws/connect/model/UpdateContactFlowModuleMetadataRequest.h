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
    AWS_CONNECT_API UpdateContactFlowModuleMetadataRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateContactFlowModuleMetadataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow module.</p>
     */
    inline const Aws::String& GetContactFlowModuleId() const{ return m_contactFlowModuleId; }
    inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }
    inline void SetContactFlowModuleId(const Aws::String& value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId = value; }
    inline void SetContactFlowModuleId(Aws::String&& value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId = std::move(value); }
    inline void SetContactFlowModuleId(const char* value) { m_contactFlowModuleIdHasBeenSet = true; m_contactFlowModuleId.assign(value); }
    inline UpdateContactFlowModuleMetadataRequest& WithContactFlowModuleId(const Aws::String& value) { SetContactFlowModuleId(value); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithContactFlowModuleId(Aws::String&& value) { SetContactFlowModuleId(std::move(value)); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithContactFlowModuleId(const char* value) { SetContactFlowModuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow module.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateContactFlowModuleMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow module.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateContactFlowModuleMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of flow module.</p>
     */
    inline const ContactFlowModuleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ContactFlowModuleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ContactFlowModuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateContactFlowModuleMetadataRequest& WithState(const ContactFlowModuleState& value) { SetState(value); return *this;}
    inline UpdateContactFlowModuleMetadataRequest& WithState(ContactFlowModuleState&& value) { SetState(std::move(value)); return *this;}
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

    ContactFlowModuleState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
