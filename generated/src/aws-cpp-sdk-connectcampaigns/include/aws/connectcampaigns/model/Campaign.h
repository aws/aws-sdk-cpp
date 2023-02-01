/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/DialerConfig.h>
#include <aws/connectcampaigns/model/OutboundCallConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>An Amazon Connect campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/Campaign">AWS
   * API Reference</a></p>
   */
  class Campaign
  {
  public:
    AWS_CONNECTCAMPAIGNS_API Campaign();
    AWS_CONNECTCAMPAIGNS_API Campaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Campaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline Campaign& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline Campaign& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline Campaign& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }

    
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }

    
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }

    
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }

    
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }

    
    inline Campaign& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}

    
    inline Campaign& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}

    
    inline Campaign& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}


    
    inline const DialerConfig& GetDialerConfig() const{ return m_dialerConfig; }

    
    inline bool DialerConfigHasBeenSet() const { return m_dialerConfigHasBeenSet; }

    
    inline void SetDialerConfig(const DialerConfig& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = value; }

    
    inline void SetDialerConfig(DialerConfig&& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = std::move(value); }

    
    inline Campaign& WithDialerConfig(const DialerConfig& value) { SetDialerConfig(value); return *this;}

    
    inline Campaign& WithDialerConfig(DialerConfig&& value) { SetDialerConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline Campaign& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline Campaign& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline Campaign& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Campaign& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Campaign& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Campaign& WithName(const char* value) { SetName(value); return *this;}


    
    inline const OutboundCallConfig& GetOutboundCallConfig() const{ return m_outboundCallConfig; }

    
    inline bool OutboundCallConfigHasBeenSet() const { return m_outboundCallConfigHasBeenSet; }

    
    inline void SetOutboundCallConfig(const OutboundCallConfig& value) { m_outboundCallConfigHasBeenSet = true; m_outboundCallConfig = value; }

    
    inline void SetOutboundCallConfig(OutboundCallConfig&& value) { m_outboundCallConfigHasBeenSet = true; m_outboundCallConfig = std::move(value); }

    
    inline Campaign& WithOutboundCallConfig(const OutboundCallConfig& value) { SetOutboundCallConfig(value); return *this;}

    
    inline Campaign& WithOutboundCallConfig(OutboundCallConfig&& value) { SetOutboundCallConfig(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline Campaign& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline Campaign& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline Campaign& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline Campaign& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline Campaign& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline Campaign& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Campaign& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline Campaign& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline Campaign& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    DialerConfig m_dialerConfig;
    bool m_dialerConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutboundCallConfig m_outboundCallConfig;
    bool m_outboundCallConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
