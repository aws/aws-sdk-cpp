/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDataSourceResult
  {
  public:
    AWS_MACHINELEARNING_API GetDataSourceResult() = default;
    AWS_MACHINELEARNING_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation. This value should
     * be identical to the value of the <code>DataSourceId</code> in the request.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    GetDataSourceResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetDataLocationS3() const { return m_dataLocationS3; }
    template<typename DataLocationS3T = Aws::String>
    void SetDataLocationS3(DataLocationS3T&& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = std::forward<DataLocationS3T>(value); }
    template<typename DataLocationS3T = Aws::String>
    GetDataSourceResult& WithDataLocationS3(DataLocationS3T&& value) { SetDataLocationS3(std::forward<DataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline const Aws::String& GetDataRearrangement() const { return m_dataRearrangement; }
    template<typename DataRearrangementT = Aws::String>
    void SetDataRearrangement(DataRearrangementT&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::forward<DataRearrangementT>(value); }
    template<typename DataRearrangementT = Aws::String>
    GetDataSourceResult& WithDataRearrangement(DataRearrangementT&& value) { SetDataRearrangement(std::forward<DataRearrangementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    GetDataSourceResult& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>DataSource</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of observations in the data files.</p>
     */
    inline long long GetDataSizeInBytes() const { return m_dataSizeInBytes; }
    inline void SetDataSizeInBytes(long long value) { m_dataSizeInBytesHasBeenSet = true; m_dataSizeInBytes = value; }
    inline GetDataSourceResult& WithDataSizeInBytes(long long value) { SetDataSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline long long GetNumberOfFiles() const { return m_numberOfFiles; }
    inline void SetNumberOfFiles(long long value) { m_numberOfFilesHasBeenSet = true; m_numberOfFiles = value; }
    inline GetDataSourceResult& WithNumberOfFiles(long long value) { SetNumberOfFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDataSourceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon ML
     * submitted a request to create a <code>DataSource</code>.</p> </li> <li> <p>
     * <code>INPROGRESS</code> - The creation process is underway.</p> </li> <li> <p>
     * <code>FAILED</code> - The request to create a <code>DataSource</code> did not
     * run to completion. It is not usable.</p> </li> <li> <p> <code>COMPLETED</code> -
     * The creation process completed successfully.</p> </li> <li> <p>
     * <code>DELETED</code> - The <code>DataSource</code> is marked as deleted. It is
     * not usable.</p> </li> </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataSourceResult& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file containing logs of <code>CreateDataSourceFrom*</code>
     * operations.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    GetDataSourceResult& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetDataSourceResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftMetadata& GetRedshiftMetadata() const { return m_redshiftMetadata; }
    template<typename RedshiftMetadataT = RedshiftMetadata>
    void SetRedshiftMetadata(RedshiftMetadataT&& value) { m_redshiftMetadataHasBeenSet = true; m_redshiftMetadata = std::forward<RedshiftMetadataT>(value); }
    template<typename RedshiftMetadataT = RedshiftMetadata>
    GetDataSourceResult& WithRedshiftMetadata(RedshiftMetadataT&& value) { SetRedshiftMetadata(std::forward<RedshiftMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RDSMetadata& GetRDSMetadata() const { return m_rDSMetadata; }
    template<typename RDSMetadataT = RDSMetadata>
    void SetRDSMetadata(RDSMetadataT&& value) { m_rDSMetadataHasBeenSet = true; m_rDSMetadata = std::forward<RDSMetadataT>(value); }
    template<typename RDSMetadataT = RDSMetadata>
    GetDataSourceResult& WithRDSMetadata(RDSMetadataT&& value) { SetRDSMetadata(std::forward<RDSMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    GetDataSourceResult& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline bool GetComputeStatistics() const { return m_computeStatistics; }
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }
    inline GetDataSourceResult& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>DataSource</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>DataSource</code> is in the <code>COMPLETED</code> state and the
     * <code>ComputeStatistics</code> is set to true.</p>
     */
    inline long long GetComputeTime() const { return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline GetDataSourceResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>DataSource</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>DataSource</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>DataSource</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema used by all of the data files of this <code>DataSource</code>.</p>
     * <p> <b>Note:</b> This parameter is provided as part of the verbose format.</p>
     */
    inline const Aws::String& GetDataSourceSchema() const { return m_dataSourceSchema; }
    template<typename DataSourceSchemaT = Aws::String>
    void SetDataSourceSchema(DataSourceSchemaT&& value) { m_dataSourceSchemaHasBeenSet = true; m_dataSourceSchema = std::forward<DataSourceSchemaT>(value); }
    template<typename DataSourceSchemaT = Aws::String>
    GetDataSourceResult& WithDataSourceSchema(DataSourceSchemaT&& value) { SetDataSourceSchema(std::forward<DataSourceSchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataLocationS3;
    bool m_dataLocationS3HasBeenSet = false;

    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet = false;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_dataSizeInBytes{0};
    bool m_dataSizeInBytesHasBeenSet = false;

    long long m_numberOfFiles{0};
    bool m_numberOfFilesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EntityStatus m_status{EntityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    RedshiftMetadata m_redshiftMetadata;
    bool m_redshiftMetadataHasBeenSet = false;

    RDSMetadata m_rDSMetadata;
    bool m_rDSMetadataHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_computeStatistics{false};
    bool m_computeStatisticsHasBeenSet = false;

    long long m_computeTime{0};
    bool m_computeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_dataSourceSchema;
    bool m_dataSourceSchemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
