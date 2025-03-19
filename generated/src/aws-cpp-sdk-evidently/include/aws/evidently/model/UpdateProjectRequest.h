/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/ProjectAppConfigResourceConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Use this parameter if the project will use client-side evaluation powered by
     * AppConfig. Client-side evaluation allows your application to assign variations
     * to user sessions locally instead of by calling the <a
     * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
     * operation. This mitigates the latency and availability risks that come with an
     * API call. allows you to</p> <p>This parameter is a structure that contains
     * information about the AppConfig application that will be used for client-side
     * evaluation.</p>
     */
    inline const ProjectAppConfigResourceConfig& GetAppConfigResource() const { return m_appConfigResource; }
    inline bool AppConfigResourceHasBeenSet() const { return m_appConfigResourceHasBeenSet; }
    template<typename AppConfigResourceT = ProjectAppConfigResourceConfig>
    void SetAppConfigResource(AppConfigResourceT&& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = std::forward<AppConfigResourceT>(value); }
    template<typename AppConfigResourceT = ProjectAppConfigResourceConfig>
    UpdateProjectRequest& WithAppConfigResource(AppConfigResourceT&& value) { SetAppConfigResource(std::forward<AppConfigResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    UpdateProjectRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    ProjectAppConfigResourceConfig m_appConfigResource;
    bool m_appConfigResourceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
