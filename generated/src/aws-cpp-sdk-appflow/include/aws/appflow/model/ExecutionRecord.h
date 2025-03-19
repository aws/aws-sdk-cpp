/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ExecutionStatus.h>
#include <aws/appflow/model/ExecutionResult.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/MetadataCatalogDetail.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies information about the past flow run instances for a given flow.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ExecutionRecord">AWS
   * API Reference</a></p>
   */
  class ExecutionRecord
  {
  public:
    AWS_APPFLOW_API ExecutionRecord() = default;
    AWS_APPFLOW_API ExecutionRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    ExecutionRecord& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(ExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline ExecutionRecord& WithExecutionStatus(ExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline const ExecutionResult& GetExecutionResult() const { return m_executionResult; }
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }
    template<typename ExecutionResultT = ExecutionResult>
    void SetExecutionResult(ExecutionResultT&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::forward<ExecutionResultT>(value); }
    template<typename ExecutionResultT = ExecutionResult>
    ExecutionRecord& WithExecutionResult(ExecutionResultT&& value) { SetExecutionResult(std::forward<ExecutionResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    ExecutionRecord& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ExecutionRecord& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetDataPullStartTime() const { return m_dataPullStartTime; }
    inline bool DataPullStartTimeHasBeenSet() const { return m_dataPullStartTimeHasBeenSet; }
    template<typename DataPullStartTimeT = Aws::Utils::DateTime>
    void SetDataPullStartTime(DataPullStartTimeT&& value) { m_dataPullStartTimeHasBeenSet = true; m_dataPullStartTime = std::forward<DataPullStartTimeT>(value); }
    template<typename DataPullStartTimeT = Aws::Utils::DateTime>
    ExecutionRecord& WithDataPullStartTime(DataPullStartTimeT&& value) { SetDataPullStartTime(std::forward<DataPullStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetDataPullEndTime() const { return m_dataPullEndTime; }
    inline bool DataPullEndTimeHasBeenSet() const { return m_dataPullEndTimeHasBeenSet; }
    template<typename DataPullEndTimeT = Aws::Utils::DateTime>
    void SetDataPullEndTime(DataPullEndTimeT&& value) { m_dataPullEndTimeHasBeenSet = true; m_dataPullEndTime = std::forward<DataPullEndTimeT>(value); }
    template<typename DataPullEndTimeT = Aws::Utils::DateTime>
    ExecutionRecord& WithDataPullEndTime(DataPullEndTimeT&& value) { SetDataPullEndTime(std::forward<DataPullEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline const Aws::Vector<MetadataCatalogDetail>& GetMetadataCatalogDetails() const { return m_metadataCatalogDetails; }
    inline bool MetadataCatalogDetailsHasBeenSet() const { return m_metadataCatalogDetailsHasBeenSet; }
    template<typename MetadataCatalogDetailsT = Aws::Vector<MetadataCatalogDetail>>
    void SetMetadataCatalogDetails(MetadataCatalogDetailsT&& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails = std::forward<MetadataCatalogDetailsT>(value); }
    template<typename MetadataCatalogDetailsT = Aws::Vector<MetadataCatalogDetail>>
    ExecutionRecord& WithMetadataCatalogDetails(MetadataCatalogDetailsT&& value) { SetMetadataCatalogDetails(std::forward<MetadataCatalogDetailsT>(value)); return *this;}
    template<typename MetadataCatalogDetailsT = MetadataCatalogDetail>
    ExecutionRecord& AddMetadataCatalogDetails(MetadataCatalogDetailsT&& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails.emplace_back(std::forward<MetadataCatalogDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    ExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_dataPullStartTime{};
    bool m_dataPullStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataPullEndTime{};
    bool m_dataPullEndTimeHasBeenSet = false;

    Aws::Vector<MetadataCatalogDetail> m_metadataCatalogDetails;
    bool m_metadataCatalogDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
