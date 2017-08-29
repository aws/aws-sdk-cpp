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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetDataSource</code> operation and describes
   * a <code>DataSource</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetDataSourceOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API GetDataSourceResult
  {
  public:
    GetDataSourceResult();
    GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline GetDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline GetDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline GetDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetDataLocationS3() const{ return m_dataLocationS3; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetDataLocationS3(const Aws::String& value) { m_dataLocationS3 = value; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetDataLocationS3(Aws::String&& value) { m_dataLocationS3 = std::move(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetDataLocationS3(const char* value) { m_dataLocationS3.assign(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetDataSourceResult& WithDataLocationS3(const Aws::String& value) { SetDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetDataSourceResult& WithDataLocationS3(Aws::String&& value) { SetDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetDataSourceResult& WithDataLocationS3(const char* value) { SetDataLocationS3(value); return *this;}


    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline const Aws::String& GetDataRearrangement() const{ return m_dataRearrangement; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(const Aws::String& value) { m_dataRearrangement = value; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(Aws::String&& value) { m_dataRearrangement = std::move(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline void SetDataRearrangement(const char* value) { m_dataRearrangement.assign(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline GetDataSourceResult& WithDataRearrangement(const Aws::String& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline GetDataSourceResult& WithDataRearrangement(Aws::String&& value) { SetDataRearrangement(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline GetDataSourceResult& WithDataRearrangement(const char* value) { SetDataRearrangement(value); return *this;}


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
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUser = value; }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetDataSourceResult& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetDataSourceResult& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetDataSourceResult& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline GetDataSourceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline GetDataSourceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetDataSourceResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetDataSourceResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The total size of observations in the data files.</p>
     */
    inline long long GetDataSizeInBytes() const{ return m_dataSizeInBytes; }

    /**
     * <p>The total size of observations in the data files.</p>
     */
    inline void SetDataSizeInBytes(long long value) { m_dataSizeInBytes = value; }

    /**
     * <p>The total size of observations in the data files.</p>
     */
    inline GetDataSourceResult& WithDataSizeInBytes(long long value) { SetDataSizeInBytes(value); return *this;}


    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline long long GetNumberOfFiles() const{ return m_numberOfFiles; }

    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline void SetNumberOfFiles(long long value) { m_numberOfFiles = value; }

    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithNumberOfFiles(long long value) { SetNumberOfFiles(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</li> <li>
     * <code>INPROGRESS</code> - The creation process is underway.</li> <li>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * creation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</li> <li>
     * <code>INPROGRESS</code> - The creation process is underway.</li> <li>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * creation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_status = value; }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</li> <li>
     * <code>INPROGRESS</code> - The creation process is underway.</li> <li>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * creation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</li> <li>
     * <code>INPROGRESS</code> - The creation process is underway.</li> <li>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * creation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetDataSourceResult& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</li> <li>
     * <code>INPROGRESS</code> - The creation process is underway.</li> <li>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * creation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>DataSource</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetDataSourceResult& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUri = value; }

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUri = std::move(value); }

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline void SetLogUri(const char* value) { m_logUri.assign(value); }

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline GetDataSourceResult& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline GetDataSourceResult& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline GetDataSourceResult& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline GetDataSourceResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const RedshiftMetadata& GetRedshiftMetadata() const{ return m_redshiftMetadata; }

    
    inline void SetRedshiftMetadata(const RedshiftMetadata& value) { m_redshiftMetadata = value; }

    
    inline void SetRedshiftMetadata(RedshiftMetadata&& value) { m_redshiftMetadata = std::move(value); }

    
    inline GetDataSourceResult& WithRedshiftMetadata(const RedshiftMetadata& value) { SetRedshiftMetadata(value); return *this;}

    
    inline GetDataSourceResult& WithRedshiftMetadata(RedshiftMetadata&& value) { SetRedshiftMetadata(std::move(value)); return *this;}


    
    inline const RDSMetadata& GetRDSMetadata() const{ return m_rDSMetadata; }

    
    inline void SetRDSMetadata(const RDSMetadata& value) { m_rDSMetadata = value; }

    
    inline void SetRDSMetadata(RDSMetadata&& value) { m_rDSMetadata = std::move(value); }

    
    inline GetDataSourceResult& WithRDSMetadata(const RDSMetadata& value) { SetRDSMetadata(value); return *this;}

    
    inline GetDataSourceResult& WithRDSMetadata(RDSMetadata&& value) { SetRDSMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    
    inline void SetRoleARN(const Aws::String& value) { m_roleARN = value; }

    
    inline void SetRoleARN(Aws::String&& value) { m_roleARN = std::move(value); }

    
    inline void SetRoleARN(const char* value) { m_roleARN.assign(value); }

    
    inline GetDataSourceResult& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    
    inline GetDataSourceResult& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    
    inline GetDataSourceResult& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }

    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline void SetComputeStatistics(bool value) { m_computeStatistics = value; }

    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline GetDataSourceResult& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}


    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>DataSource</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>DataSource</code> is in the <code>COMPLETED</code> state and the
     * <code>ComputeStatistics</code> is set to true.</p>
     */
    inline long long GetComputeTime() const{ return m_computeTime; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>DataSource</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>DataSource</code> is in the <code>COMPLETED</code> state and the
     * <code>ComputeStatistics</code> is set to true.</p>
     */
    inline void SetComputeTime(long long value) { m_computeTime = value; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>DataSource</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>DataSource</code> is in the <code>COMPLETED</code> state and the
     * <code>ComputeStatistics</code> is set to true.</p>
     */
    inline GetDataSourceResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetDataSourceResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetDataSourceResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline GetDataSourceResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline GetDataSourceResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline const Aws::String& GetDataSourceSchema() const{ return m_dataSourceSchema; }

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline void SetDataSourceSchema(const Aws::String& value) { m_dataSourceSchema = value; }

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline void SetDataSourceSchema(Aws::String&& value) { m_dataSourceSchema = std::move(value); }

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline void SetDataSourceSchema(const char* value) { m_dataSourceSchema.assign(value); }

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline GetDataSourceResult& WithDataSourceSchema(const Aws::String& value) { SetDataSourceSchema(value); return *this;}

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline GetDataSourceResult& WithDataSourceSchema(Aws::String&& value) { SetDataSourceSchema(std::move(value)); return *this;}

    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <note><title>Note</title> <p>This parameter is provided as part of the verbose
     * format.</p></note>
     */
    inline GetDataSourceResult& WithDataSourceSchema(const char* value) { SetDataSourceSchema(value); return *this;}

  private:

    Aws::String m_dataSourceId;

    Aws::String m_dataLocationS3;

    Aws::String m_dataRearrangement;

    Aws::String m_createdByIamUser;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    long long m_dataSizeInBytes;

    long long m_numberOfFiles;

    Aws::String m_name;

    EntityStatus m_status;

    Aws::String m_logUri;

    Aws::String m_message;

    RedshiftMetadata m_redshiftMetadata;

    RDSMetadata m_rDSMetadata;

    Aws::String m_roleARN;

    bool m_computeStatistics;

    long long m_computeTime;

    Aws::Utils::DateTime m_finishedAt;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_dataSourceSchema;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
