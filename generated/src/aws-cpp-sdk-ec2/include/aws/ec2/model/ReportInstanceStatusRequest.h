/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ReportStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReportInstanceReasonCodes.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ReportInstanceStatusRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReportInstanceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReportInstanceStatus"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ReportInstanceStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline ReportInstanceStatusRequest& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}
    inline ReportInstanceStatusRequest& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}
    inline ReportInstanceStatusRequest& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline ReportInstanceStatusRequest& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    inline ReportInstanceStatusRequest& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of all instances listed.</p>
     */
    inline const ReportStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReportStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReportStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReportInstanceStatusRequest& WithStatus(const ReportStatusType& value) { SetStatus(value); return *this;}
    inline ReportInstanceStatusRequest& WithStatus(ReportStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReportInstanceStatusRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReportInstanceStatusRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ReportInstanceStatusRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ReportInstanceStatusRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason codes that describe the health state of your instance.</p> <ul>
     * <li> <p> <code>instance-stuck-in-state</code>: My instance is stuck in a
     * state.</p> </li> <li> <p> <code>unresponsive</code>: My instance is
     * unresponsive.</p> </li> <li> <p> <code>not-accepting-credentials</code>: My
     * instance is not accepting my credentials.</p> </li> <li> <p>
     * <code>password-not-available</code>: A password is not available for my
     * instance.</p> </li> <li> <p> <code>performance-network</code>: My instance is
     * experiencing performance problems that I believe are network related.</p> </li>
     * <li> <p> <code>performance-instance-store</code>: My instance is experiencing
     * performance problems that I believe are related to the instance stores.</p>
     * </li> <li> <p> <code>performance-ebs-volume</code>: My instance is experiencing
     * performance problems that I believe are related to an EBS volume.</p> </li> <li>
     * <p> <code>performance-other</code>: My instance is experiencing performance
     * problems.</p> </li> <li> <p> <code>other</code>: [explain using the description
     * parameter]</p> </li> </ul>
     */
    inline const Aws::Vector<ReportInstanceReasonCodes>& GetReasonCodes() const{ return m_reasonCodes; }
    inline bool ReasonCodesHasBeenSet() const { return m_reasonCodesHasBeenSet; }
    inline void SetReasonCodes(const Aws::Vector<ReportInstanceReasonCodes>& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes = value; }
    inline void SetReasonCodes(Aws::Vector<ReportInstanceReasonCodes>&& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes = std::move(value); }
    inline ReportInstanceStatusRequest& WithReasonCodes(const Aws::Vector<ReportInstanceReasonCodes>& value) { SetReasonCodes(value); return *this;}
    inline ReportInstanceStatusRequest& WithReasonCodes(Aws::Vector<ReportInstanceReasonCodes>&& value) { SetReasonCodes(std::move(value)); return *this;}
    inline ReportInstanceStatusRequest& AddReasonCodes(const ReportInstanceReasonCodes& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes.push_back(value); return *this; }
    inline ReportInstanceStatusRequest& AddReasonCodes(ReportInstanceReasonCodes&& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet = false;

    ReportStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<ReportInstanceReasonCodes> m_reasonCodes;
    bool m_reasonCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
