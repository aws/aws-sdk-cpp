/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/MaximumExecutionFrequency.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Options for how AWS Config delivers configuration snapshots to the Amazon S3
   * bucket in your delivery channel.</p>
   */
  class AWS_CONFIGSERVICE_API ConfigSnapshotDeliveryProperties
  {
  public:
    ConfigSnapshotDeliveryProperties();
    ConfigSnapshotDeliveryProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    ConfigSnapshotDeliveryProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The frequency with which a AWS Config recurringly delivers configuration
     * snapshots.</p>
     */
    inline const MaximumExecutionFrequency& GetDeliveryFrequency() const{ return m_deliveryFrequency; }

    /**
     * <p>The frequency with which a AWS Config recurringly delivers configuration
     * snapshots.</p>
     */
    inline void SetDeliveryFrequency(const MaximumExecutionFrequency& value) { m_deliveryFrequencyHasBeenSet = true; m_deliveryFrequency = value; }

    /**
     * <p>The frequency with which a AWS Config recurringly delivers configuration
     * snapshots.</p>
     */
    inline void SetDeliveryFrequency(MaximumExecutionFrequency&& value) { m_deliveryFrequencyHasBeenSet = true; m_deliveryFrequency = value; }

    /**
     * <p>The frequency with which a AWS Config recurringly delivers configuration
     * snapshots.</p>
     */
    inline ConfigSnapshotDeliveryProperties& WithDeliveryFrequency(const MaximumExecutionFrequency& value) { SetDeliveryFrequency(value); return *this;}

    /**
     * <p>The frequency with which a AWS Config recurringly delivers configuration
     * snapshots.</p>
     */
    inline ConfigSnapshotDeliveryProperties& WithDeliveryFrequency(MaximumExecutionFrequency&& value) { SetDeliveryFrequency(value); return *this;}

  private:
    MaximumExecutionFrequency m_deliveryFrequency;
    bool m_deliveryFrequencyHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
