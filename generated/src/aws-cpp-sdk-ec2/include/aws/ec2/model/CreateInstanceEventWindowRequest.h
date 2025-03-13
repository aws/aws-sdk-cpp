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
    AWS_EC2_API CreateInstanceEventWindowRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateInstanceEventWindowRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event window.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateInstanceEventWindowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range for the event window. If you specify a time range, you can't
     * specify a cron expression.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRangeRequest>& GetTimeRanges() const { return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRangeRequest>>
    void SetTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::forward<TimeRangesT>(value); }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRangeRequest>>
    CreateInstanceEventWindowRequest& WithTimeRanges(TimeRangesT&& value) { SetTimeRanges(std::forward<TimeRangesT>(value)); return *this;}
    template<typename TimeRangesT = InstanceEventWindowTimeRangeRequest>
    CreateInstanceEventWindowRequest& AddTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.emplace_back(std::forward<TimeRangesT>(value)); return *this; }
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
    inline const Aws::String& GetCronExpression() const { return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    template<typename CronExpressionT = Aws::String>
    void SetCronExpression(CronExpressionT&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::forward<CronExpressionT>(value); }
    template<typename CronExpressionT = Aws::String>
    CreateInstanceEventWindowRequest& WithCronExpression(CronExpressionT&& value) { SetCronExpression(std::forward<CronExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the event window.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateInstanceEventWindowRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateInstanceEventWindowRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
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
