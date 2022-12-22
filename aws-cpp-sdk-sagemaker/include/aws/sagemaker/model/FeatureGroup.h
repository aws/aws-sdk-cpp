/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OnlineStoreConfig.h>
#include <aws/sagemaker/model/OfflineStoreConfig.h>
#include <aws/sagemaker/model/FeatureGroupStatus.h>
#include <aws/sagemaker/model/OfflineStoreStatus.h>
#include <aws/sagemaker/model/LastUpdateStatus.h>
#include <aws/sagemaker/model/FeatureDefinition.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Amazon SageMaker Feature Store stores features in a collection called Feature
   * Group. A Feature Group can be visualized as a table which has rows, with a
   * unique identifier for each row where each column in the table is a feature. In
   * principle, a Feature Group is composed of features and values per
   * features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureGroup">AWS
   * API Reference</a></p>
   */
  class FeatureGroup
  {
  public:
    AWS_SAGEMAKER_API FeatureGroup();
    AWS_SAGEMAKER_API FeatureGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}


    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline const Aws::String& GetRecordIdentifierFeatureName() const{ return m_recordIdentifierFeatureName; }

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline bool RecordIdentifierFeatureNameHasBeenSet() const { return m_recordIdentifierFeatureNameHasBeenSet; }

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline void SetRecordIdentifierFeatureName(const Aws::String& value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName = value; }

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline void SetRecordIdentifierFeatureName(Aws::String&& value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName = std::move(value); }

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline void SetRecordIdentifierFeatureName(const char* value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName.assign(value); }

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline FeatureGroup& WithRecordIdentifierFeatureName(const Aws::String& value) { SetRecordIdentifierFeatureName(value); return *this;}

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline FeatureGroup& WithRecordIdentifierFeatureName(Aws::String&& value) { SetRecordIdentifierFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline FeatureGroup& WithRecordIdentifierFeatureName(const char* value) { SetRecordIdentifierFeatureName(value); return *this;}


    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline const Aws::String& GetEventTimeFeatureName() const{ return m_eventTimeFeatureName; }

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline bool EventTimeFeatureNameHasBeenSet() const { return m_eventTimeFeatureNameHasBeenSet; }

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline void SetEventTimeFeatureName(const Aws::String& value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName = value; }

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline void SetEventTimeFeatureName(Aws::String&& value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName = std::move(value); }

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline void SetEventTimeFeatureName(const char* value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName.assign(value); }

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline FeatureGroup& WithEventTimeFeatureName(const Aws::String& value) { SetEventTimeFeatureName(value); return *this;}

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline FeatureGroup& WithEventTimeFeatureName(Aws::String&& value) { SetEventTimeFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline FeatureGroup& WithEventTimeFeatureName(const char* value) { SetEventTimeFeatureName(value); return *this;}


    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureDefinitions() const{ return m_featureDefinitions; }

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline bool FeatureDefinitionsHasBeenSet() const { return m_featureDefinitionsHasBeenSet; }

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureDefinitions(const Aws::Vector<FeatureDefinition>& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions = value; }

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureDefinitions(Aws::Vector<FeatureDefinition>&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions = std::move(value); }

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureDefinitions(const Aws::Vector<FeatureDefinition>& value) { SetFeatureDefinitions(value); return *this;}

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithFeatureDefinitions(Aws::Vector<FeatureDefinition>&& value) { SetFeatureDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& AddFeatureDefinitions(const FeatureDefinition& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& AddFeatureDefinitions(FeatureDefinition&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline FeatureGroup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline FeatureGroup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline FeatureGroup& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline FeatureGroup& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const OnlineStoreConfig& GetOnlineStoreConfig() const{ return m_onlineStoreConfig; }

    
    inline bool OnlineStoreConfigHasBeenSet() const { return m_onlineStoreConfigHasBeenSet; }

    
    inline void SetOnlineStoreConfig(const OnlineStoreConfig& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = value; }

    
    inline void SetOnlineStoreConfig(OnlineStoreConfig&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::move(value); }

    
    inline FeatureGroup& WithOnlineStoreConfig(const OnlineStoreConfig& value) { SetOnlineStoreConfig(value); return *this;}

    
    inline FeatureGroup& WithOnlineStoreConfig(OnlineStoreConfig&& value) { SetOnlineStoreConfig(std::move(value)); return *this;}


    
    inline const OfflineStoreConfig& GetOfflineStoreConfig() const{ return m_offlineStoreConfig; }

    
    inline bool OfflineStoreConfigHasBeenSet() const { return m_offlineStoreConfigHasBeenSet; }

    
    inline void SetOfflineStoreConfig(const OfflineStoreConfig& value) { m_offlineStoreConfigHasBeenSet = true; m_offlineStoreConfig = value; }

    
    inline void SetOfflineStoreConfig(OfflineStoreConfig&& value) { m_offlineStoreConfigHasBeenSet = true; m_offlineStoreConfig = std::move(value); }

    
    inline FeatureGroup& WithOfflineStoreConfig(const OfflineStoreConfig& value) { SetOfflineStoreConfig(value); return *this;}

    
    inline FeatureGroup& WithOfflineStoreConfig(OfflineStoreConfig&& value) { SetOfflineStoreConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline FeatureGroup& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline FeatureGroup& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline FeatureGroup& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline const FeatureGroupStatus& GetFeatureGroupStatus() const{ return m_featureGroupStatus; }

    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline bool FeatureGroupStatusHasBeenSet() const { return m_featureGroupStatusHasBeenSet; }

    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline void SetFeatureGroupStatus(const FeatureGroupStatus& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }

    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline void SetFeatureGroupStatus(FeatureGroupStatus&& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = std::move(value); }

    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline FeatureGroup& WithFeatureGroupStatus(const FeatureGroupStatus& value) { SetFeatureGroupStatus(value); return *this;}

    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline FeatureGroup& WithFeatureGroupStatus(FeatureGroupStatus&& value) { SetFeatureGroupStatus(std::move(value)); return *this;}


    
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const{ return m_offlineStoreStatus; }

    
    inline bool OfflineStoreStatusHasBeenSet() const { return m_offlineStoreStatusHasBeenSet; }

    
    inline void SetOfflineStoreStatus(const OfflineStoreStatus& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = value; }

    
    inline void SetOfflineStoreStatus(OfflineStoreStatus&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::move(value); }

    
    inline FeatureGroup& WithOfflineStoreStatus(const OfflineStoreStatus& value) { SetOfflineStoreStatus(value); return *this;}

    
    inline FeatureGroup& WithOfflineStoreStatus(OfflineStoreStatus&& value) { SetOfflineStoreStatus(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }

    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }

    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline void SetLastUpdateStatus(const LastUpdateStatus& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }

    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline void SetLastUpdateStatus(LastUpdateStatus&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::move(value); }

    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline FeatureGroup& WithLastUpdateStatus(const LastUpdateStatus& value) { SetLastUpdateStatus(value); return *this;}

    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline FeatureGroup& WithLastUpdateStatus(LastUpdateStatus&& value) { SetLastUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline FeatureGroup& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline FeatureGroup& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline FeatureGroup& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierFeatureName;
    bool m_recordIdentifierFeatureNameHasBeenSet = false;

    Aws::String m_eventTimeFeatureName;
    bool m_eventTimeFeatureNameHasBeenSet = false;

    Aws::Vector<FeatureDefinition> m_featureDefinitions;
    bool m_featureDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    OnlineStoreConfig m_onlineStoreConfig;
    bool m_onlineStoreConfigHasBeenSet = false;

    OfflineStoreConfig m_offlineStoreConfig;
    bool m_offlineStoreConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatus;
    bool m_featureGroupStatusHasBeenSet = false;

    OfflineStoreStatus m_offlineStoreStatus;
    bool m_offlineStoreStatusHasBeenSet = false;

    LastUpdateStatus m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
