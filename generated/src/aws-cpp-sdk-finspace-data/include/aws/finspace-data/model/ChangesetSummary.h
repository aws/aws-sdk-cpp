/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace-data/model/IngestionStatus.h>
#include <aws/finspace-data/model/ChangesetErrorInfo.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>A Changeset is unit of data in a Dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ChangesetSummary">AWS
   * API Reference</a></p>
   */
  class ChangesetSummary
  {
  public:
    AWS_FINSPACEDATA_API ChangesetSummary() = default;
    AWS_FINSPACEDATA_API ChangesetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ChangesetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    ChangesetSummary& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline const Aws::String& GetChangesetArn() const { return m_changesetArn; }
    inline bool ChangesetArnHasBeenSet() const { return m_changesetArnHasBeenSet; }
    template<typename ChangesetArnT = Aws::String>
    void SetChangesetArn(ChangesetArnT&& value) { m_changesetArnHasBeenSet = true; m_changesetArn = std::forward<ChangesetArnT>(value); }
    template<typename ChangesetArnT = Aws::String>
    ChangesetSummary& WithChangesetArn(ChangesetArnT&& value) { SetChangesetArn(std::forward<ChangesetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const { return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    template<typename DatasetIdT = Aws::String>
    void SetDatasetId(DatasetIdT&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::forward<DatasetIdT>(value); }
    template<typename DatasetIdT = Aws::String>
    ChangesetSummary& WithDatasetId(DatasetIdT&& value) { SetDatasetId(std::forward<DatasetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline ChangeType GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    inline void SetChangeType(ChangeType value) { m_changeTypeHasBeenSet = true; m_changeType = value; }
    inline ChangesetSummary& WithChangeType(ChangeType value) { SetChangeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const { return m_sourceParams; }
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }
    template<typename SourceParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetSourceParams(SourceParamsT&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::forward<SourceParamsT>(value); }
    template<typename SourceParamsT = Aws::Map<Aws::String, Aws::String>>
    ChangesetSummary& WithSourceParams(SourceParamsT&& value) { SetSourceParams(std::forward<SourceParamsT>(value)); return *this;}
    template<typename SourceParamsKeyT = Aws::String, typename SourceParamsValueT = Aws::String>
    ChangesetSummary& AddSourceParams(SourceParamsKeyT&& key, SourceParamsValueT&& value) {
      m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::forward<SourceParamsKeyT>(key), std::forward<SourceParamsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const { return m_formatParams; }
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }
    template<typename FormatParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetFormatParams(FormatParamsT&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::forward<FormatParamsT>(value); }
    template<typename FormatParamsT = Aws::Map<Aws::String, Aws::String>>
    ChangesetSummary& WithFormatParams(FormatParamsT&& value) { SetFormatParams(std::forward<FormatParamsT>(value)); return *this;}
    template<typename FormatParamsKeyT = Aws::String, typename FormatParamsValueT = Aws::String>
    ChangesetSummary& AddFormatParams(FormatParamsKeyT&& key, FormatParamsValueT&& value) {
      m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::forward<FormatParamsKeyT>(key), std::forward<FormatParamsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline ChangesetSummary& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline IngestionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IngestionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChangesetSummary& WithStatus(IngestionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure with error messages.</p>
     */
    inline const ChangesetErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ChangesetErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ChangesetErrorInfo>
    ChangesetSummary& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveUntilTimestamp() const { return m_activeUntilTimestamp; }
    inline bool ActiveUntilTimestampHasBeenSet() const { return m_activeUntilTimestampHasBeenSet; }
    inline void SetActiveUntilTimestamp(long long value) { m_activeUntilTimestampHasBeenSet = true; m_activeUntilTimestamp = value; }
    inline ChangesetSummary& WithActiveUntilTimestamp(long long value) { SetActiveUntilTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveFromTimestamp() const { return m_activeFromTimestamp; }
    inline bool ActiveFromTimestampHasBeenSet() const { return m_activeFromTimestampHasBeenSet; }
    inline void SetActiveFromTimestamp(long long value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = value; }
    inline ChangesetSummary& WithActiveFromTimestamp(long long value) { SetActiveFromTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline const Aws::String& GetUpdatesChangesetId() const { return m_updatesChangesetId; }
    inline bool UpdatesChangesetIdHasBeenSet() const { return m_updatesChangesetIdHasBeenSet; }
    template<typename UpdatesChangesetIdT = Aws::String>
    void SetUpdatesChangesetId(UpdatesChangesetIdT&& value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId = std::forward<UpdatesChangesetIdT>(value); }
    template<typename UpdatesChangesetIdT = Aws::String>
    ChangesetSummary& WithUpdatesChangesetId(UpdatesChangesetIdT&& value) { SetUpdatesChangesetId(std::forward<UpdatesChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline const Aws::String& GetUpdatedByChangesetId() const { return m_updatedByChangesetId; }
    inline bool UpdatedByChangesetIdHasBeenSet() const { return m_updatedByChangesetIdHasBeenSet; }
    template<typename UpdatedByChangesetIdT = Aws::String>
    void SetUpdatedByChangesetId(UpdatedByChangesetIdT&& value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId = std::forward<UpdatedByChangesetIdT>(value); }
    template<typename UpdatedByChangesetIdT = Aws::String>
    ChangesetSummary& WithUpdatedByChangesetId(UpdatedByChangesetIdT&& value) { SetUpdatedByChangesetId(std::forward<UpdatedByChangesetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::String m_changesetArn;
    bool m_changesetArnHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    ChangeType m_changeType{ChangeType::NOT_SET};
    bool m_changeTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet = false;

    long long m_createTime{0};
    bool m_createTimeHasBeenSet = false;

    IngestionStatus m_status{IngestionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ChangesetErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    long long m_activeUntilTimestamp{0};
    bool m_activeUntilTimestampHasBeenSet = false;

    long long m_activeFromTimestamp{0};
    bool m_activeFromTimestampHasBeenSet = false;

    Aws::String m_updatesChangesetId;
    bool m_updatesChangesetIdHasBeenSet = false;

    Aws::String m_updatedByChangesetId;
    bool m_updatedByChangesetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
