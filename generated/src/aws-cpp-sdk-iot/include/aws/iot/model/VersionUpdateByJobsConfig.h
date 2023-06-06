/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Configuration to manage IoT Job's package version reporting. If configured,
   * Jobs updates the thing's reserved named shadow with the package version
   * information up on successful job completion.</p> <p> <b>Note:</b> For each job,
   * the destinationPackageVersions attribute has to be set with the correct data for
   * Jobs to report to the thing shadow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/VersionUpdateByJobsConfig">AWS
   * API Reference</a></p>
   */
  class VersionUpdateByJobsConfig
  {
  public:
    AWS_IOT_API VersionUpdateByJobsConfig();
    AWS_IOT_API VersionUpdateByJobsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API VersionUpdateByJobsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the Job is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the Job is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the Job is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the Job is enabled or not.</p>
     */
    inline VersionUpdateByJobsConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline VersionUpdateByJobsConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline VersionUpdateByJobsConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to the IoT
     * jobs service to update the reserved named shadow when the job successfully
     * completes.</p>
     */
    inline VersionUpdateByJobsConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
