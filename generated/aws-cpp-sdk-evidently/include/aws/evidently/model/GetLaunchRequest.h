﻿/**
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
  class AWS_CLOUDWATCHEVIDENTLY_API GetLaunchRequest : public CloudWatchEvidentlyRequest
  {
  public:
    GetLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLaunch"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline const Aws::String& GetLaunch() const{ return m_launch; }

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline bool LaunchHasBeenSet() const { return m_launchHasBeenSet; }

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline void SetLaunch(const Aws::String& value) { m_launchHasBeenSet = true; m_launch = value; }

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline void SetLaunch(Aws::String&& value) { m_launchHasBeenSet = true; m_launch = std::move(value); }

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline void SetLaunch(const char* value) { m_launchHasBeenSet = true; m_launch.assign(value); }

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline GetLaunchRequest& WithLaunch(const Aws::String& value) { SetLaunch(value); return *this;}

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline GetLaunchRequest& WithLaunch(Aws::String&& value) { SetLaunch(std::move(value)); return *this;}

    /**
     * <p>The name of the launch that you want to see the details of.</p>
     */
    inline GetLaunchRequest& WithLaunch(const char* value) { SetLaunch(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline GetLaunchRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline GetLaunchRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline GetLaunchRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::String m_launch;
    bool m_launchHasBeenSet;

    Aws::String m_project;
    bool m_projectHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
