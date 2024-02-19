/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/RecordingStrategyType.h>
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
   * <p>Specifies the recording strategy of the configuration recorder.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RecordingStrategy">AWS
   * API Reference</a></p>
   */
  class RecordingStrategy
  {
  public:
    AWS_CONFIGSERVICE_API RecordingStrategy();
    AWS_CONFIGSERVICE_API RecordingStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RecordingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline const RecordingStrategyType& GetUseOnly() const{ return m_useOnly; }

    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline bool UseOnlyHasBeenSet() const { return m_useOnlyHasBeenSet; }

    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline void SetUseOnly(const RecordingStrategyType& value) { m_useOnlyHasBeenSet = true; m_useOnly = value; }

    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline void SetUseOnly(RecordingStrategyType&& value) { m_useOnlyHasBeenSet = true; m_useOnly = std::move(value); }

    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline RecordingStrategy& WithUseOnly(const RecordingStrategyType& value) { SetUseOnly(value); return *this;}

    /**
     * <p>The recording strategy for the configuration recorder.</p> <ul> <li> <p>If
     * you set this option to <code>ALL_SUPPORTED_RESOURCE_TYPES</code>, Config records
     * configuration changes for all supported resource types, excluding the global IAM
     * resource types. You also must set the <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>. When Config adds support for a new resource type, Config
     * automatically starts recording resources of that type. For a list of supported
     * resource types, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
     * Resource Types</a> in the <i>Config developer guide</i>.</p> </li> <li> <p>If
     * you set this option to <code>INCLUSION_BY_RESOURCE_TYPES</code>, Config records
     * configuration changes for only the resource types that you specify in the
     * <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * </li> <li> <p>If you set this option to
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code>, Config records configuration changes
     * for all supported resource types, except the resource types that you specify to
     * exclude from being recorded in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     * </li> </ul>  <p> <b>Required and optional fields</b> </p> <p>The
     * <code>recordingStrategy</code> field is optional when you set the
     * <code>allSupported</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>
     * to <code>true</code>.</p> <p>The <code>recordingStrategy</code> field is
     * optional when you list resource types in the <code>resourceTypes</code> field of
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingGroup.html">RecordingGroup</a>.</p>
     * <p>The <code>recordingStrategy</code> field is required if you list resource
     * types to exclude from recording in the <code>resourceTypes</code> field of <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ExclusionByResourceTypes.html">ExclusionByResourceTypes</a>.</p>
     *   <p> <b>Overriding fields</b> </p> <p>If you choose
     * <code>EXCLUSION_BY_RESOURCE_TYPES</code> for the recording strategy, the
     * <code>exclusionByResourceTypes</code> field will override other properties in
     * the request.</p> <p>For example, even if you set
     * <code>includeGlobalResourceTypes</code> to false, global IAM resource types will
     * still be automatically recorded in this option unless those resource types are
     * specifically listed as exclusions in the <code>resourceTypes</code> field of
     * <code>exclusionByResourceTypes</code>.</p>   <p> <b>Global resource
     * types and the exclusion recording strategy</b> </p> <p>By default, if you choose
     * the <code>EXCLUSION_BY_RESOURCE_TYPES</code> recording strategy, when Config
     * adds support for a new resource type in the Region where you set up the
     * configuration recorder, including global resource types, Config starts recording
     * resources of that type automatically.</p> <p>Unless specifically listed as
     * exclusions, <code>AWS::RDS::GlobalCluster</code> will be recorded automatically
     * in all supported Config Regions were the configuration recorder is enabled.</p>
     * <p>IAM users, groups, roles, and customer managed policies will be recorded in
     * the Region where you set up the configuration recorder if that is a Region where
     * Config was available before February 2022. You cannot be record the global IAM
     * resouce types in Regions supported by Config after February 2022. This list
     * where you cannot record the global IAM resource types includes the following
     * Regions:</p> <ul> <li> <p>Asia Pacific (Hyderabad)</p> </li> <li> <p>Asia
     * Pacific (Melbourne)</p> </li> <li> <p>Canada West (Calgary)</p> </li> <li>
     * <p>Europe (Spain)</p> </li> <li> <p>Europe (Zurich)</p> </li> <li> <p>Israel
     * (Tel Aviv)</p> </li> <li> <p>Middle East (UAE)</p> </li> </ul> 
     */
    inline RecordingStrategy& WithUseOnly(RecordingStrategyType&& value) { SetUseOnly(std::move(value)); return *this;}

  private:

    RecordingStrategyType m_useOnly;
    bool m_useOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
