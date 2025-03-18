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
  class DataSource
  {
  public:
    AWS_MACHINELEARNING_API DataSource() = default;
    AWS_MACHINELEARNING_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that is assigned to the <code>DataSource</code> during creation.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DataSource& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location and name of the data in Amazon Simple Storage Service (Amazon
     * S3) that is used by a <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataLocationS3() const { return m_dataLocationS3; }
    inline bool DataLocationS3HasBeenSet() const { return m_dataLocationS3HasBeenSet; }
    template<typename DataLocationS3T = Aws::String>
    void SetDataLocationS3(DataLocationS3T&& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = std::forward<DataLocationS3T>(value); }
    template<typename DataLocationS3T = Aws::String>
    DataSource& WithDataLocationS3(DataLocationS3T&& value) { SetDataLocationS3(std::forward<DataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that represents the splitting and rearrangement requirement
     * used when this <code>DataSource</code> was created.</p>
     */
    inline const Aws::String& GetDataRearrangement() const { return m_dataRearrangement; }
    inline bool DataRearrangementHasBeenSet() const { return m_dataRearrangementHasBeenSet; }
    template<typename DataRearrangementT = Aws::String>
    void SetDataRearrangement(DataRearrangementT&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::forward<DataRearrangementT>(value); }
    template<typename DataRearrangementT = Aws::String>
    DataSource& WithDataRearrangement(DataRearrangementT&& value) { SetDataRearrangement(std::forward<DataRearrangementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account from which the <code>DataSource</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    DataSource& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>DataSource</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataSource& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DataSource& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of observations contained in the data files that the
     * <code>DataSource</code> references.</p>
     */
    inline long long GetDataSizeInBytes() const { return m_dataSizeInBytes; }
    inline bool DataSizeInBytesHasBeenSet() const { return m_dataSizeInBytesHasBeenSet; }
    inline void SetDataSizeInBytes(long long value) { m_dataSizeInBytesHasBeenSet = true; m_dataSizeInBytes = value; }
    inline DataSource& WithDataSizeInBytes(long long value) { SetDataSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data files referenced by the <code>DataSource</code>.</p>
     */
    inline long long GetNumberOfFiles() const { return m_numberOfFiles; }
    inline bool NumberOfFilesHasBeenSet() const { return m_numberOfFilesHasBeenSet; }
    inline void SetNumberOfFiles(long long value) { m_numberOfFilesHasBeenSet = true; m_numberOfFiles = value; }
    inline DataSource& WithNumberOfFiles(long long value) { SetNumberOfFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>DataSource</code>. This element can have one
     * of the following values: </p> <ul> <li> <p>PENDING - Amazon Machine Learning
     * (Amazon ML) submitted a request to create a <code>DataSource</code>.</p> </li>
     * <li> <p>INPROGRESS - The creation process is underway.</p> </li> <li> <p>FAILED
     * - The request to create a <code>DataSource</code> did not run to completion. It
     * is not usable.</p> </li> <li> <p>COMPLETED - The creation process completed
     * successfully.</p> </li> <li> <p>DELETED - The <code>DataSource</code> is marked
     * as deleted. It is not usable.</p> </li> </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSource& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about creating the
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DataSource& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftMetadata& GetRedshiftMetadata() const { return m_redshiftMetadata; }
    inline bool RedshiftMetadataHasBeenSet() const { return m_redshiftMetadataHasBeenSet; }
    template<typename RedshiftMetadataT = RedshiftMetadata>
    void SetRedshiftMetadata(RedshiftMetadataT&& value) { m_redshiftMetadataHasBeenSet = true; m_redshiftMetadata = std::forward<RedshiftMetadataT>(value); }
    template<typename RedshiftMetadataT = RedshiftMetadata>
    DataSource& WithRedshiftMetadata(RedshiftMetadataT&& value) { SetRedshiftMetadata(std::forward<RedshiftMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RDSMetadata& GetRDSMetadata() const { return m_rDSMetadata; }
    inline bool RDSMetadataHasBeenSet() const { return m_rDSMetadataHasBeenSet; }
    template<typename RDSMetadataT = RDSMetadata>
    void SetRDSMetadata(RDSMetadataT&& value) { m_rDSMetadataHasBeenSet = true; m_rDSMetadata = std::forward<RDSMetadataT>(value); }
    template<typename RDSMetadataT = RDSMetadata>
    DataSource& WithRDSMetadata(RDSMetadataT&& value) { SetRDSMetadata(std::forward<RDSMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    DataSource& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameter is <code>true</code> if statistics need to be generated from
     * the observation data. </p>
     */
    inline bool GetComputeStatistics() const { return m_computeStatistics; }
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }
    inline DataSource& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetComputeTime() const { return m_computeTime; }
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline DataSource& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    DataSource& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    DataSource& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
