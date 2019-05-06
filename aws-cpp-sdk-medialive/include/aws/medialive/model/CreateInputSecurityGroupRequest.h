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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputWhitelistRuleCidr.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * The IPv4 CIDRs to whitelist for this Input Security Group<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroupRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CreateInputSecurityGroupRequest : public MediaLiveRequest
  {
  public:
    CreateInputSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInputSecurityGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateInputSecurityGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline const Aws::Vector<InputWhitelistRuleCidr>& GetWhitelistRules() const{ return m_whitelistRules; }

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline bool WhitelistRulesHasBeenSet() const { return m_whitelistRulesHasBeenSet; }

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline void SetWhitelistRules(const Aws::Vector<InputWhitelistRuleCidr>& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = value; }

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline void SetWhitelistRules(Aws::Vector<InputWhitelistRuleCidr>&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = std::move(value); }

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline CreateInputSecurityGroupRequest& WithWhitelistRules(const Aws::Vector<InputWhitelistRuleCidr>& value) { SetWhitelistRules(value); return *this;}

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline CreateInputSecurityGroupRequest& WithWhitelistRules(Aws::Vector<InputWhitelistRuleCidr>&& value) { SetWhitelistRules(std::move(value)); return *this;}

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline CreateInputSecurityGroupRequest& AddWhitelistRules(const InputWhitelistRuleCidr& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(value); return *this; }

    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline CreateInputSecurityGroupRequest& AddWhitelistRules(InputWhitelistRuleCidr&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<InputWhitelistRuleCidr> m_whitelistRules;
    bool m_whitelistRulesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
