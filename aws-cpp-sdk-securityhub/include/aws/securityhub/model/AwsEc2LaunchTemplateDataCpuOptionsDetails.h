/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies the CPU options for an Amazon EC2 instance. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
   * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataCpuOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataCpuOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCpuOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCpuOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCpuOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of CPU cores for the instance. </p>
     */
    inline int GetCoreCount() const{ return m_coreCount; }

    /**
     * <p> The number of CPU cores for the instance. </p>
     */
    inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }

    /**
     * <p> The number of CPU cores for the instance. </p>
     */
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }

    /**
     * <p> The number of CPU cores for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCpuOptionsDetails& WithCoreCount(int value) { SetCoreCount(value); return *this;}


    /**
     * <p> The number of threads per CPU core. A value of <code>1</code> disables
     * multithreading for the instance, The default value is <code>2</code>. </p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p> The number of threads per CPU core. A value of <code>1</code> disables
     * multithreading for the instance, The default value is <code>2</code>. </p>
     */
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

    /**
     * <p> The number of threads per CPU core. A value of <code>1</code> disables
     * multithreading for the instance, The default value is <code>2</code>. </p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p> The number of threads per CPU core. A value of <code>1</code> disables
     * multithreading for the instance, The default value is <code>2</code>. </p>
     */
    inline AwsEc2LaunchTemplateDataCpuOptionsDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}

  private:

    int m_coreCount;
    bool m_coreCountHasBeenSet = false;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
