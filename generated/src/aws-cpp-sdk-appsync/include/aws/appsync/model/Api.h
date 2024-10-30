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
    AWS_APPSYNC_API Api();
    AWS_APPSYNC_API Api(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Api& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline Api& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline Api& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline Api& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Api</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Api& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Api& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Api& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner contact information for the <code>Api</code> </p>
     */
    inline const Aws::String& GetOwnerContact() const{ return m_ownerContact; }
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }
    inline void SetOwnerContact(const Aws::String& value) { m_ownerContactHasBeenSet = true; m_ownerContact = value; }
    inline void SetOwnerContact(Aws::String&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::move(value); }
    inline void SetOwnerContact(const char* value) { m_ownerContactHasBeenSet = true; m_ownerContact.assign(value); }
    inline Api& WithOwnerContact(const Aws::String& value) { SetOwnerContact(value); return *this;}
    inline Api& WithOwnerContact(Aws::String&& value) { SetOwnerContact(std::move(value)); return *this;}
    inline Api& WithOwnerContact(const char* value) { SetOwnerContact(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Api& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Api& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Api& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Api& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Api& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Api& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Api& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Api& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Api& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DNS records for the API. This will include an HTTP and a real-time
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDns() const{ return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    inline void SetDns(const Aws::Map<Aws::String, Aws::String>& value) { m_dnsHasBeenSet = true; m_dns = value; }
    inline void SetDns(Aws::Map<Aws::String, Aws::String>&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }
    inline Api& WithDns(const Aws::Map<Aws::String, Aws::String>& value) { SetDns(value); return *this;}
    inline Api& WithDns(Aws::Map<Aws::String, Aws::String>&& value) { SetDns(std::move(value)); return *this;}
    inline Api& AddDns(const Aws::String& key, const Aws::String& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, value); return *this; }
    inline Api& AddDns(Aws::String&& key, const Aws::String& value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), value); return *this; }
    inline Api& AddDns(const Aws::String& key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, std::move(value)); return *this; }
    inline Api& AddDns(Aws::String&& key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), std::move(value)); return *this; }
    inline Api& AddDns(const char* key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, std::move(value)); return *this; }
    inline Api& AddDns(Aws::String&& key, const char* value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), value); return *this; }
    inline Api& AddDns(const char* key, const char* value) { m_dnsHasBeenSet = true; m_dns.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the <code>Api</code>.</p>
     */
    inline const Aws::String& GetApiArn() const{ return m_apiArn; }
    inline bool ApiArnHasBeenSet() const { return m_apiArnHasBeenSet; }
    inline void SetApiArn(const Aws::String& value) { m_apiArnHasBeenSet = true; m_apiArn = value; }
    inline void SetApiArn(Aws::String&& value) { m_apiArnHasBeenSet = true; m_apiArn = std::move(value); }
    inline void SetApiArn(const char* value) { m_apiArnHasBeenSet = true; m_apiArn.assign(value); }
    inline Api& WithApiArn(const Aws::String& value) { SetApiArn(value); return *this;}
    inline Api& WithApiArn(Aws::String&& value) { SetApiArn(std::move(value)); return *this;}
    inline Api& WithApiArn(const char* value) { SetApiArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>Api</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Api& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Api& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether to use X-Ray tracing for this <code>Api</code>.</p>
     */
    inline bool GetXrayEnabled() const{ return m_xrayEnabled; }
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }
    inline Api& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this <code>Api</code>, if one exists.</p>
     */
    inline const Aws::String& GetWafWebAclArn() const{ return m_wafWebAclArn; }
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }
    inline void SetWafWebAclArn(const Aws::String& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = value; }
    inline void SetWafWebAclArn(Aws::String&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::move(value); }
    inline void SetWafWebAclArn(const char* value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn.assign(value); }
    inline Api& WithWafWebAclArn(const Aws::String& value) { SetWafWebAclArn(value); return *this;}
    inline Api& WithWafWebAclArn(Aws::String&& value) { SetWafWebAclArn(std::move(value)); return *this;}
    inline Api& WithWafWebAclArn(const char* value) { SetWafWebAclArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Event API configuration. This includes the default authorization
     * configuration for connecting, publishing, and subscribing to an Event API.</p>
     */
    inline const EventConfig& GetEventConfig() const{ return m_eventConfig; }
    inline bool EventConfigHasBeenSet() const { return m_eventConfigHasBeenSet; }
    inline void SetEventConfig(const EventConfig& value) { m_eventConfigHasBeenSet = true; m_eventConfig = value; }
    inline void SetEventConfig(EventConfig&& value) { m_eventConfigHasBeenSet = true; m_eventConfig = std::move(value); }
    inline Api& WithEventConfig(const EventConfig& value) { SetEventConfig(value); return *this;}
    inline Api& WithEventConfig(EventConfig&& value) { SetEventConfig(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    bool m_xrayEnabled;
    bool m_xrayEnabledHasBeenSet = false;

    Aws::String m_wafWebAclArn;
    bool m_wafWebAclArnHasBeenSet = false;

    EventConfig m_eventConfig;
    bool m_eventConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
