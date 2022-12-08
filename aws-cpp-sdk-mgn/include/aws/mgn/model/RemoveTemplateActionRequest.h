/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class RemoveTemplateActionRequest : public MgnRequest
  {
  public:
    AWS_MGN_API RemoveTemplateActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTemplateAction"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline void SetActionID(const Aws::String& value) { m_actionIDHasBeenSet = true; m_actionID = value; }

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline void SetActionID(Aws::String&& value) { m_actionIDHasBeenSet = true; m_actionID = std::move(value); }

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline void SetActionID(const char* value) { m_actionIDHasBeenSet = true; m_actionID.assign(value); }

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline RemoveTemplateActionRequest& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline RemoveTemplateActionRequest& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline RemoveTemplateActionRequest& WithActionID(const char* value) { SetActionID(value); return *this;}


    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline RemoveTemplateActionRequest& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline RemoveTemplateActionRequest& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline RemoveTemplateActionRequest& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}

  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
