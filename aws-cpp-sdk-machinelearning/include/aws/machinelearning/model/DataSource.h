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
#include <aws/machinelearning/model/RedshiftMetadata.h>
#include <aws/machinelearning/model/RDSMetadata.h>
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
   * <p> Represents the output of the <code>GetDataSource</code> operation. </p> <p>
   * The content consists of the detailed metadata and data file information and the
   * current status of the <code>DataSource</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline DataSource& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline DataSource& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline DataSource& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataLocationS3() const{ return m_dataLocationS3; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline bool DataLocationS3HasBeenSet() const { return m_dataLocationS3HasBeenSet; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline void SetDataLocationS3(const Aws::String& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = value; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline void SetDataLocationS3(Aws::String&& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = std::move(value); }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline void SetDataLocationS3(const char* value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3.assign(value); }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline DataSource& WithDataLocationS3(const Aws::String& value) { SetDataLocationS3(value); return *this;}

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline DataSource& WithDataLocationS3(Aws::String&& value) { SetDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline DataSource& WithDataLocationS3(const char* value) { SetDataLocationS3(value); return *this;}


    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline const Aws::String& GetDataRearrangement() const{ return m_dataRearrangement; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline bool DataRearrangementHasBeenSet() const { return m_dataRearrangementHasBeenSet; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(const Aws::String& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = value; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(Aws::String&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::move(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(const char* value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement.assign(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline DataSource& WithDataRearrangement(const Aws::String& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline DataSource& WithDataRearrangement(Aws::String&& value) { SetDataRearrangement(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline DataSource& WithDataRearrangement(const char* value) { SetDataRearrangement(value); return *this;}


    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = value; }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline DataSource& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline DataSource& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline DataSource& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline DataSource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline DataSource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline DataSource& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline DataSource& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The total number of observations contained in the data files that the
     * <code>DataSource</code> references.</p>
     */
    inline long long GetDataSizeInBytes() const{ return m_dataSizeInBytes; }

    /**
     * <p>The total number of observations contained in the data files that the
     * <code>DataSource</code> references.</p>
     */
    inline bool DataSizeInBytesHasBeenSet() const { return m_dataSizeInBytesHasBeenSet; }

    /**
     * <p>The total number of observations contained in the data files that the
     * <code>DataSource</code> references.</p>
     */
    inline void SetDataSizeInBytes(long long value) { m_dataSizeInBytesHasBeenSet = true; m_dataSizeInBytes = value; }

    /**
     * <p>The total number of observations contained in the data files that the
     * <code>DataSource</code> references.</p>
     */
    inline DataSource& WithDataSizeInBytes(long long value) { SetDataSizeInBytes(value); return *this;}


    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline long long GetNumberOfFiles() const{ return m_numberOfFiles; }

    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline bool NumberOfFilesHasBeenSet() const { return m_numberOfFilesHasBeenSet; }

    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline void SetNumberOfFiles(long long value) { m_numberOfFilesHasBeenSet = true; m_numberOfFiles = value; }

    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline DataSource& WithNumberOfFiles(long long value) { SetNumberOfFiles(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline DataSource& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create a <code>DataSource</code>.</li> <li>INPROGRESS
     * - The creation process is underway.</li> <li>FAILED - The request to create a
     * <code>DataSource</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline DataSource& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline DataSource& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline DataSource& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline DataSource& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const RedshiftMetadata& GetRedshiftMetadata() const{ return m_redshiftMetadata; }

    
    inline bool RedshiftMetadataHasBeenSet() const { return m_redshiftMetadataHasBeenSet; }

    
    inline void SetRedshiftMetadata(const RedshiftMetadata& value) { m_redshiftMetadataHasBeenSet = true; m_redshiftMetadata = value; }

    
    inline void SetRedshiftMetadata(RedshiftMetadata&& value) { m_redshiftMetadataHasBeenSet = true; m_redshiftMetadata = std::move(value); }

    
    inline DataSource& WithRedshiftMetadata(const RedshiftMetadata& value) { SetRedshiftMetadata(value); return *this;}

    
    inline DataSource& WithRedshiftMetadata(RedshiftMetadata&& value) { SetRedshiftMetadata(std::move(value)); return *this;}


    
    inline const RDSMetadata& GetRDSMetadata() const{ return m_rDSMetadata; }

    
    inline bool RDSMetadataHasBeenSet() const { return m_rDSMetadataHasBeenSet; }

    
    inline void SetRDSMetadata(const RDSMetadata& value) { m_rDSMetadataHasBeenSet = true; m_rDSMetadata = value; }

    
    inline void SetRDSMetadata(RDSMetadata&& value) { m_rDSMetadataHasBeenSet = true; m_rDSMetadata = std::move(value); }

    
    inline DataSource& WithRDSMetadata(const RDSMetadata& value) { SetRDSMetadata(value); return *this;}

    
    inline DataSource& WithRDSMetadata(RDSMetadata&& value) { SetRDSMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    
    inline DataSource& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    
    inline DataSource& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    
    inline DataSource& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }

    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }

    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }

    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline DataSource& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}


    
    inline long long GetComputeTime() const{ return m_computeTime; }

    
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }

    
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }

    
    inline DataSource& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }

    
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAtHasBeenSet = true; m_finishedAt = value; }

    
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::move(value); }

    
    inline DataSource& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    
    inline DataSource& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    
    inline DataSource& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    
    inline DataSource& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    Aws::String m_dataLocationS3;
    bool m_dataLocationS3HasBeenSet;

    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    long long m_dataSizeInBytes;
    bool m_dataSizeInBytesHasBeenSet;

    long long m_numberOfFiles;
    bool m_numberOfFilesHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    EntityStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    RedshiftMetadata m_redshiftMetadata;
    bool m_redshiftMetadataHasBeenSet;

    RDSMetadata m_rDSMetadata;
    bool m_rDSMetadataHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    bool m_computeStatistics;
    bool m_computeStatisticsHasBeenSet;

    long long m_computeTime;
    bool m_computeTimeHasBeenSet;

    Aws::Utils::DateTime m_finishedAt;
    bool m_finishedAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
