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
   * <p> The minimum and maximum amount of memory, in MiB, for the accelerators on an
   * Amazon EC2 instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum amount of memory, in MiB. If this parameter isn't specified,
     * there's no maximum limit. </p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p> The maximum amount of memory, in MiB. If this parameter isn't specified,
     * there's no maximum limit. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum amount of memory, in MiB. If this parameter isn't specified,
     * there's no maximum limit. </p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum amount of memory, in MiB. If this parameter isn't specified,
     * there's no maximum limit. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p> The minimum amount of memory, in MiB. If <code>0</code> is specified,
     * there's no maximum limit. </p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p> The minimum amount of memory, in MiB. If <code>0</code> is specified,
     * there's no maximum limit. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum amount of memory, in MiB. If <code>0</code> is specified,
     * there's no maximum limit. </p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum amount of memory, in MiB. If <code>0</code> is specified,
     * there's no maximum limit. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& WithMin(int value) { SetMin(value); return *this;}

  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
