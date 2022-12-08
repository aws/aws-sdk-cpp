/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <utility>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class PutRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API PutRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline PutRecordRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline PutRecordRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group that you want to insert the record into.</p>
     */
    inline PutRecordRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const{ return m_record; }

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline void SetRecord(const Aws::Vector<FeatureValue>& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline void SetRecord(Aws::Vector<FeatureValue>&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline PutRecordRequest& WithRecord(const Aws::Vector<FeatureValue>& value) { SetRecord(value); return *this;}

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline PutRecordRequest& WithRecord(Aws::Vector<FeatureValue>&& value) { SetRecord(std::move(value)); return *this;}

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline PutRecordRequest& AddRecord(const FeatureValue& value) { m_recordHasBeenSet = true; m_record.push_back(value); return *this; }

    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline PutRecordRequest& AddRecord(FeatureValue&& value) { m_recordHasBeenSet = true; m_record.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<TargetStore>& GetTargetStores() const{ return m_targetStores; }

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetTargetStores(const Aws::Vector<TargetStore>& value) { m_targetStoresHasBeenSet = true; m_targetStores = value; }

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetTargetStores(Aws::Vector<TargetStore>&& value) { m_targetStoresHasBeenSet = true; m_targetStores = std::move(value); }

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline PutRecordRequest& WithTargetStores(const Aws::Vector<TargetStore>& value) { SetTargetStores(value); return *this;}

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline PutRecordRequest& WithTargetStores(Aws::Vector<TargetStore>&& value) { SetTargetStores(std::move(value)); return *this;}

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline PutRecordRequest& AddTargetStores(const TargetStore& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(value); return *this; }

    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline PutRecordRequest& AddTargetStores(TargetStore&& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::Vector<FeatureValue> m_record;
    bool m_recordHasBeenSet = false;

    Aws::Vector<TargetStore> m_targetStores;
    bool m_targetStoresHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
