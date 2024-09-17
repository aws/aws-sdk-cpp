/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/EnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Monitor.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppConfig
{
namespace Model
{

  class Environment
  {
  public:
    AWS_APPCONFIG_API Environment();
    AWS_APPCONFIG_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline Environment& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline Environment& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline Environment& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Environment& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Environment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Environment& WithId(const char* value) { SetId(value); return *this;}
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
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Environment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment. An environment can be in one of the following
     * states: <code>READY_FOR_DEPLOYMENT</code>, <code>DEPLOYING</code>,
     * <code>ROLLING_BACK</code>, or <code>ROLLED_BACK</code> </p>
     */
    inline const EnvironmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EnvironmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EnvironmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Environment& WithState(const EnvironmentState& value) { SetState(value); return *this;}
    inline Environment& WithState(EnvironmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch alarms monitored during the deployment.</p>
     */
    inline const Aws::Vector<Monitor>& GetMonitors() const{ return m_monitors; }
    inline bool MonitorsHasBeenSet() const { return m_monitorsHasBeenSet; }
    inline void SetMonitors(const Aws::Vector<Monitor>& value) { m_monitorsHasBeenSet = true; m_monitors = value; }
    inline void SetMonitors(Aws::Vector<Monitor>&& value) { m_monitorsHasBeenSet = true; m_monitors = std::move(value); }
    inline Environment& WithMonitors(const Aws::Vector<Monitor>& value) { SetMonitors(value); return *this;}
    inline Environment& WithMonitors(Aws::Vector<Monitor>&& value) { SetMonitors(std::move(value)); return *this;}
    inline Environment& AddMonitors(const Monitor& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(value); return *this; }
    inline Environment& AddMonitors(Monitor&& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Environment& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Environment& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Environment& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EnvironmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Monitor> m_monitors;
    bool m_monitorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
