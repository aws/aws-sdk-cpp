/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ClusterConfiguration.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
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


    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline const ClusterConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline void SetConfiguration(const ClusterConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline void SetConfiguration(ClusterConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithConfiguration(const ClusterConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithConfiguration(ClusterConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const{ return m_capacityProviders; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline void SetCapacityProviders(const Aws::Vector<Aws::String>& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = value; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline void SetCapacityProviders(Aws::Vector<Aws::String>&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::move(value); }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateClusterRequest& WithCapacityProviders(const Aws::Vector<Aws::String>& value) { SetCapacityProviders(value); return *this;}

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateClusterRequest& WithCapacityProviders(Aws::Vector<Aws::String>&& value) { SetCapacityProviders(std::move(value)); return *this;}

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateClusterRequest& AddCapacityProviders(const Aws::String& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateClusterRequest& AddCapacityProviders(Aws::String&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a>CreateService</a> or
     * <a>RunTask</a> actions.</p> <p>If specifying a capacity provider that uses an
     * Auto Scaling group, the capacity provider must already be created and not
     * already associated with another cluster. New Auto Scaling group capacity
     * providers can be created with the <a>CreateCapacityProvider</a> API
     * operation.</p> <p>To use a AWS Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The AWS
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateClusterRequest& AddCapacityProviders(const char* value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }


    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetDefaultCapacityProviderStrategy() const{ return m_defaultCapacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline CreateClusterRequest& WithDefaultCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetDefaultCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline CreateClusterRequest& WithDefaultCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetDefaultCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline CreateClusterRequest& AddDefaultCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy to set as the default for the cluster. When a
     * default capacity provider strategy is set for a cluster, when calling the
     * <a>RunTask</a> or <a>CreateService</a> APIs wtih no capacity provider strategy
     * or launch type specified, the default capacity provider strategy for the cluster
     * is used.</p> <p>If a default capacity provider strategy is not defined for a
     * cluster during creation, it can be defined later with the
     * <a>PutClusterCapacityProviders</a> API operation.</p>
     */
    inline CreateClusterRequest& AddDefaultCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet;

    ClusterConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet;

    Aws::Vector<CapacityProviderStrategyItem> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
