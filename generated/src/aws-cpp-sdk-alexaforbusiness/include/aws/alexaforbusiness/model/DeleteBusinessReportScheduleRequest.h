/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class DeleteBusinessReportScheduleRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API DeleteBusinessReportScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBusinessReportSchedule"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline const Aws::String& GetScheduleArn() const{ return m_scheduleArn; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline bool ScheduleArnHasBeenSet() const { return m_scheduleArnHasBeenSet; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const Aws::String& value) { m_scheduleArnHasBeenSet = true; m_scheduleArn = value; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(Aws::String&& value) { m_scheduleArnHasBeenSet = true; m_scheduleArn = std::move(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const char* value) { m_scheduleArnHasBeenSet = true; m_scheduleArn.assign(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline DeleteBusinessReportScheduleRequest& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline DeleteBusinessReportScheduleRequest& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline DeleteBusinessReportScheduleRequest& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}

  private:

    Aws::String m_scheduleArn;
    bool m_scheduleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
