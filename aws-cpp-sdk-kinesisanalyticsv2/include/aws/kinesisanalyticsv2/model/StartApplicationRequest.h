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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/RunConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API StartApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    StartApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline const RunConfiguration& GetRunConfiguration() const{ return m_runConfiguration; }

    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline bool RunConfigurationHasBeenSet() const { return m_runConfigurationHasBeenSet; }

    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline void SetRunConfiguration(const RunConfiguration& value) { m_runConfigurationHasBeenSet = true; m_runConfiguration = value; }

    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline void SetRunConfiguration(RunConfiguration&& value) { m_runConfigurationHasBeenSet = true; m_runConfiguration = std::move(value); }

    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline StartApplicationRequest& WithRunConfiguration(const RunConfiguration& value) { SetRunConfiguration(value); return *this;}

    /**
     * <p>Identifies the run configuration (start parameters) of a Kinesis Data
     * Analytics application.</p>
     */
    inline StartApplicationRequest& WithRunConfiguration(RunConfiguration&& value) { SetRunConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    RunConfiguration m_runConfiguration;
    bool m_runConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
