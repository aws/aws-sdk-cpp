/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/firehose/model/SnapshotRequestedBy.h>
#include <aws/firehose/model/SnapshotStatus.h>
#include <aws/firehose/model/FailureDescription.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p> The structure that describes the snapshot information of a table in source
   * database endpoint that Firehose reads. </p> <p>Amazon Data Firehose is in
   * preview release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSnapshotInfo">AWS
   * API Reference</a></p>
   */
  class DatabaseSnapshotInfo
  {
  public:
    AWS_FIREHOSE_API DatabaseSnapshotInfo() = default;
    AWS_FIREHOSE_API DatabaseSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the current snapshot of the table in source database
     * endpoint. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DatabaseSnapshotInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The fully qualified name of the table in source database endpoint that
     * Firehose reads. </p> <p>Amazon Data Firehose is in preview release and is
     * subject to change.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    DatabaseSnapshotInfo& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the current snapshot is taken on the table. </p>
     * <p>Amazon Data Firehose is in preview release and is subject to change.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTimestamp() const { return m_requestTimestamp; }
    inline bool RequestTimestampHasBeenSet() const { return m_requestTimestampHasBeenSet; }
    template<typename RequestTimestampT = Aws::Utils::DateTime>
    void SetRequestTimestamp(RequestTimestampT&& value) { m_requestTimestampHasBeenSet = true; m_requestTimestamp = std::forward<RequestTimestampT>(value); }
    template<typename RequestTimestampT = Aws::Utils::DateTime>
    DatabaseSnapshotInfo& WithRequestTimestamp(RequestTimestampT&& value) { SetRequestTimestamp(std::forward<RequestTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The principal that sent the request to take the current snapshot on the
     * table. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline SnapshotRequestedBy GetRequestedBy() const { return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    inline void SetRequestedBy(SnapshotRequestedBy value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }
    inline DatabaseSnapshotInfo& WithRequestedBy(SnapshotRequestedBy value) { SetRequestedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the current snapshot of the table. </p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline SnapshotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatabaseSnapshotInfo& WithStatus(SnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const FailureDescription& GetFailureDescription() const { return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    template<typename FailureDescriptionT = FailureDescription>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = FailureDescription>
    DatabaseSnapshotInfo& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::Utils::DateTime m_requestTimestamp{};
    bool m_requestTimestampHasBeenSet = false;

    SnapshotRequestedBy m_requestedBy{SnapshotRequestedBy::NOT_SET};
    bool m_requestedByHasBeenSet = false;

    SnapshotStatus m_status{SnapshotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
