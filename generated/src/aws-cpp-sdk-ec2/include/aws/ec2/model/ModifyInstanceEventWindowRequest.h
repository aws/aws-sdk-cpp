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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceEventWindowRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceEventWindowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceEventWindow"; }

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
    inline ModifyInstanceEventWindowRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    ModifyInstanceEventWindowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const { return m_instanceEventWindowId; }
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }
    template<typename InstanceEventWindowIdT = Aws::String>
    void SetInstanceEventWindowId(InstanceEventWindowIdT&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::forward<InstanceEventWindowIdT>(value); }
    template<typename InstanceEventWindowIdT = Aws::String>
    ModifyInstanceEventWindowRequest& WithInstanceEventWindowId(InstanceEventWindowIdT&& value) { SetInstanceEventWindowId(std::forward<InstanceEventWindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time ranges of the event window.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRangeRequest>& GetTimeRanges() const { return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRangeRequest>>
    void SetTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::forward<TimeRangesT>(value); }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRangeRequest>>
    ModifyInstanceEventWindowRequest& WithTimeRanges(TimeRangesT&& value) { SetTimeRanges(std::forward<TimeRangesT>(value)); return *this;}
    template<typename TimeRangesT = InstanceEventWindowTimeRangeRequest>
    ModifyInstanceEventWindowRequest& AddTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.emplace_back(std::forward<TimeRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cron expression of the event window, for example, <code>* 0-4,20-23 * *
     * 1,5</code>.</p> <p>Constraints:</p> <ul> <li> <p>Only hour and day of the week
     * values are supported.</p> </li> <li> <p>For day of the week values, you can
     * specify either integers <code>0</code> through <code>6</code>, or alternative
     * single values <code>SUN</code> through <code>SAT</code>.</p> </li> <li> <p>The
     * minute, month, and year must be specified by <code>*</code>.</p> </li> <li>
     * <p>The hour value must be one or a multiple range, for example, <code>0-4</code>
     * or <code>0-4,20-23</code>.</p> </li> <li> <p>Each hour range must be &gt;= 2
     * hours, for example, <code>0-2</code> or <code>20-23</code>.</p> </li> <li>
     * <p>The event window must be &gt;= 4 hours. The combined total time ranges in the
     * event window must be &gt;= 4 hours.</p> </li> </ul> <p>For more information
     * about cron expressions, see <a
     * href="https://en.wikipedia.org/wiki/Cron">cron</a> on the <i>Wikipedia
     * website</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const { return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    template<typename CronExpressionT = Aws::String>
    void SetCronExpression(CronExpressionT&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::forward<CronExpressionT>(value); }
    template<typename CronExpressionT = Aws::String>
    ModifyInstanceEventWindowRequest& WithCronExpression(CronExpressionT&& value) { SetCronExpression(std::forward<CronExpressionT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceEventWindowId;
    bool m_instanceEventWindowIdHasBeenSet = false;

    Aws::Vector<InstanceEventWindowTimeRangeRequest> m_timeRanges;
    bool m_timeRangesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
