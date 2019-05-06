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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ReportStatusType.h>
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
  class AWS_EC2_API ReportInstanceStatusRequest : public EC2Request
  {
  public:
    ReportInstanceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReportInstanceStatus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline ReportInstanceStatusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline ReportInstanceStatusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive text about the health state of your instance.</p>
     */
    inline ReportInstanceStatusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ReportInstanceStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline ReportInstanceStatusRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the reported instance health state ended.</p>
     */
    inline ReportInstanceStatusRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }

    /**
     * <p>The instances.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>The instances.</p>
     */
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The instances.</p>
     */
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>The instances.</p>
     */
    inline ReportInstanceStatusRequest& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}

    /**
     * <p>The instances.</p>
     */
    inline ReportInstanceStatusRequest& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The instances.</p>
     */
    inline ReportInstanceStatusRequest& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The instances.</p>
     */
    inline ReportInstanceStatusRequest& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }

    /**
     * <p>The instances.</p>
     */
    inline ReportInstanceStatusRequest& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }


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
    inline bool ReasonCodesHasBeenSet() const { return m_reasonCodesHasBeenSet; }

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
    inline void SetReasonCodes(const Aws::Vector<ReportInstanceReasonCodes>& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes = value; }

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
    inline void SetReasonCodes(Aws::Vector<ReportInstanceReasonCodes>&& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes = std::move(value); }

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
    inline ReportInstanceStatusRequest& WithReasonCodes(const Aws::Vector<ReportInstanceReasonCodes>& value) { SetReasonCodes(value); return *this;}

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
    inline ReportInstanceStatusRequest& WithReasonCodes(Aws::Vector<ReportInstanceReasonCodes>&& value) { SetReasonCodes(std::move(value)); return *this;}

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
    inline ReportInstanceStatusRequest& AddReasonCodes(const ReportInstanceReasonCodes& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes.push_back(value); return *this; }

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
    inline ReportInstanceStatusRequest& AddReasonCodes(ReportInstanceReasonCodes&& value) { m_reasonCodesHasBeenSet = true; m_reasonCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline ReportInstanceStatusRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the reported instance health state began.</p>
     */
    inline ReportInstanceStatusRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of all instances listed.</p>
     */
    inline const ReportStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of all instances listed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of all instances listed.</p>
     */
    inline void SetStatus(const ReportStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of all instances listed.</p>
     */
    inline void SetStatus(ReportStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of all instances listed.</p>
     */
    inline ReportInstanceStatusRequest& WithStatus(const ReportStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of all instances listed.</p>
     */
    inline ReportInstanceStatusRequest& WithStatus(ReportStatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet;

    Aws::Vector<ReportInstanceReasonCodes> m_reasonCodes;
    bool m_reasonCodesHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    ReportStatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
