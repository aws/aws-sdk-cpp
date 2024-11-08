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
   * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSnapshotInfo">AWS
   * API Reference</a></p>
   */
  class DatabaseSnapshotInfo
  {
  public:
    AWS_FIREHOSE_API DatabaseSnapshotInfo();
    AWS_FIREHOSE_API DatabaseSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DatabaseSnapshotInfo& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DatabaseSnapshotInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DatabaseSnapshotInfo& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline DatabaseSnapshotInfo& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline DatabaseSnapshotInfo& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline DatabaseSnapshotInfo& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTimestamp() const{ return m_requestTimestamp; }
    inline bool RequestTimestampHasBeenSet() const { return m_requestTimestampHasBeenSet; }
    inline void SetRequestTimestamp(const Aws::Utils::DateTime& value) { m_requestTimestampHasBeenSet = true; m_requestTimestamp = value; }
    inline void SetRequestTimestamp(Aws::Utils::DateTime&& value) { m_requestTimestampHasBeenSet = true; m_requestTimestamp = std::move(value); }
    inline DatabaseSnapshotInfo& WithRequestTimestamp(const Aws::Utils::DateTime& value) { SetRequestTimestamp(value); return *this;}
    inline DatabaseSnapshotInfo& WithRequestTimestamp(Aws::Utils::DateTime&& value) { SetRequestTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const SnapshotRequestedBy& GetRequestedBy() const{ return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    inline void SetRequestedBy(const SnapshotRequestedBy& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }
    inline void SetRequestedBy(SnapshotRequestedBy&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }
    inline DatabaseSnapshotInfo& WithRequestedBy(const SnapshotRequestedBy& value) { SetRequestedBy(value); return *this;}
    inline DatabaseSnapshotInfo& WithRequestedBy(SnapshotRequestedBy&& value) { SetRequestedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatabaseSnapshotInfo& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}
    inline DatabaseSnapshotInfo& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FailureDescription& GetFailureDescription() const{ return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    inline void SetFailureDescription(const FailureDescription& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = value; }
    inline void SetFailureDescription(FailureDescription&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::move(value); }
    inline DatabaseSnapshotInfo& WithFailureDescription(const FailureDescription& value) { SetFailureDescription(value); return *this;}
    inline DatabaseSnapshotInfo& WithFailureDescription(FailureDescription&& value) { SetFailureDescription(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::Utils::DateTime m_requestTimestamp;
    bool m_requestTimestampHasBeenSet = false;

    SnapshotRequestedBy m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
