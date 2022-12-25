/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
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
  class GetFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetFeatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline const Aws::String& GetFeature() const{ return m_feature; }

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline void SetFeature(const Aws::String& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline void SetFeature(Aws::String&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline void SetFeature(const char* value) { m_featureHasBeenSet = true; m_feature.assign(value); }

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline GetFeatureRequest& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline GetFeatureRequest& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}

    /**
     * <p>The name of the feature that you want to retrieve information for.</p>
     */
    inline GetFeatureRequest& WithFeature(const char* value) { SetFeature(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline GetFeatureRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline GetFeatureRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline GetFeatureRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
