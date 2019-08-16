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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API CreateClusterRequest : public ECSRequest
  {
  public:
    CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, and hyphens are allowed. </p>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for AWS use. You cannot edit or delete
     * tag keys or values with this prefix. Tags with this prefix do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const{ return m_settings; }

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline void SetSettings(const Aws::Vector<ClusterSetting>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline void SetSettings(Aws::Vector<ClusterSetting>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline CreateClusterRequest& WithSettings(const Aws::Vector<ClusterSetting>& value) { SetSettings(value); return *this;}

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline CreateClusterRequest& WithSettings(Aws::Vector<ClusterSetting>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline CreateClusterRequest& AddSettings(const ClusterSetting& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * <p>The setting to use when creating a cluster. This parameter is used to enable
     * CloudWatch Container Insights for a cluster. If this value is specified, it will
     * override the <code>containerInsights</code> value set with
     * <a>PutAccountSetting</a> or <a>PutAccountSettingDefault</a>.</p>
     */
    inline CreateClusterRequest& AddSettings(ClusterSetting&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
