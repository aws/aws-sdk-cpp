/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateEnvironmentRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline CreateEnvironmentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateEnvironmentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateEnvironmentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A name for the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline const Aws::Vector<Monitor>& GetMonitors() const{ return m_monitors; }

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline bool MonitorsHasBeenSet() const { return m_monitorsHasBeenSet; }

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline void SetMonitors(const Aws::Vector<Monitor>& value) { m_monitorsHasBeenSet = true; m_monitors = value; }

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline void SetMonitors(Aws::Vector<Monitor>&& value) { m_monitorsHasBeenSet = true; m_monitors = std::move(value); }

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline CreateEnvironmentRequest& WithMonitors(const Aws::Vector<Monitor>& value) { SetMonitors(value); return *this;}

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline CreateEnvironmentRequest& WithMonitors(Aws::Vector<Monitor>&& value) { SetMonitors(std::move(value)); return *this;}

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline CreateEnvironmentRequest& AddMonitors(const Monitor& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(value); return *this; }

    /**
     * <p>Amazon CloudWatch alarms to monitor during the deployment process.</p>
     */
    inline CreateEnvironmentRequest& AddMonitors(Monitor&& value) { m_monitorsHasBeenSet = true; m_monitors.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the environment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Monitor> m_monitors;
    bool m_monitorsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
