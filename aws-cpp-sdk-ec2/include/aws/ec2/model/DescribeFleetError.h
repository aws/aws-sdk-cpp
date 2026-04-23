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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/LaunchTemplateAndOverridesResponse.h>
#include <aws/ec2/model/InstanceLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the instances that could not be launched by the
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleetError">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeFleetError
  {
  public:
    DescribeFleetError();
    DescribeFleetError(const Aws::Utils::Xml::XmlNode& xmlNode);
    DescribeFleetError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline const LaunchTemplateAndOverridesResponse& GetLaunchTemplateAndOverrides() const{ return m_launchTemplateAndOverrides; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline bool LaunchTemplateAndOverridesHasBeenSet() const { return m_launchTemplateAndOverridesHasBeenSet; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline void SetLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = value; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline void SetLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = std::move(value); }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline DescribeFleetError& WithLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { SetLaunchTemplateAndOverrides(value); return *this;}

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline DescribeFleetError& WithLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { SetLaunchTemplateAndOverrides(std::move(value)); return *this;}


    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline const InstanceLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline void SetLifecycle(const InstanceLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline void SetLifecycle(InstanceLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline DescribeFleetError& WithLifecycle(const InstanceLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Indicates if the instance that could not be launched was a Spot Instance or
     * On-Demand Instance.</p>
     */
    inline DescribeFleetError& WithLifecycle(InstanceLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that indicates why the instance could not be launched. For
     * more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that describes why the instance could not be launched. For
     * more information about error messages, see ee <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html.html">Error
     * Codes</a>.</p>
     */
    inline DescribeFleetError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    LaunchTemplateAndOverridesResponse m_launchTemplateAndOverrides;
    bool m_launchTemplateAndOverridesHasBeenSet;

    InstanceLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
