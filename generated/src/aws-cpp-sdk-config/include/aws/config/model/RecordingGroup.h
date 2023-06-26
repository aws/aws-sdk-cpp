﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ExclusionByResourceTypes.h>
#include <aws/config/model/RecordingStrategy.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Specifies which resource types Config records for configuration changes. In
   * the recording group, you specify whether you want to record all supported
   * resource types or to include or exclude specific types of resources.</p> <p>By
   * default, Config records configuration changes for all supported types of
   * <i>Regional resources</i> that Config discovers in the Amazon Web Services
   * Region in which it is running. Regional resources are tied to a Region and can
   * be used only in that Region. Examples of Regional resources are Amazon EC2
   * instances and Amazon EBS volumes.</p> <p>You can also have Config record
   * supported types of <i>global resources</i>. Global resources are not tied to a
   * specific Region and can be used in all Regions. The global resource types that
   * Config supports include IAM users, groups, roles, and customer managed
   * policies.</p>  <p>Global resource types onboarded to Config recording
   * after February 2022 will be recorded only in the service's home Region for the
   * commercial partition and Amazon Web Services GovCloud (US-West) for the Amazon
   * Web Services GovCloud (US) partition. You can view the Configuration Items for
   * these new global resource types only in their home Region and Amazon Web
   * Services GovCloud (US-West).</p>  <p>If you don't want Config to
   * record all resources, you can specify which types of resources Config records
   * with the <code>resourceTypes</code> parameter.</p> <p>For a list of supported
   * resource types, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * Resource Types</a> in the <i>Config developer guide</i>.</p> <p>For more
   * information and a table of the Home Regions for Global Resource Types Onboarded
   * after February 2022, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html">Selecting
   * Which Resources Config Records</a> in the <i>Config developer
   * guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RecordingGroup">AWS
   * API Reference</a></p>
   */
  class RecordingGroup
  {
  public:
    AWS_CONFIGSERVICE_API RecordingGroup();
    AWS_CONFIGSERVICE_API RecordingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RecordingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * regional resource types.</p> <p>If you set this field to <code>true</code>, when
     * Config adds support for a new type of regional resource, Config starts recording
     * resources of that type automatically.</p> <p>If you set this field to
     * <code>true</code>, you cannot enumerate specific resource types to record in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * or to exclude in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     */
    inline bool GetAllSupported() const{ return m_allSupported; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * regional resource types.</p> <p>If you set this field to <code>true</code>, when
     * Config adds support for a new type of regional resource, Config starts recording
     * resources of that type automatically.</p> <p>If you set this field to
     * <code>true</code>, you cannot enumerate specific resource types to record in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * or to exclude in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     */
    inline bool AllSupportedHasBeenSet() const { return m_allSupportedHasBeenSet; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * regional resource types.</p> <p>If you set this field to <code>true</code>, when
     * Config adds support for a new type of regional resource, Config starts recording
     * resources of that type automatically.</p> <p>If you set this field to
     * <code>true</code>, you cannot enumerate specific resource types to record in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * or to exclude in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     */
    inline void SetAllSupported(bool value) { m_allSupportedHasBeenSet = true; m_allSupported = value; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * regional resource types.</p> <p>If you set this field to <code>true</code>, when
     * Config adds support for a new type of regional resource, Config starts recording
     * resources of that type automatically.</p> <p>If you set this field to
     * <code>true</code>, you cannot enumerate specific resource types to record in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * or to exclude in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     */
    inline RecordingGroup& WithAllSupported(bool value) { SetAllSupported(value); return *this;}


    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * global resources.</p> <p>Before you set this field to <code>true</code>, set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. Optionally, you can set the <code>useOnly</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>.</p> <p>If you set this field to
     * <code>true</code>, when Config adds support for a new type of global resource in
     * the Region where you set up the configuration recorder, Config starts recording
     * resources of that type automatically.</p>  <p>If you set this field to
     * <code>false</code> but list global resource types in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * Config will still record configuration changes for those specified resource
     * types <i>regardless</i> of if you set the
     * <code>includeGlobalResourceTypes</code> field to false.</p> <p>If you do not
     * want to record configuration changes to global resource types, make sure to not
     * list them in the <code>resourceTypes</code> field in addition to setting the
     * <code>includeGlobalResourceTypes</code> field to false.</p> 
     */
    inline bool GetIncludeGlobalResourceTypes() const{ return m_includeGlobalResourceTypes; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * global resources.</p> <p>Before you set this field to <code>true</code>, set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. Optionally, you can set the <code>useOnly</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>.</p> <p>If you set this field to
     * <code>true</code>, when Config adds support for a new type of global resource in
     * the Region where you set up the configuration recorder, Config starts recording
     * resources of that type automatically.</p>  <p>If you set this field to
     * <code>false</code> but list global resource types in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * Config will still record configuration changes for those specified resource
     * types <i>regardless</i> of if you set the
     * <code>includeGlobalResourceTypes</code> field to false.</p> <p>If you do not
     * want to record configuration changes to global resource types, make sure to not
     * list them in the <code>resourceTypes</code> field in addition to setting the
     * <code>includeGlobalResourceTypes</code> field to false.</p> 
     */
    inline bool IncludeGlobalResourceTypesHasBeenSet() const { return m_includeGlobalResourceTypesHasBeenSet; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * global resources.</p> <p>Before you set this field to <code>true</code>, set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. Optionally, you can set the <code>useOnly</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>.</p> <p>If you set this field to
     * <code>true</code>, when Config adds support for a new type of global resource in
     * the Region where you set up the configuration recorder, Config starts recording
     * resources of that type automatically.</p>  <p>If you set this field to
     * <code>false</code> but list global resource types in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * Config will still record configuration changes for those specified resource
     * types <i>regardless</i> of if you set the
     * <code>includeGlobalResourceTypes</code> field to false.</p> <p>If you do not
     * want to record configuration changes to global resource types, make sure to not
     * list them in the <code>resourceTypes</code> field in addition to setting the
     * <code>includeGlobalResourceTypes</code> field to false.</p> 
     */
    inline void SetIncludeGlobalResourceTypes(bool value) { m_includeGlobalResourceTypesHasBeenSet = true; m_includeGlobalResourceTypes = value; }

    /**
     * <p>Specifies whether Config records configuration changes for all supported
     * global resources.</p> <p>Before you set this field to <code>true</code>, set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. Optionally, you can set the <code>useOnly</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>.</p> <p>If you set this field to
     * <code>true</code>, when Config adds support for a new type of global resource in
     * the Region where you set up the configuration recorder, Config starts recording
     * resources of that type automatically.</p>  <p>If you set this field to
     * <code>false</code> but list global resource types in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>,
     * Config will still record configuration changes for those specified resource
     * types <i>regardless</i> of if you set the
     * <code>includeGlobalResourceTypes</code> field to false.</p> <p>If you do not
     * want to record configuration changes to global resource types, make sure to not
     * list them in the <code>resourceTypes</code> field in addition to setting the
     * <code>includeGlobalResourceTypes</code> field to false.</p> 
     */
    inline RecordingGroup& WithIncludeGlobalResourceTypes(bool value) { SetIncludeGlobalResourceTypes(value); return *this;}


    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline RecordingGroup& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline RecordingGroup& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline RecordingGroup& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A comma-separated list that specifies which resource types Config
     * records.</p> <p>Optionally, you can set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>To record all configuration
     * changes, set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>, and either omit this field or don't specify any resource
     * types in this field. If you set the <code>allSupported</code> field to
     * <code>false</code> and specify values for <code>resourceTypes</code>, when
     * Config adds support for a new type of resource, it will not record resources of
     * that type unless you manually add that type to your recording group.</p> <p>For
     * a list of valid <code>resourceTypes</code> values, see the <b>Resource Type
     * Value</b> column in <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a> in the <i>Config developer guide</i>.</p>
     *  <p> <b>Region Availability</b> </p> <p>Before specifying a resource type
     * for Config to track, check <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/what-is-resource-config-coverage.html">Resource
     * Coverage by Region Availability</a> to see if the resource type is supported in
     * the Amazon Web Services Region where you set up Config. If a resource type is
     * supported by Config in at least one Region, you can enable the recording of that
     * resource type in all Regions supported by Config, even if the specified resource
     * type is not supported in the Amazon Web Services Region where you set up
     * Config.</p> 
     */
    inline RecordingGroup& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline const ExclusionByResourceTypes& GetExclusionByResourceTypes() const{ return m_exclusionByResourceTypes; }

    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline bool ExclusionByResourceTypesHasBeenSet() const { return m_exclusionByResourceTypesHasBeenSet; }

    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline void SetExclusionByResourceTypes(const ExclusionByResourceTypes& value) { m_exclusionByResourceTypesHasBeenSet = true; m_exclusionByResourceTypes = value; }

    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline void SetExclusionByResourceTypes(ExclusionByResourceTypes&& value) { m_exclusionByResourceTypesHasBeenSet = true; m_exclusionByResourceTypes = std::move(value); }

    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline RecordingGroup& WithExclusionByResourceTypes(const ExclusionByResourceTypes& value) { SetExclusionByResourceTypes(value); return *this;}

    /**
     * <p>An object that specifies how Config excludes resource types from being
     * recorded by the configuration recorder.</p> <p>To use this option, you must set
     * the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p>
     */
    inline RecordingGroup& WithExclusionByResourceTypes(ExclusionByResourceTypes&& value) { SetExclusionByResourceTypes(std::move(value)); return *this;}


    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline const RecordingStrategy& GetRecordingStrategy() const{ return m_recordingStrategy; }

    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline bool RecordingStrategyHasBeenSet() const { return m_recordingStrategyHasBeenSet; }

    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline void SetRecordingStrategy(const RecordingStrategy& value) { m_recordingStrategyHasBeenSet = true; m_recordingStrategy = value; }

    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline void SetRecordingStrategy(RecordingStrategy&& value) { m_recordingStrategyHasBeenSet = true; m_recordingStrategy = std::move(value); }

    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline RecordingGroup& WithRecordingStrategy(const RecordingStrategy& value) { SetRecordingStrategy(value); return *this;}

    /**
     * <p>An object that specifies the recording strategy for the configuration
     * recorder.</p> <ul> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported regional resource types. You also must set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new type of regional
     * resource, Config automatically starts recording resources of that type.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for only the resource types you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set the <code>useOnly</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
     * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration
     * changes for all supported resource types except the resource types that you
     * specify as exemptions to exclude from being recorded in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p>The <code>recordingStrategy</code> field is optional when
     * you set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p>If you choose <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the
     * recording strategy, the <code>exclusionByResourceTypes</code> field will
     * override other properties in the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exemptions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p> <p>By default, if you choose the
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config adds
     * support for a new resource type in the Region where you set up the configuration
     * recorder, including global resource types, Config starts recording resources of
     * that type automatically.</p> 
     */
    inline RecordingGroup& WithRecordingStrategy(RecordingStrategy&& value) { SetRecordingStrategy(std::move(value)); return *this;}

  private:

    bool m_allSupported;
    bool m_allSupportedHasBeenSet = false;

    bool m_includeGlobalResourceTypes;
    bool m_includeGlobalResourceTypesHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    ExclusionByResourceTypes m_exclusionByResourceTypes;
    bool m_exclusionByResourceTypesHasBeenSet = false;

    RecordingStrategy m_recordingStrategy;
    bool m_recordingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
