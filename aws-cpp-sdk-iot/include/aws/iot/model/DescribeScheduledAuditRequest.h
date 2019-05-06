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
  class AWS_IOT_API DescribeScheduledAuditRequest : public IoTRequest
  {
  public:
    DescribeScheduledAuditRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledAudit"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = value; }

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName.assign(value); }

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline DescribeScheduledAuditRequest& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline DescribeScheduledAuditRequest& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled audit whose information you want to get.</p>
     */
    inline DescribeScheduledAuditRequest& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}

  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
