/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundCallerConfig.h>
#include <aws/connect/model/OutboundEmailConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateQueueRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateQueueRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateQueueRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateQueueRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline const OutboundCallerConfig& GetOutboundCallerConfig() const { return m_outboundCallerConfig; }
    inline bool OutboundCallerConfigHasBeenSet() const { return m_outboundCallerConfigHasBeenSet; }
    template<typename OutboundCallerConfigT = OutboundCallerConfig>
    void SetOutboundCallerConfig(OutboundCallerConfigT&& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = std::forward<OutboundCallerConfigT>(value); }
    template<typename OutboundCallerConfigT = OutboundCallerConfig>
    CreateQueueRequest& WithOutboundCallerConfig(OutboundCallerConfigT&& value) { SetOutboundCallerConfig(std::forward<OutboundCallerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound email address ID for a specified queue.</p>
     */
    inline const OutboundEmailConfig& GetOutboundEmailConfig() const { return m_outboundEmailConfig; }
    inline bool OutboundEmailConfigHasBeenSet() const { return m_outboundEmailConfigHasBeenSet; }
    template<typename OutboundEmailConfigT = OutboundEmailConfig>
    void SetOutboundEmailConfig(OutboundEmailConfigT&& value) { m_outboundEmailConfigHasBeenSet = true; m_outboundEmailConfig = std::forward<OutboundEmailConfigT>(value); }
    template<typename OutboundEmailConfigT = OutboundEmailConfig>
    CreateQueueRequest& WithOutboundEmailConfig(OutboundEmailConfigT&& value) { SetOutboundEmailConfig(std::forward<OutboundEmailConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    CreateQueueRequest& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline int GetMaxContacts() const { return m_maxContacts; }
    inline bool MaxContactsHasBeenSet() const { return m_maxContactsHasBeenSet; }
    inline void SetMaxContacts(int value) { m_maxContactsHasBeenSet = true; m_maxContacts = value; }
    inline CreateQueueRequest& WithMaxContacts(int value) { SetMaxContacts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQuickConnectIds() const { return m_quickConnectIds; }
    inline bool QuickConnectIdsHasBeenSet() const { return m_quickConnectIdsHasBeenSet; }
    template<typename QuickConnectIdsT = Aws::Vector<Aws::String>>
    void SetQuickConnectIds(QuickConnectIdsT&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = std::forward<QuickConnectIdsT>(value); }
    template<typename QuickConnectIdsT = Aws::Vector<Aws::String>>
    CreateQueueRequest& WithQuickConnectIds(QuickConnectIdsT&& value) { SetQuickConnectIds(std::forward<QuickConnectIdsT>(value)); return *this;}
    template<typename QuickConnectIdsT = Aws::String>
    CreateQueueRequest& AddQuickConnectIds(QuickConnectIdsT&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.emplace_back(std::forward<QuickConnectIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateQueueRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateQueueRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OutboundCallerConfig m_outboundCallerConfig;
    bool m_outboundCallerConfigHasBeenSet = false;

    OutboundEmailConfig m_outboundEmailConfig;
    bool m_outboundEmailConfigHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    int m_maxContacts{0};
    bool m_maxContactsHasBeenSet = false;

    Aws::Vector<Aws::String> m_quickConnectIds;
    bool m_quickConnectIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
