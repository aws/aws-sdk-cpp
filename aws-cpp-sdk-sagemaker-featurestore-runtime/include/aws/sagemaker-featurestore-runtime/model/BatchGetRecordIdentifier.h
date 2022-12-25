/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   * <p>The identifier that identifies the batch of Records you are retrieving in a
   * batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecordIdentifier">AWS
   * API Reference</a></p>
   */
  class BatchGetRecordIdentifier
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline BatchGetRecordIdentifier& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline BatchGetRecordIdentifier& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>A <code>FeatureGroupName</code> containing Records you are retrieving in a
     * batch.</p>
     */
    inline BatchGetRecordIdentifier& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordIdentifiersValueAsString() const{ return m_recordIdentifiersValueAsString; }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline bool RecordIdentifiersValueAsStringHasBeenSet() const { return m_recordIdentifiersValueAsStringHasBeenSet; }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline void SetRecordIdentifiersValueAsString(const Aws::Vector<Aws::String>& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString = value; }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline void SetRecordIdentifiersValueAsString(Aws::Vector<Aws::String>&& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString = std::move(value); }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline BatchGetRecordIdentifier& WithRecordIdentifiersValueAsString(const Aws::Vector<Aws::String>& value) { SetRecordIdentifiersValueAsString(value); return *this;}

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline BatchGetRecordIdentifier& WithRecordIdentifiersValueAsString(Aws::Vector<Aws::String>&& value) { SetRecordIdentifiersValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline BatchGetRecordIdentifier& AddRecordIdentifiersValueAsString(const Aws::String& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString.push_back(value); return *this; }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline BatchGetRecordIdentifier& AddRecordIdentifiersValueAsString(Aws::String&& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline BatchGetRecordIdentifier& AddRecordIdentifiersValueAsString(const char* value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString.push_back(value); return *this; }


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
    inline BatchGetRecordIdentifier& WithFeatureNames(const Aws::Vector<Aws::String>& value) { SetFeatureNames(value); return *this;}

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline BatchGetRecordIdentifier& WithFeatureNames(Aws::Vector<Aws::String>&& value) { SetFeatureNames(std::move(value)); return *this;}

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline BatchGetRecordIdentifier& AddFeatureNames(const Aws::String& value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(value); return *this; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline BatchGetRecordIdentifier& AddFeatureNames(Aws::String&& value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline BatchGetRecordIdentifier& AddFeatureNames(const char* value) { m_featureNamesHasBeenSet = true; m_featureNames.push_back(value); return *this; }

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recordIdentifiersValueAsString;
    bool m_recordIdentifiersValueAsStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_featureNames;
    bool m_featureNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
