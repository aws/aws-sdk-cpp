/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERFEATURESTORERUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline GetRecordRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline GetRecordRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group from which you want to retrieve a record.</p>
     */
    inline GetRecordRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline GetRecordRequest& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline GetRecordRequest& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline GetRecordRequest& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}


    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatureNames() const{ return m_featureNames; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline bool FeatureNamesHasBeenSet() const { return m_featureNamesHasBeenSet; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline void SetFeatureNames(const Aws::Vector<Aws::String>& value) { m_featureNamesHasBeenSet = true; m_featureNames = value; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline void SetFeatureNames(Aws::Vector<Aws::String>&& value) { m_featureNamesHasBeenSet = true; m_featureNames = std::move(value); }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline GetRecordRequest& WithFeatureNames(const Aws::Vector<Aws::String>& value) { SetFeatureNames(value); return *this;}

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline GetRecordRequest& WithFeatureNames(Aws::Vector<Aws::String>&& value) { SetFeatureNames(std::move(value)); return *this;}

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline GetRecordRequest& AddFeatureNames(const Aws::String& value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(value); return *this; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline GetRecordRequest& AddFeatureNames(Aws::String&& value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline GetRecordRequest& AddFeatureNames(const char* value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(value); return *this; }

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_featureNames;
    bool m_featureNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
