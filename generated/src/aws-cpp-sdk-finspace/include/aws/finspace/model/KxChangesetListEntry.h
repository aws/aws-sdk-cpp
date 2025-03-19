/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/ChangesetStatus.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>Details of changeset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxChangesetListEntry">AWS
   * API Reference</a></p>
   */
  class KxChangesetListEntry
  {
  public:
    AWS_FINSPACE_API KxChangesetListEntry() = default;
    AWS_FINSPACE_API KxChangesetListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxChangesetListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    KxChangesetListEntry& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    KxChangesetListEntry& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveFromTimestamp() const { return m_activeFromTimestamp; }
    inline bool ActiveFromTimestampHasBeenSet() const { return m_activeFromTimestampHasBeenSet; }
    template<typename ActiveFromTimestampT = Aws::Utils::DateTime>
    void SetActiveFromTimestamp(ActiveFromTimestampT&& value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = std::forward<ActiveFromTimestampT>(value); }
    template<typename ActiveFromTimestampT = Aws::Utils::DateTime>
    KxChangesetListEntry& WithActiveFromTimestamp(ActiveFromTimestampT&& value) { SetActiveFromTimestamp(std::forward<ActiveFromTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    KxChangesetListEntry& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline ChangesetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChangesetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KxChangesetListEntry& WithStatus(ChangesetStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_activeFromTimestamp{};
    bool m_activeFromTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    ChangesetStatus m_status{ChangesetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
