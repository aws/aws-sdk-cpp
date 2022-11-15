/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class AWS_MGN_API CreateLaunchConfigurationTemplateRequest : public MgnRequest
  {
  public:
    CreateLaunchConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchConfigurationTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline bool PostLaunchActionsHasBeenSet() const { return m_postLaunchActionsHasBeenSet; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = value; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::move(value); }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}


    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    PostLaunchActions m_postLaunchActions;
    bool m_postLaunchActionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
