/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveState.h>
#include <aws/core/utils/DateTime.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>An archive resource for storing and retaining emails.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Archive">AWS
   * API Reference</a></p>
   */
  class Archive
  {
  public:
    AWS_MAILMANAGER_API Archive() = default;
    AWS_MAILMANAGER_API Archive(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Archive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the archive.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    Archive& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name assigned to the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const { return m_archiveName; }
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }
    template<typename ArchiveNameT = Aws::String>
    void SetArchiveName(ArchiveNameT&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::forward<ArchiveNameT>(value); }
    template<typename ArchiveNameT = Aws::String>
    Archive& WithArchiveName(ArchiveNameT&& value) { SetArchiveName(std::forward<ArchiveNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the archive:</p> <ul> <li> <p> <code>ACTIVE</code> – The
     * archive is ready and available for use. </p> </li> <li> <p>
     * <code>PENDING_DELETION</code> – The archive has been marked for deletion and
     * will be permanently deleted in 30 days. No further modifications can be made in
     * this state. </p> </li> </ul>
     */
    inline ArchiveState GetArchiveState() const { return m_archiveState; }
    inline bool ArchiveStateHasBeenSet() const { return m_archiveStateHasBeenSet; }
    inline void SetArchiveState(ArchiveState value) { m_archiveStateHasBeenSet = true; m_archiveState = value; }
    inline Archive& WithArchiveState(ArchiveState value) { SetArchiveState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the archive was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    Archive& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    ArchiveState m_archiveState{ArchiveState::NOT_SET};
    bool m_archiveStateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
