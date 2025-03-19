/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This is a structure that defines the configuration of how your application
   * integrates with AppConfig to run client-side evaluation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ProjectAppConfigResource">AWS
   * API Reference</a></p>
   */
  class ProjectAppConfigResource
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResource() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ProjectAppConfigResource& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AppConfig profile to use for client-side evaluation. </p>
     */
    inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
    template<typename ConfigurationProfileIdT = Aws::String>
    void SetConfigurationProfileId(ConfigurationProfileIdT&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value); }
    template<typename ConfigurationProfileIdT = Aws::String>
    ProjectAppConfigResource& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    ProjectAppConfigResource& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
