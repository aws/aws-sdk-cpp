/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The error that has occurred when attempting to retrieve a batch of
   * Records.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecordError">AWS
   * API Reference</a></p>
   */
  class BatchGetRecordError
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordError();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline BatchGetRecordError& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline BatchGetRecordError& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group that the record belongs to.</p>
     */
    inline BatchGetRecordError& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline BatchGetRecordError& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline BatchGetRecordError& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> in string format of a Record
     * from a <code>FeatureGroup</code> that is causing an error when attempting to be
     * retrieved.</p>
     */
    inline BatchGetRecordError& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}


    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline BatchGetRecordError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline BatchGetRecordError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code of an error that has occured when attempting to retrieve a
     * batch of Records. For more information on errors, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_GetRecord.html#API_feature_store_GetRecord_Errors">Errors</a>.</p>
     */
    inline BatchGetRecordError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline BatchGetRecordError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline BatchGetRecordError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message of an error that has occured when attempting to retrieve a
     * record in the batch.</p>
     */
    inline BatchGetRecordError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
