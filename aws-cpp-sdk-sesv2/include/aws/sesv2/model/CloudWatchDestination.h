/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/CloudWatchDimensionConfiguration.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon CloudWatch destination for email events. You
   * can use Amazon CloudWatch to monitor and gain insights on your email sending
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CloudWatchDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchDestination
  {
  public:
    AWS_SESV2_API CloudWatchDestination();
    AWS_SESV2_API CloudWatchDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API CloudWatchDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<CloudWatchDimensionConfiguration>& GetDimensionConfigurations() const{ return m_dimensionConfigurations; }

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline void SetDimensionConfigurations(const Aws::Vector<CloudWatchDimensionConfiguration>& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = value; }

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline void SetDimensionConfigurations(Aws::Vector<CloudWatchDimensionConfiguration>&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::move(value); }

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& WithDimensionConfigurations(const Aws::Vector<CloudWatchDimensionConfiguration>& value) { SetDimensionConfigurations(value); return *this;}

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& WithDimensionConfigurations(Aws::Vector<CloudWatchDimensionConfiguration>&& value) { SetDimensionConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& AddDimensionConfigurations(const CloudWatchDimensionConfiguration& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& AddDimensionConfigurations(CloudWatchDimensionConfiguration&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudWatchDimensionConfiguration> m_dimensionConfigurations;
    bool m_dimensionConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
