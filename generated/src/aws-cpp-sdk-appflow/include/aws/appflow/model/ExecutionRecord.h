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
    AWS_APPFLOW_API ExecutionRecord();
    AWS_APPFLOW_API ExecutionRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline ExecutionRecord& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline ExecutionRecord& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline const ExecutionResult& GetExecutionResult() const{ return m_executionResult; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline void SetExecutionResult(const ExecutionResult& value) { m_executionResultHasBeenSet = true; m_executionResult = value; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline void SetExecutionResult(ExecutionResult&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::move(value); }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionResult(const ExecutionResult& value) { SetExecutionResult(value); return *this;}

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionResult(ExecutionResult&& value) { SetExecutionResult(std::move(value)); return *this;}


    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline ExecutionRecord& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline ExecutionRecord& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline ExecutionRecord& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline ExecutionRecord& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetDataPullStartTime() const{ return m_dataPullStartTime; }

    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline bool DataPullStartTimeHasBeenSet() const { return m_dataPullStartTimeHasBeenSet; }

    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline void SetDataPullStartTime(const Aws::Utils::DateTime& value) { m_dataPullStartTimeHasBeenSet = true; m_dataPullStartTime = value; }

    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline void SetDataPullStartTime(Aws::Utils::DateTime&& value) { m_dataPullStartTimeHasBeenSet = true; m_dataPullStartTime = std::move(value); }

    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline ExecutionRecord& WithDataPullStartTime(const Aws::Utils::DateTime& value) { SetDataPullStartTime(value); return *this;}

    /**
     * <p> The timestamp that determines the first new or updated record to be
     * transferred in the flow run. </p>
     */
    inline ExecutionRecord& WithDataPullStartTime(Aws::Utils::DateTime&& value) { SetDataPullStartTime(std::move(value)); return *this;}


    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetDataPullEndTime() const{ return m_dataPullEndTime; }

    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline bool DataPullEndTimeHasBeenSet() const { return m_dataPullEndTimeHasBeenSet; }

    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline void SetDataPullEndTime(const Aws::Utils::DateTime& value) { m_dataPullEndTimeHasBeenSet = true; m_dataPullEndTime = value; }

    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline void SetDataPullEndTime(Aws::Utils::DateTime&& value) { m_dataPullEndTimeHasBeenSet = true; m_dataPullEndTime = std::move(value); }

    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline ExecutionRecord& WithDataPullEndTime(const Aws::Utils::DateTime& value) { SetDataPullEndTime(value); return *this;}

    /**
     * <p> The timestamp that indicates the last new or updated record to be
     * transferred in the flow run. </p>
     */
    inline ExecutionRecord& WithDataPullEndTime(Aws::Utils::DateTime&& value) { SetDataPullEndTime(std::move(value)); return *this;}


    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline const Aws::Vector<MetadataCatalogDetail>& GetMetadataCatalogDetails() const{ return m_metadataCatalogDetails; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline bool MetadataCatalogDetailsHasBeenSet() const { return m_metadataCatalogDetailsHasBeenSet; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline void SetMetadataCatalogDetails(const Aws::Vector<MetadataCatalogDetail>& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails = value; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline void SetMetadataCatalogDetails(Aws::Vector<MetadataCatalogDetail>&& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails = std::move(value); }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline ExecutionRecord& WithMetadataCatalogDetails(const Aws::Vector<MetadataCatalogDetail>& value) { SetMetadataCatalogDetails(value); return *this;}

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline ExecutionRecord& WithMetadataCatalogDetails(Aws::Vector<MetadataCatalogDetail>&& value) { SetMetadataCatalogDetails(std::move(value)); return *this;}

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline ExecutionRecord& AddMetadataCatalogDetails(const MetadataCatalogDetail& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails.push_back(value); return *this; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline ExecutionRecord& AddMetadataCatalogDetails(MetadataCatalogDetail&& value) { m_metadataCatalogDetailsHasBeenSet = true; m_metadataCatalogDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    ExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_dataPullStartTime;
    bool m_dataPullStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataPullEndTime;
    bool m_dataPullEndTimeHasBeenSet = false;

    Aws::Vector<MetadataCatalogDetail> m_metadataCatalogDetails;
    bool m_metadataCatalogDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
