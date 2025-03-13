/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficType.h>
#include <aws/ec2/model/LogDestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/DestinationOptionsResponse.h>
#include <aws/ec2/model/Tag.h>
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
  class FlowLog
  {
  public:
    AWS_EC2_API FlowLog() = default;
    AWS_EC2_API FlowLog(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FlowLog& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FlowLog& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline const Aws::String& GetDeliverLogsErrorMessage() const { return m_deliverLogsErrorMessage; }
    inline bool DeliverLogsErrorMessageHasBeenSet() const { return m_deliverLogsErrorMessageHasBeenSet; }
    template<typename DeliverLogsErrorMessageT = Aws::String>
    void SetDeliverLogsErrorMessage(DeliverLogsErrorMessageT&& value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage = std::forward<DeliverLogsErrorMessageT>(value); }
    template<typename DeliverLogsErrorMessageT = Aws::String>
    FlowLog& WithDeliverLogsErrorMessage(DeliverLogsErrorMessageT&& value) { SetDeliverLogsErrorMessage(std::forward<DeliverLogsErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role allows the service to publish logs to CloudWatch
     * Logs.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const { return m_deliverLogsPermissionArn; }
    inline bool DeliverLogsPermissionArnHasBeenSet() const { return m_deliverLogsPermissionArnHasBeenSet; }
    template<typename DeliverLogsPermissionArnT = Aws::String>
    void SetDeliverLogsPermissionArn(DeliverLogsPermissionArnT&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::forward<DeliverLogsPermissionArnT>(value); }
    template<typename DeliverLogsPermissionArnT = Aws::String>
    FlowLog& WithDeliverLogsPermissionArn(DeliverLogsPermissionArnT&& value) { SetDeliverLogsPermissionArn(std::forward<DeliverLogsPermissionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the service to publish flow logs across
     * accounts.</p>
     */
    inline const Aws::String& GetDeliverCrossAccountRole() const { return m_deliverCrossAccountRole; }
    inline bool DeliverCrossAccountRoleHasBeenSet() const { return m_deliverCrossAccountRoleHasBeenSet; }
    template<typename DeliverCrossAccountRoleT = Aws::String>
    void SetDeliverCrossAccountRole(DeliverCrossAccountRoleT&& value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole = std::forward<DeliverCrossAccountRoleT>(value); }
    template<typename DeliverCrossAccountRoleT = Aws::String>
    FlowLog& WithDeliverCrossAccountRole(DeliverCrossAccountRoleT&& value) { SetDeliverCrossAccountRole(std::forward<DeliverCrossAccountRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline const Aws::String& GetDeliverLogsStatus() const { return m_deliverLogsStatus; }
    inline bool DeliverLogsStatusHasBeenSet() const { return m_deliverLogsStatusHasBeenSet; }
    template<typename DeliverLogsStatusT = Aws::String>
    void SetDeliverLogsStatus(DeliverLogsStatusT&& value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus = std::forward<DeliverLogsStatusT>(value); }
    template<typename DeliverLogsStatusT = Aws::String>
    FlowLog& WithDeliverLogsStatus(DeliverLogsStatusT&& value) { SetDeliverLogsStatus(std::forward<DeliverLogsStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the flow log.</p>
     */
    inline const Aws::String& GetFlowLogId() const { return m_flowLogId; }
    inline bool FlowLogIdHasBeenSet() const { return m_flowLogIdHasBeenSet; }
    template<typename FlowLogIdT = Aws::String>
    void SetFlowLogId(FlowLogIdT&& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = std::forward<FlowLogIdT>(value); }
    template<typename FlowLogIdT = Aws::String>
    FlowLog& WithFlowLogId(FlowLogIdT&& value) { SetFlowLogId(std::forward<FlowLogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline const Aws::String& GetFlowLogStatus() const { return m_flowLogStatus; }
    inline bool FlowLogStatusHasBeenSet() const { return m_flowLogStatusHasBeenSet; }
    template<typename FlowLogStatusT = Aws::String>
    void SetFlowLogStatus(FlowLogStatusT&& value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus = std::forward<FlowLogStatusT>(value); }
    template<typename FlowLogStatusT = Aws::String>
    FlowLog& WithFlowLogStatus(FlowLogStatusT&& value) { SetFlowLogStatus(std::forward<FlowLogStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    FlowLog& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource being monitored.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    FlowLog& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline TrafficType GetTrafficType() const { return m_trafficType; }
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }
    inline void SetTrafficType(TrafficType value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }
    inline FlowLog& WithTrafficType(TrafficType value) { SetTrafficType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of destination for the flow log data.</p>
     */
    inline LogDestinationType GetLogDestinationType() const { return m_logDestinationType; }
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
    inline void SetLogDestinationType(LogDestinationType value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline FlowLog& WithLogDestinationType(LogDestinationType value) { SetLogDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination for the flow log data.</p>
     */
    inline const Aws::String& GetLogDestination() const { return m_logDestination; }
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
    template<typename LogDestinationT = Aws::String>
    void SetLogDestination(LogDestinationT&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::forward<LogDestinationT>(value); }
    template<typename LogDestinationT = Aws::String>
    FlowLog& WithLogDestination(LogDestinationT&& value) { SetLogDestination(std::forward<LogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the flow log record.</p>
     */
    inline const Aws::String& GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    template<typename LogFormatT = Aws::String>
    void SetLogFormat(LogFormatT&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::forward<LogFormatT>(value); }
    template<typename LogFormatT = Aws::String>
    FlowLog& WithLogFormat(LogFormatT&& value) { SetLogFormat(std::forward<LogFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the flow log.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FlowLog& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FlowLog& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum interval of time, in seconds, during which a flow of packets is
     * captured and aggregated into a flow log record.</p> <p>When a network interface
     * is attached to a <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-nitro-instances.html">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds (1 minute) or less,
     * regardless of the specified value.</p> <p>Valid Values: <code>60</code> |
     * <code>600</code> </p>
     */
    inline int GetMaxAggregationInterval() const { return m_maxAggregationInterval; }
    inline bool MaxAggregationIntervalHasBeenSet() const { return m_maxAggregationIntervalHasBeenSet; }
    inline void SetMaxAggregationInterval(int value) { m_maxAggregationIntervalHasBeenSet = true; m_maxAggregationInterval = value; }
    inline FlowLog& WithMaxAggregationInterval(int value) { SetMaxAggregationInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination options.</p>
     */
    inline const DestinationOptionsResponse& GetDestinationOptions() const { return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    template<typename DestinationOptionsT = DestinationOptionsResponse>
    void SetDestinationOptions(DestinationOptionsT&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::forward<DestinationOptionsT>(value); }
    template<typename DestinationOptionsT = DestinationOptionsResponse>
    FlowLog& WithDestinationOptions(DestinationOptionsT&& value) { SetDestinationOptions(std::forward<DestinationOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deliverLogsErrorMessage;
    bool m_deliverLogsErrorMessageHasBeenSet = false;

    Aws::String m_deliverLogsPermissionArn;
    bool m_deliverLogsPermissionArnHasBeenSet = false;

    Aws::String m_deliverCrossAccountRole;
    bool m_deliverCrossAccountRoleHasBeenSet = false;

    Aws::String m_deliverLogsStatus;
    bool m_deliverLogsStatusHasBeenSet = false;

    Aws::String m_flowLogId;
    bool m_flowLogIdHasBeenSet = false;

    Aws::String m_flowLogStatus;
    bool m_flowLogStatusHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TrafficType m_trafficType{TrafficType::NOT_SET};
    bool m_trafficTypeHasBeenSet = false;

    LogDestinationType m_logDestinationType{LogDestinationType::NOT_SET};
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_logFormat;
    bool m_logFormatHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_maxAggregationInterval{0};
    bool m_maxAggregationIntervalHasBeenSet = false;

    DestinationOptionsResponse m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
