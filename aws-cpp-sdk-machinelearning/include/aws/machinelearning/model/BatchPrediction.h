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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/machinelearning/model/EntityStatus.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Represents the output of a <code>GetBatchPrediction</code> operation.</p>
   * <p> The content consists of the detailed metadata, the status, and the data file
   * information of a <code>Batch Prediction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/BatchPrediction">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API BatchPrediction
  {
  public:
    BatchPrediction();
    BatchPrediction(Aws::Utils::Json::JsonView jsonValue);
    BatchPrediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline BatchPrediction& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline BatchPrediction& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline BatchPrediction& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline BatchPrediction& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline BatchPrediction& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline BatchPrediction& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const{ return m_batchPredictionDataSourceId; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline bool BatchPredictionDataSourceIdHasBeenSet() const { return m_batchPredictionDataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(const Aws::String& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = value; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(Aws::String&& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = std::move(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(const char* value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId.assign(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline BatchPrediction& WithBatchPredictionDataSourceId(const Aws::String& value) { SetBatchPredictionDataSourceId(value); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline BatchPrediction& WithBatchPredictionDataSourceId(Aws::String&& value) { SetBatchPredictionDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline BatchPrediction& WithBatchPredictionDataSourceId(const char* value) { SetBatchPredictionDataSourceId(value); return *this;}


    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline bool InputDataLocationS3HasBeenSet() const { return m_inputDataLocationS3HasBeenSet; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = value; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::move(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3.assign(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline BatchPrediction& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline BatchPrediction& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline BatchPrediction& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}


    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = value; }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline BatchPrediction& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline BatchPrediction& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline BatchPrediction& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline BatchPrediction& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline BatchPrediction& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline BatchPrediction& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline BatchPrediction& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline BatchPrediction& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline BatchPrediction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline BatchPrediction& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline BatchPrediction& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</li> <li> <code>INPROGRESS</code> - The process is underway.</li>
     * <li> <code>FAILED</code> - The request to perform a batch prediction did not run
     * to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline BatchPrediction& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline BatchPrediction& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline BatchPrediction& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline BatchPrediction& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}


    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline BatchPrediction& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline BatchPrediction& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline BatchPrediction& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline long long GetComputeTime() const{ return m_computeTime; }

    
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }

    
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }

    
    inline BatchPrediction& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }

    
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAtHasBeenSet = true; m_finishedAt = value; }

    
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::move(value); }

    
    inline BatchPrediction& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    
    inline BatchPrediction& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    
    inline BatchPrediction& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    
    inline BatchPrediction& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    
    inline long long GetTotalRecordCount() const{ return m_totalRecordCount; }

    
    inline bool TotalRecordCountHasBeenSet() const { return m_totalRecordCountHasBeenSet; }

    
    inline void SetTotalRecordCount(long long value) { m_totalRecordCountHasBeenSet = true; m_totalRecordCount = value; }

    
    inline BatchPrediction& WithTotalRecordCount(long long value) { SetTotalRecordCount(value); return *this;}


    
    inline long long GetInvalidRecordCount() const{ return m_invalidRecordCount; }

    
    inline bool InvalidRecordCountHasBeenSet() const { return m_invalidRecordCountHasBeenSet; }

    
    inline void SetInvalidRecordCount(long long value) { m_invalidRecordCountHasBeenSet = true; m_invalidRecordCount = value; }

    
    inline BatchPrediction& WithInvalidRecordCount(long long value) { SetInvalidRecordCount(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_batchPredictionDataSourceId;
    bool m_batchPredictionDataSourceIdHasBeenSet;

    Aws::String m_inputDataLocationS3;
    bool m_inputDataLocationS3HasBeenSet;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    EntityStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    long long m_computeTime;
    bool m_computeTimeHasBeenSet;

    Aws::Utils::DateTime m_finishedAt;
    bool m_finishedAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    long long m_totalRecordCount;
    bool m_totalRecordCountHasBeenSet;

    long long m_invalidRecordCount;
    bool m_invalidRecordCountHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
