/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ATHENA_API UpdateWorkGroupRequest : public AthenaRequest
  {
  public:
    UpdateWorkGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline UpdateWorkGroupRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline UpdateWorkGroupRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The specified workgroup that will be updated.</p>
     */
    inline UpdateWorkGroupRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The workgroup description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline UpdateWorkGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline UpdateWorkGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline UpdateWorkGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline const WorkGroupConfigurationUpdates& GetConfigurationUpdates() const{ return m_configurationUpdates; }

    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline bool ConfigurationUpdatesHasBeenSet() const { return m_configurationUpdatesHasBeenSet; }

    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline void SetConfigurationUpdates(const WorkGroupConfigurationUpdates& value) { m_configurationUpdatesHasBeenSet = true; m_configurationUpdates = value; }

    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline void SetConfigurationUpdates(WorkGroupConfigurationUpdates&& value) { m_configurationUpdatesHasBeenSet = true; m_configurationUpdates = std::move(value); }

    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline UpdateWorkGroupRequest& WithConfigurationUpdates(const WorkGroupConfigurationUpdates& value) { SetConfigurationUpdates(value); return *this;}

    /**
     * <p>The workgroup configuration that will be updated for the given workgroup.</p>
     */
    inline UpdateWorkGroupRequest& WithConfigurationUpdates(WorkGroupConfigurationUpdates&& value) { SetConfigurationUpdates(std::move(value)); return *this;}


    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }

    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline UpdateWorkGroupRequest& WithState(const WorkGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The workgroup state that will be updated for the given workgroup.</p>
     */
    inline UpdateWorkGroupRequest& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    WorkGroupConfigurationUpdates m_configurationUpdates;
    bool m_configurationUpdatesHasBeenSet;

    WorkGroupState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
