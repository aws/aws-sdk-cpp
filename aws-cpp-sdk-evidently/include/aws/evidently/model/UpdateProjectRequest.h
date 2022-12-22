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
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


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
    inline const ProjectAppConfigResourceConfig& GetAppConfigResource() const{ return m_appConfigResource; }

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
    inline bool AppConfigResourceHasBeenSet() const { return m_appConfigResourceHasBeenSet; }

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
    inline void SetAppConfigResource(const ProjectAppConfigResourceConfig& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = value; }

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
    inline void SetAppConfigResource(ProjectAppConfigResourceConfig&& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = std::move(value); }

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
    inline UpdateProjectRequest& WithAppConfigResource(const ProjectAppConfigResourceConfig& value) { SetAppConfigResource(value); return *this;}

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
    inline UpdateProjectRequest& WithAppConfigResource(ProjectAppConfigResourceConfig&& value) { SetAppConfigResource(std::move(value)); return *this;}


    /**
     * <p>An optional description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(const char* value) { SetProject(value); return *this;}

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
