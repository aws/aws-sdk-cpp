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
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Configuration options for sending command output to CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CloudWatchOutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API CloudWatchOutputConfig
  {
  public:
    CloudWatchOutputConfig();
    CloudWatchOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group where you want to send command output.
     * If you don't specify a group name, Systems Manager automatically creates a log
     * group for you. The log group uses the following naming format:
     * aws/ssm/<i>SystemsManagerDocumentName</i>.</p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}


    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline bool GetCloudWatchOutputEnabled() const{ return m_cloudWatchOutputEnabled; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline bool CloudWatchOutputEnabledHasBeenSet() const { return m_cloudWatchOutputEnabledHasBeenSet; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchOutputEnabled(bool value) { m_cloudWatchOutputEnabledHasBeenSet = true; m_cloudWatchOutputEnabled = value; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchOutputEnabled(bool value) { SetCloudWatchOutputEnabled(value); return *this;}

  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet;

    bool m_cloudWatchOutputEnabled;
    bool m_cloudWatchOutputEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
