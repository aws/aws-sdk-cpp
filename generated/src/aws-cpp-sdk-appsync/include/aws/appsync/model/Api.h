/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appsync/model/EventConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an AppSync API. You can use <code>Api</code> for an AppSync API
   * with your preferred configuration, such as an Event API that provides real-time
   * message publishing and message subscriptions over WebSockets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/Api">AWS API
   * Reference</a></p>
   */
  class Api
  {
  public:
    AWS_APPSYNC_API Api() = default;
    AWS_APPSYNC_API Api(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Api& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    Api& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Api</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Api& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner contact information for the <code>Api</code> </p>
     */
    inline const Aws::String& GetOwnerContact() const { return m_ownerContact; }
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }
    template<typename OwnerContactT = Aws::String>
    void SetOwnerContact(OwnerContactT&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::forward<OwnerContactT>(value); }
    template<typename OwnerContactT = Aws::String>
    Api& WithOwnerContact(OwnerContactT&& value) { SetOwnerContact(std::forward<OwnerContactT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Api& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Api& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The DNS records for the API. This will include an HTTP and a real-time
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDns() const { return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    template<typename DnsT = Aws::Map<Aws::String, Aws::String>>
    void SetDns(DnsT&& value) { m_dnsHasBeenSet = true; m_dns = std::forward<DnsT>(value); }
    template<typename DnsT = Aws::Map<Aws::String, Aws::String>>
    Api& WithDns(DnsT&& value) { SetDns(std::forward<DnsT>(value)); return *this;}
    template<typename DnsKeyT = Aws::String, typename DnsValueT = Aws::String>
    Api& AddDns(DnsKeyT&& key, DnsValueT&& value) {
      m_dnsHasBeenSet = true; m_dns.emplace(std::forward<DnsKeyT>(key), std::forward<DnsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the <code>Api</code>.</p>
     */
    inline const Aws::String& GetApiArn() const { return m_apiArn; }
    inline bool ApiArnHasBeenSet() const { return m_apiArnHasBeenSet; }
    template<typename ApiArnT = Aws::String>
    void SetApiArn(ApiArnT&& value) { m_apiArnHasBeenSet = true; m_apiArn = std::forward<ApiArnT>(value); }
    template<typename ApiArnT = Aws::String>
    Api& WithApiArn(ApiArnT&& value) { SetApiArn(std::forward<ApiArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>Api</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    Api& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether to use X-Ray tracing for this <code>Api</code>.</p>
     */
    inline bool GetXrayEnabled() const { return m_xrayEnabled; }
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }
    inline Api& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this <code>Api</code>, if one exists.</p>
     */
    inline const Aws::String& GetWafWebAclArn() const { return m_wafWebAclArn; }
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }
    template<typename WafWebAclArnT = Aws::String>
    void SetWafWebAclArn(WafWebAclArnT&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::forward<WafWebAclArnT>(value); }
    template<typename WafWebAclArnT = Aws::String>
    Api& WithWafWebAclArn(WafWebAclArnT&& value) { SetWafWebAclArn(std::forward<WafWebAclArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Event API configuration. This includes the default authorization
     * configuration for connecting, publishing, and subscribing to an Event API.</p>
     */
    inline const EventConfig& GetEventConfig() const { return m_eventConfig; }
    inline bool EventConfigHasBeenSet() const { return m_eventConfigHasBeenSet; }
    template<typename EventConfigT = EventConfig>
    void SetEventConfig(EventConfigT&& value) { m_eventConfigHasBeenSet = true; m_eventConfig = std::forward<EventConfigT>(value); }
    template<typename EventConfigT = EventConfig>
    Api& WithEventConfig(EventConfigT&& value) { SetEventConfig(std::forward<EventConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerContact;
    bool m_ownerContactHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dns;
    bool m_dnsHasBeenSet = false;

    Aws::String m_apiArn;
    bool m_apiArnHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    bool m_xrayEnabled{false};
    bool m_xrayEnabledHasBeenSet = false;

    Aws::String m_wafWebAclArn;
    bool m_wafWebAclArnHasBeenSet = false;

    EventConfig m_eventConfig;
    bool m_eventConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
