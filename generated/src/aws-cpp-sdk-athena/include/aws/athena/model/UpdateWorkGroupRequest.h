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
    AWS_ATHENA_API UpdateWorkGroupRequest() = default;

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
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    UpdateWorkGroupRequest& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration updates for an Athena SQL workgroup.</p>
     */
    inline const WorkGroupConfigurationUpdates& GetConfigurationUpdates() const { return m_configurationUpdates; }
    inline bool ConfigurationUpdatesHasBeenSet() const { return m_configurationUpdatesHasBeenSet; }
    template<typename ConfigurationUpdatesT = WorkGroupConfigurationUpdates>
    void SetConfigurationUpdates(ConfigurationUpdatesT&& value) { m_configurationUpdatesHasBeenSet = true; m_configurationUpdates = std::forward<ConfigurationUpdatesT>(value); }
    template<typename ConfigurationUpdatesT = WorkGroupConfigurationUpdates>
    UpdateWorkGroupRequest& WithConfigurationUpdates(ConfigurationUpdatesT&& value) { SetConfigurationUpdates(std::forward<ConfigurationUpdatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline WorkGroupState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkGroupState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateWorkGroupRequest& WithState(WorkGroupState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkGroupConfigurationUpdates m_configurationUpdates;
    bool m_configurationUpdatesHasBeenSet = false;

    WorkGroupState m_state{WorkGroupState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
