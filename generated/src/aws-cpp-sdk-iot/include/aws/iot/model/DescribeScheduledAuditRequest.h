/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeScheduledAuditRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeScheduledAuditRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledAudit"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const { return m_scheduledAuditName; }
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }
    template<typename ScheduledAuditNameT = Aws::String>
    void SetScheduledAuditName(ScheduledAuditNameT&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::forward<ScheduledAuditNameT>(value); }
    template<typename ScheduledAuditNameT = Aws::String>
    DescribeScheduledAuditRequest& WithScheduledAuditName(ScheduledAuditNameT&& value) { SetScheduledAuditName(std::forward<ScheduledAuditNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
