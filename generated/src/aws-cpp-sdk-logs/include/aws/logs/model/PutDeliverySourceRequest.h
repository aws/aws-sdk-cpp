/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutDeliverySourceRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliverySourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliverySource"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutDeliverySourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutDeliverySourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon Bedrock, the valid value is <code>APPLICATION_LOGS</code> and
     * <code>TRACES</code>.</p> </li> <li> <p>For CloudFront, the valid value is
     * <code>ACCESS_LOGS</code>.</p> </li> <li> <p>For Amazon CodeWhisperer, the valid
     * value is <code>EVENT_LOGS</code>.</p> </li> <li> <p>For Elemental MediaPackage,
     * the valid values are <code>EGRESS_ACCESS_LOGS</code> and
     * <code>INGRESS_ACCESS_LOGS</code>.</p> </li> <li> <p>For Elemental MediaTailor,
     * the valid values are <code>AD_DECISION_SERVER_LOGS</code>,
     * <code>MANIFEST_SERVICE_LOGS</code>, and <code>TRANSCODE_LOGS</code>.</p> </li>
     * <li> <p>For Entity Resolution, the valid value is
     * <code>WORKFLOW_LOGS</code>.</p> </li> <li> <p>For IAM Identity Center, the valid
     * value is <code>ERROR_LOGS</code>.</p> </li> <li> <p>For PCS, the valid values
     * are <code>PCS_SCHEDULER_LOGS</code> and <code>PCS_JOBCOMP_LOGS</code>.</p> </li>
     * <li> <p>For Amazon Q, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For Amazon SES mail manager, the valid values are
     * <code>APPLICATION_LOG</code> and <code>TRAFFIC_POLICY_DEBUG_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>,
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>, and
     * <code>WORKMAIL_PERSONAL_ACCESS_TOKEN_LOGS</code>.</p> </li> <li> <p>For Amazon
     * VPC Route Server, the valid value is <code>EVENT_LOGS</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    template<typename LogTypeT = Aws::String>
    void SetLogType(LogTypeT&& value) { m_logTypeHasBeenSet = true; m_logType = std::forward<LogTypeT>(value); }
    template<typename LogTypeT = Aws::String>
    PutDeliverySourceRequest& WithLogType(LogTypeT&& value) { SetLogType(std::forward<LogTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PutDeliverySourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PutDeliverySourceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
