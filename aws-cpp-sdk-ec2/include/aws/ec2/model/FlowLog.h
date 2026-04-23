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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficType.h>
#include <aws/ec2/model/LogDestinationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a flow log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlowLog">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API FlowLog
  {
  public:
    FlowLog();
    FlowLog(const Aws::Utils::Xml::XmlNode& xmlNode);
    FlowLog& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline FlowLog& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline FlowLog& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline const Aws::String& GetDeliverLogsErrorMessage() const{ return m_deliverLogsErrorMessage; }

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline bool DeliverLogsErrorMessageHasBeenSet() const { return m_deliverLogsErrorMessageHasBeenSet; }

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline void SetDeliverLogsErrorMessage(const Aws::String& value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage = value; }

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline void SetDeliverLogsErrorMessage(Aws::String&& value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage = std::move(value); }

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline void SetDeliverLogsErrorMessage(const char* value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage.assign(value); }

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline FlowLog& WithDeliverLogsErrorMessage(const Aws::String& value) { SetDeliverLogsErrorMessage(value); return *this;}

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline FlowLog& WithDeliverLogsErrorMessage(Aws::String&& value) { SetDeliverLogsErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline FlowLog& WithDeliverLogsErrorMessage(const char* value) { SetDeliverLogsErrorMessage(value); return *this;}


    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const{ return m_deliverLogsPermissionArn; }

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline bool DeliverLogsPermissionArnHasBeenSet() const { return m_deliverLogsPermissionArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline void SetDeliverLogsPermissionArn(const Aws::String& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = value; }

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline void SetDeliverLogsPermissionArn(Aws::String&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline void SetDeliverLogsPermissionArn(const char* value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline FlowLog& WithDeliverLogsPermissionArn(const Aws::String& value) { SetDeliverLogsPermissionArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline FlowLog& WithDeliverLogsPermissionArn(Aws::String&& value) { SetDeliverLogsPermissionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
     */
    inline FlowLog& WithDeliverLogsPermissionArn(const char* value) { SetDeliverLogsPermissionArn(value); return *this;}


    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline const Aws::String& GetDeliverLogsStatus() const{ return m_deliverLogsStatus; }

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline bool DeliverLogsStatusHasBeenSet() const { return m_deliverLogsStatusHasBeenSet; }

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline void SetDeliverLogsStatus(const Aws::String& value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus = value; }

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline void SetDeliverLogsStatus(Aws::String&& value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus = std::move(value); }

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline void SetDeliverLogsStatus(const char* value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus.assign(value); }

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline FlowLog& WithDeliverLogsStatus(const Aws::String& value) { SetDeliverLogsStatus(value); return *this;}

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline FlowLog& WithDeliverLogsStatus(Aws::String&& value) { SetDeliverLogsStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline FlowLog& WithDeliverLogsStatus(const char* value) { SetDeliverLogsStatus(value); return *this;}


    /**
     * <p>The flow log ID.</p>
     */
    inline const Aws::String& GetFlowLogId() const{ return m_flowLogId; }

    /**
     * <p>The flow log ID.</p>
     */
    inline bool FlowLogIdHasBeenSet() const { return m_flowLogIdHasBeenSet; }

    /**
     * <p>The flow log ID.</p>
     */
    inline void SetFlowLogId(const Aws::String& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = value; }

    /**
     * <p>The flow log ID.</p>
     */
    inline void SetFlowLogId(Aws::String&& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = std::move(value); }

    /**
     * <p>The flow log ID.</p>
     */
    inline void SetFlowLogId(const char* value) { m_flowLogIdHasBeenSet = true; m_flowLogId.assign(value); }

    /**
     * <p>The flow log ID.</p>
     */
    inline FlowLog& WithFlowLogId(const Aws::String& value) { SetFlowLogId(value); return *this;}

    /**
     * <p>The flow log ID.</p>
     */
    inline FlowLog& WithFlowLogId(Aws::String&& value) { SetFlowLogId(std::move(value)); return *this;}

    /**
     * <p>The flow log ID.</p>
     */
    inline FlowLog& WithFlowLogId(const char* value) { SetFlowLogId(value); return *this;}


    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline const Aws::String& GetFlowLogStatus() const{ return m_flowLogStatus; }

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline bool FlowLogStatusHasBeenSet() const { return m_flowLogStatusHasBeenSet; }

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline void SetFlowLogStatus(const Aws::String& value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus = value; }

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline void SetFlowLogStatus(Aws::String&& value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus = std::move(value); }

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline void SetFlowLogStatus(const char* value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus.assign(value); }

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline FlowLog& WithFlowLogStatus(const Aws::String& value) { SetFlowLogStatus(value); return *this;}

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline FlowLog& WithFlowLogStatus(Aws::String&& value) { SetFlowLogStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline FlowLog& WithFlowLogStatus(const char* value) { SetFlowLogStatus(value); return *this;}


    /**
     * <p>The name of the flow log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the flow log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the flow log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the flow log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the flow log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the flow log group.</p>
     */
    inline FlowLog& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the flow log group.</p>
     */
    inline FlowLog& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the flow log group.</p>
     */
    inline FlowLog& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline FlowLog& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline FlowLog& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource on which the flow log was created.</p>
     */
    inline FlowLog& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }

    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline FlowLog& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline FlowLog& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }

    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }

    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }

    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }

    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline FlowLog& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}

    /**
     * <p>Specifies the type of destination to which the flow log data is published.
     * Flow log data can be published to CloudWatch Logs or Amazon S3.</p>
     */
    inline FlowLog& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}


    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline const Aws::String& GetLogDestination() const{ return m_logDestination; }

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline void SetLogDestination(const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline void SetLogDestination(Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline void SetLogDestination(const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.assign(value); }

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline FlowLog& WithLogDestination(const Aws::String& value) { SetLogDestination(value); return *this;}

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline FlowLog& WithLogDestination(Aws::String&& value) { SetLogDestination(std::move(value)); return *this;}

    /**
     * <p>Specifies the destination to which the flow log data is published. Flow log
     * data can be published to an CloudWatch Logs log group or an Amazon S3 bucket. If
     * the flow log publishes to CloudWatch Logs, this element indicates the Amazon
     * Resource Name (ARN) of the CloudWatch Logs log group to which the data is
     * published. If the flow log publishes to Amazon S3, this element indicates the
     * ARN of the Amazon S3 bucket to which the data is published.</p>
     */
    inline FlowLog& WithLogDestination(const char* value) { SetLogDestination(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_deliverLogsErrorMessage;
    bool m_deliverLogsErrorMessageHasBeenSet;

    Aws::String m_deliverLogsPermissionArn;
    bool m_deliverLogsPermissionArnHasBeenSet;

    Aws::String m_deliverLogsStatus;
    bool m_deliverLogsStatusHasBeenSet;

    Aws::String m_flowLogId;
    bool m_flowLogIdHasBeenSet;

    Aws::String m_flowLogStatus;
    bool m_flowLogStatusHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
