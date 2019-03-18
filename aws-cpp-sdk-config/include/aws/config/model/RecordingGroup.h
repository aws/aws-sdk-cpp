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
   * <p>Specifies the types of AWS resource for which AWS Config records
   * configuration changes.</p> <p>In the recording group, you specify whether all
   * supported types or specific types of resources are recorded.</p> <p>By default,
   * AWS Config records configuration changes for all supported types of regional
   * resources that AWS Config discovers in the region in which it is running.
   * Regional resources are tied to a region and can be used only in that region.
   * Examples of regional resources are EC2 instances and EBS volumes.</p> <p>You can
   * also have AWS Config record configuration changes for supported types of global
   * resources (for example, IAM resources). Global resources are not tied to an
   * individual region and can be used in all regions.</p> <important> <p>The
   * configuration details for any global resource are the same in all regions. If
   * you customize AWS Config in multiple regions to record global resources, it will
   * create multiple configuration items each time a global resource changes: one
   * configuration item for each region. These configuration items will contain
   * identical data. To prevent duplicate configuration items, you should consider
   * customizing AWS Config in only one region to record global resources, unless you
   * want the configuration items to be available in multiple regions.</p>
   * </important> <p>If you don't want AWS Config to record all resources, you can
   * specify which types of resources it will record with the
   * <code>resourceTypes</code> parameter.</p> <p>For a list of supported resource
   * types, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * Resource Types</a>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html">Selecting
   * Which Resources AWS Config Records</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RecordingGroup">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API RecordingGroup
  {
  public:
    RecordingGroup();
    RecordingGroup(Aws::Utils::Json::JsonView jsonValue);
    RecordingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether AWS Config records configuration changes for every
     * supported type of regional resource.</p> <p>If you set this option to
     * <code>true</code>, when AWS Config adds support for a new type of regional
     * resource, it starts recording resources of that type automatically.</p> <p>If
     * you set this option to <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline bool GetAllSupported() const{ return m_allSupported; }

    /**
     * <p>Specifies whether AWS Config records configuration changes for every
     * supported type of regional resource.</p> <p>If you set this option to
     * <code>true</code>, when AWS Config adds support for a new type of regional
     * resource, it starts recording resources of that type automatically.</p> <p>If
     * you set this option to <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline bool AllSupportedHasBeenSet() const { return m_allSupportedHasBeenSet; }

    /**
     * <p>Specifies whether AWS Config records configuration changes for every
     * supported type of regional resource.</p> <p>If you set this option to
     * <code>true</code>, when AWS Config adds support for a new type of regional
     * resource, it starts recording resources of that type automatically.</p> <p>If
     * you set this option to <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline void SetAllSupported(bool value) { m_allSupportedHasBeenSet = true; m_allSupported = value; }

    /**
     * <p>Specifies whether AWS Config records configuration changes for every
     * supported type of regional resource.</p> <p>If you set this option to
     * <code>true</code>, when AWS Config adds support for a new type of regional
     * resource, it starts recording resources of that type automatically.</p> <p>If
     * you set this option to <code>true</code>, you cannot enumerate a list of
     * <code>resourceTypes</code>.</p>
     */
    inline RecordingGroup& WithAllSupported(bool value) { SetAllSupported(value); return *this;}


    /**
     * <p>Specifies whether AWS Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * global resource, it starts recording resources of that type automatically.</p>
     * <p>The configuration details for any global resource are the same in all
     * regions. To prevent duplicate configuration items, you should consider
     * customizing AWS Config in only one region to record global resources.</p>
     */
    inline bool GetIncludeGlobalResourceTypes() const{ return m_includeGlobalResourceTypes; }

    /**
     * <p>Specifies whether AWS Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * global resource, it starts recording resources of that type automatically.</p>
     * <p>The configuration details for any global resource are the same in all
     * regions. To prevent duplicate configuration items, you should consider
     * customizing AWS Config in only one region to record global resources.</p>
     */
    inline bool IncludeGlobalResourceTypesHasBeenSet() const { return m_includeGlobalResourceTypesHasBeenSet; }

    /**
     * <p>Specifies whether AWS Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * global resource, it starts recording resources of that type automatically.</p>
     * <p>The configuration details for any global resource are the same in all
     * regions. To prevent duplicate configuration items, you should consider
     * customizing AWS Config in only one region to record global resources.</p>
     */
    inline void SetIncludeGlobalResourceTypes(bool value) { m_includeGlobalResourceTypesHasBeenSet = true; m_includeGlobalResourceTypes = value; }

    /**
     * <p>Specifies whether AWS Config includes all supported types of global resources
     * (for example, IAM resources) with the resources that it records.</p> <p>Before
     * you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>true</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * global resource, it starts recording resources of that type automatically.</p>
     * <p>The configuration details for any global resource are the same in all
     * regions. To prevent duplicate configuration items, you should consider
     * customizing AWS Config in only one region to record global resources.</p>
     */
    inline RecordingGroup& WithIncludeGlobalResourceTypes(bool value) { SetIncludeGlobalResourceTypes(value); return *this;}


    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline RecordingGroup& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline RecordingGroup& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline RecordingGroup& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A comma-separated list that specifies the types of AWS resources for which
     * AWS Config records configuration changes (for example,
     * <code>AWS::EC2::Instance</code> or <code>AWS::CloudTrail::Trail</code>).</p>
     * <p>Before you can set this option to <code>true</code>, you must set the
     * <code>allSupported</code> option to <code>false</code>.</p> <p>If you set this
     * option to <code>true</code>, when AWS Config adds support for a new type of
     * resource, it will not record resources of that type unless you manually add that
     * type to your recording group.</p> <p>For a list of valid
     * <code>resourceTypes</code> values, see the <b>resourceType Value</b> column in
     * <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * AWS Resource Types</a>.</p>
     */
    inline RecordingGroup& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    bool m_allSupported;
    bool m_allSupportedHasBeenSet;

    bool m_includeGlobalResourceTypes;
    bool m_includeGlobalResourceTypesHasBeenSet;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
