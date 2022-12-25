/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class EnableSecurityHubRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API EnableSecurityHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSecurityHub"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline EnableSecurityHubRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Whether to enable the security standards that Security Hub has designated as
     * automatically enabled. If you do not provide a value for
     * <code>EnableDefaultStandards</code>, it is set to <code>true</code>. To not
     * enable the automatically enabled standards, set
     * <code>EnableDefaultStandards</code> to <code>false</code>.</p>
     */
    inline bool GetEnableDefaultStandards() const{ return m_enableDefaultStandards; }

    /**
     * <p>Whether to enable the security standards that Security Hub has designated as
     * automatically enabled. If you do not provide a value for
     * <code>EnableDefaultStandards</code>, it is set to <code>true</code>. To not
     * enable the automatically enabled standards, set
     * <code>EnableDefaultStandards</code> to <code>false</code>.</p>
     */
    inline bool EnableDefaultStandardsHasBeenSet() const { return m_enableDefaultStandardsHasBeenSet; }

    /**
     * <p>Whether to enable the security standards that Security Hub has designated as
     * automatically enabled. If you do not provide a value for
     * <code>EnableDefaultStandards</code>, it is set to <code>true</code>. To not
     * enable the automatically enabled standards, set
     * <code>EnableDefaultStandards</code> to <code>false</code>.</p>
     */
    inline void SetEnableDefaultStandards(bool value) { m_enableDefaultStandardsHasBeenSet = true; m_enableDefaultStandards = value; }

    /**
     * <p>Whether to enable the security standards that Security Hub has designated as
     * automatically enabled. If you do not provide a value for
     * <code>EnableDefaultStandards</code>, it is set to <code>true</code>. To not
     * enable the automatically enabled standards, set
     * <code>EnableDefaultStandards</code> to <code>false</code>.</p>
     */
    inline EnableSecurityHubRequest& WithEnableDefaultStandards(bool value) { SetEnableDefaultStandards(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableDefaultStandards;
    bool m_enableDefaultStandardsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
