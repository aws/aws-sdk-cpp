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
  class DeleteScheduledAuditRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteScheduledAuditRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScheduledAudit"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = value; }

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName.assign(value); }

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline DeleteScheduledAuditRequest& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline DeleteScheduledAuditRequest& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled audit you want to delete.</p>
     */
    inline DeleteScheduledAuditRequest& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}

  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
