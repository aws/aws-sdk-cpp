/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ConfigRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline const ConfigRule& GetConfigRule() const{ return m_configRule; }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline bool ConfigRuleHasBeenSet() const { return m_configRuleHasBeenSet; }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline void SetConfigRule(const ConfigRule& value) { m_configRuleHasBeenSet = true; m_configRule = value; }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline void SetConfigRule(ConfigRule&& value) { m_configRuleHasBeenSet = true; m_configRule = std::move(value); }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline PutConfigRuleRequest& WithConfigRule(const ConfigRule& value) { SetConfigRule(value); return *this;}

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline PutConfigRuleRequest& WithConfigRule(ConfigRule&& value) { SetConfigRule(std::move(value)); return *this;}


    /**
     * <p>An array of tag object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tag object.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of tag object.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of tag object.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of tag object.</p>
     */
    inline PutConfigRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tag object.</p>
     */
    inline PutConfigRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tag object.</p>
     */
    inline PutConfigRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tag object.</p>
     */
    inline PutConfigRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ConfigRule m_configRule;
    bool m_configRuleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
