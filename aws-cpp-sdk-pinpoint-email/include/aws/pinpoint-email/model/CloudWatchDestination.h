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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/CloudWatchDimensionConfiguration.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon CloudWatch destination for email events. You
   * can use Amazon CloudWatch to monitor and gain insights on your email sending
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CloudWatchDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API CloudWatchDestination
  {
  public:
    CloudWatchDestination();
    CloudWatchDestination(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_dimensionConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
