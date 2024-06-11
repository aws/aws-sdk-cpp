/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/WorkGroupConfigurationUpdates.h>
#include <aws/athena/model/WorkGroupState.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class UpdateWorkGroupRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API UpdateWorkGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkGroup"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline UpdateWorkGroupRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline UpdateWorkGroupRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline UpdateWorkGroupRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateWorkGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWorkGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWorkGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration updates for an Athena SQL workgroup.</p>
     */
    inline const WorkGroupConfigurationUpdates& GetConfigurationUpdates() const{ return m_configurationUpdates; }
    inline bool ConfigurationUpdatesHasBeenSet() const { return m_configurationUpdatesHasBeenSet; }
    inline void SetConfigurationUpdates(const WorkGroupConfigurationUpdates& value) { m_configurationUpdatesHasBeenSet = true; m_configurationUpdates = value; }
    inline void SetConfigurationUpdates(WorkGroupConfigurationUpdates&& value) { m_configurationUpdatesHasBeenSet = true; m_configurationUpdates = std::move(value); }
    inline UpdateWorkGroupRequest& WithConfigurationUpdates(const WorkGroupConfigurationUpdates& value) { SetConfigurationUpdates(value); return *this;}
    inline UpdateWorkGroupRequest& WithConfigurationUpdates(WorkGroupConfigurationUpdates&& value) { SetConfigurationUpdates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateWorkGroupRequest& WithState(const WorkGroupState& value) { SetState(value); return *this;}
    inline UpdateWorkGroupRequest& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkGroupConfigurationUpdates m_configurationUpdates;
    bool m_configurationUpdatesHasBeenSet = false;

    WorkGroupState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
