/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies which Amazon Web Services resource types Config records for
   * configuration changes. In the recording group, you specify whether you want to
   * record all supported resource types or only specific types of resources.</p>
   * <p>By default, Config records the configuration changes for all supported types
   * of <i>regional resources</i> that Config discovers in the region in which it is
   * running. Regional resources are tied to a region and can be used only in that
   * region. Examples of regional resources are EC2 instances and EBS volumes.</p>
   * <p>You can also have Config record supported types of <i>global resources</i>.
   * Global resources are not tied to a specific region and can be used in all
   * regions. The global resource types that Config supports include IAM users,
   * groups, roles, and customer managed policies.</p>  <p>Global resource
   * types onboarded to Config recording after February 2022 will only be recorded in
   * the service's home region for the commercial partition and Amazon Web Services
   * GovCloud (US) West for the GovCloud partition. You can view the Configuration
   * Items for these new global resource types only in their home region and Amazon
   * Web Services GovCloud (US) West.</p> <p>Supported global resource types
   * onboarded before February 2022 such as <code>AWS::IAM::Group</code>,
   * <code>AWS::IAM::Policy</code>, <code>AWS::IAM::Role</code>,
   * <code>AWS::IAM::User</code> remain unchanged, and they will continue to deliver
   * Configuration Items in all supported regions in Config. The change will only
   * affect new global resource types onboarded after February 2022.</p> <p>To record
   * global resource types onboarded after February 2022, enable All Supported
   * Resource Types in the home region of the global resource type you want to
   * record.</p>  <p>If you don't want Config to record all resources,
   * you can specify which types of resources it will record with the
   * <code>resourceTypes</code> parameter.</p> <p>For a list of supported resource
   * types, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * Resource Types</a>.</p> <p>For more information and a table of the Home Regions
   * for Global Resource Types Onboarded after February 2022, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html">Selecting
   * Which Resources Config Records</a>.</p><p><h3>See Also:</h3>   <a
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
     * <p>Specifies whether Config records configuration changes for every supported
     * type of regional resource.</p> <p>If you set this option to <code>true</code>,
     * when Config adds support for a new type of regional resource, it starts
     * recording resources of that type automatically.</p> <p>If you set this option to
     * <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline bool GetAllSupported() const{ return m_allSupported; }

    /**
     * <p>Specifies whether Config records configuration changes for every supported
     * type of regional resource.</p> <p>If you set this option to <code>true</code>,
     * when Config adds support for a new type of regional resource, it starts
     * recording resources of that type automatically.</p> <p>If you set this option to
     * <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline bool AllSupportedHasBeenSet() const { return m_allSupportedHasBeenSet; }

    /**
     * <p>Specifies whether Config records configuration changes for every supported
     * type of regional resource.</p> <p>If you set this option to <code>true</code>,
     * when Config adds support for a new type of regional resource, it starts
     * recording resources of that type automatically.</p> <p>If you set this option to
     * <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline void SetAllSupported(bool value) { m_allSupportedHasBeenSet = true; m_allSupported = value; }

    /**
     * <p>Specifies whether Config records configuration changes for every supported
     * type of regional resource.</p> <p>If you set this option to <code>true</code>,
     * when Config adds support for a new type of regional resource, it starts
     * recording resources of that type automatically.</p> <p>If you set this option to
     * <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline RecordingGroup& WithAllSupported(bool value) { SetAllSupported(value); return *this;}


    /**
     * <p>Specifies whether Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when Config adds support for a new type of global
     * resource, it starts recording resources of that type automatically.</p> <p>The
     * configuration details for any global resource are the same in all regions. To
     * prevent duplicate configuration items, you should consider customizing Config in
     * only one region to record global resources.</p>
     */
    inline bool GetIncludeGlobalResourceTypes() const{ return m_includeGlobalResourceTypes; }

    /**
     * <p>Specifies whether Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when Config adds support for a new type of global
     * resource, it starts recording resources of that type automatically.</p> <p>The
     * configuration details for any global resource are the same in all regions. To
     * prevent duplicate configuration items, you should consider customizing Config in
     * only one region to record global resources.</p>
     */
    inline bool IncludeGlobalResourceTypesHasBeenSet() const { return m_includeGlobalResourceTypesHasBeenSet; }

    /**
     * <p>Specifies whether Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when Config adds support for a new type of global
     * resource, it starts recording resources of that type automatically.</p> <p>The
     * configuration details for any global resource are the same in all regions. To
     * prevent duplicate configuration items, you should consider customizing Config in
     * only one region to record global resources.</p>
     */
    inline void SetIncludeGlobalResourceTypes(bool value) { m_includeGlobalResourceTypesHasBeenSet = true; m_includeGlobalResourceTypes = value; }

    /**
     * <p>Specifies whether Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when Config adds support for a new type of global
     * resource, it starts recording resources of that type automatically.</p> <p>The
     * configuration details for any global resource are the same in all regions. To
     * prevent duplicate configuration items, you should consider customizing Config in
     * only one region to record global resources.</p>
     */
    inline RecordingGroup& WithIncludeGlobalResourceTypes(bool value) { SetIncludeGlobalResourceTypes(value); return *this;}


    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline RecordingGroup& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline RecordingGroup& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline RecordingGroup& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A comma-separated list that specifies the types of Amazon Web Services
     * resources for which Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>To record all configuration changes, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>false</code>, when Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Amazon Web Services resource Types</a>.</p>
     */
    inline RecordingGroup& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    bool m_allSupported;
    bool m_allSupportedHasBeenSet = false;

    bool m_includeGlobalResourceTypes;
    bool m_includeGlobalResourceTypesHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
