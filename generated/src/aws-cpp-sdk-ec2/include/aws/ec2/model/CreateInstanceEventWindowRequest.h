/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceEventWindowTimeRangeRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateInstanceEventWindowRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateInstanceEventWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceEventWindow"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateInstanceEventWindowRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateInstanceEventWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateInstanceEventWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateInstanceEventWindowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range for the event window. If you specify a time range, you can't
     * specify a cron expression.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRangeRequest>& GetTimeRanges() const{ return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    inline void SetTimeRanges(const Aws::Vector<InstanceEventWindowTimeRangeRequest>& value) { m_timeRangesHasBeenSet = true; m_timeRanges = value; }
    inline void SetTimeRanges(Aws::Vector<InstanceEventWindowTimeRangeRequest>&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::move(value); }
    inline CreateInstanceEventWindowRequest& WithTimeRanges(const Aws::Vector<InstanceEventWindowTimeRangeRequest>& value) { SetTimeRanges(value); return *this;}
    inline CreateInstanceEventWindowRequest& WithTimeRanges(Aws::Vector<InstanceEventWindowTimeRangeRequest>&& value) { SetTimeRanges(std::move(value)); return *this;}
    inline CreateInstanceEventWindowRequest& AddTimeRanges(const InstanceEventWindowTimeRangeRequest& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(value); return *this; }
    inline CreateInstanceEventWindowRequest& AddTimeRanges(InstanceEventWindowTimeRangeRequest&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cron expression for the event window, for example, <code>* 0-4,20-23 * *
     * 1,5</code>. If you specify a cron expression, you can't specify a time
     * range.</p> <p>Constraints:</p> <ul> <li> <p>Only hour and day of the week values
     * are supported.</p> </li> <li> <p>For day of the week values, you can specify
     * either integers <code>0</code> through <code>6</code>, or alternative single
     * values <code>SUN</code> through <code>SAT</code>.</p> </li> <li> <p>The minute,
     * month, and year must be specified by <code>*</code>.</p> </li> <li> <p>The hour
     * value must be one or a multiple range, for example, <code>0-4</code> or
     * <code>0-4,20-23</code>.</p> </li> <li> <p>Each hour range must be &gt;= 2 hours,
     * for example, <code>0-2</code> or <code>20-23</code>.</p> </li> <li> <p>The event
     * window must be &gt;= 4 hours. The combined total time ranges in the event window
     * must be &gt;= 4 hours.</p> </li> </ul> <p>For more information about cron
     * expressions, see <a href="https://en.wikipedia.org/wiki/Cron">cron</a> on the
     * <i>Wikipedia website</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }
    inline CreateInstanceEventWindowRequest& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}
    inline CreateInstanceEventWindowRequest& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}
    inline CreateInstanceEventWindowRequest& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the event window.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateInstanceEventWindowRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateInstanceEventWindowRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateInstanceEventWindowRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateInstanceEventWindowRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<InstanceEventWindowTimeRangeRequest> m_timeRanges;
    bool m_timeRangesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
