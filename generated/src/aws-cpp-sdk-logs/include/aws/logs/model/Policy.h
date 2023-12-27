/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure that contains information about one delivery destination
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Policy">AWS API
   * Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_CLOUDWATCHLOGS_API Policy();
    AWS_CLOUDWATCHLOGS_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline const Aws::String& GetDeliveryDestinationPolicy() const{ return m_deliveryDestinationPolicy; }

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline bool DeliveryDestinationPolicyHasBeenSet() const { return m_deliveryDestinationPolicyHasBeenSet; }

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(const Aws::String& value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy = value; }

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(Aws::String&& value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy = std::move(value); }

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(const char* value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy.assign(value); }

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline Policy& WithDeliveryDestinationPolicy(const Aws::String& value) { SetDeliveryDestinationPolicy(value); return *this;}

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline Policy& WithDeliveryDestinationPolicy(Aws::String&& value) { SetDeliveryDestinationPolicy(std::move(value)); return *this;}

    /**
     * <p>The contents of the delivery destination policy.</p>
     */
    inline Policy& WithDeliveryDestinationPolicy(const char* value) { SetDeliveryDestinationPolicy(value); return *this;}

  private:

    Aws::String m_deliveryDestinationPolicy;
    bool m_deliveryDestinationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
