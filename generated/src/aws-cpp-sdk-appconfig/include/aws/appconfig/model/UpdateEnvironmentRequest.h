﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Monitor.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateEnvironmentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateEnvironmentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline const Aws::Vector<Monitor>& GetMonitors() const{ return m_monitors; }
    inline bool MonitorsHasBeenSet() const { return m_monitorsHasBeenSet; }
    inline void SetMonitors(const Aws::Vector<Monitor>& value) { m_monitorsHasBeenSet = true; m_monitors = value; }
    inline void SetMonitors(Aws::Vector<Monitor>&& value) { m_monitorsHasBeenSet = true; m_monitors = std::move(value); }
    inline UpdateEnvironmentRequest& WithMonitors(const Aws::Vector<Monitor>& value) { SetMonitors(value); return *this;}
    inline UpdateEnvironmentRequest& WithMonitors(Aws::Vector<Monitor>&& value) { SetMonitors(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddMonitors(const Monitor& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(value); return *this; }
    inline UpdateEnvironmentRequest& AddMonitors(Monitor&& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Monitor> m_monitors;
    bool m_monitorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
