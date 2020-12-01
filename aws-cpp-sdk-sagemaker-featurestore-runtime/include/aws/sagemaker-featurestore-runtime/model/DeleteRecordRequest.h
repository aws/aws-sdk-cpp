/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKERFEATURESTORERUNTIME_API DeleteRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    DeleteRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecord"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}


    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline const Aws::String& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(const Aws::String& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(Aws::String&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(const char* value) { m_eventTimeHasBeenSet = true; m_eventTime.assign(value); }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(const Aws::String& value) { SetEventTime(value); return *this;}

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(Aws::String&& value) { SetEventTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(const char* value) { SetEventTime(value); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet;

    Aws::String m_eventTime;
    bool m_eventTimeHasBeenSet;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
