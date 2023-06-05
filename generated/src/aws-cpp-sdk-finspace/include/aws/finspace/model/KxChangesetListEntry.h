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
    AWS_FINSPACE_API KxChangesetListEntry();
    AWS_FINSPACE_API KxChangesetListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxChangesetListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxChangesetListEntry& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxChangesetListEntry& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxChangesetListEntry& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveFromTimestamp() const{ return m_activeFromTimestamp; }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool ActiveFromTimestampHasBeenSet() const { return m_activeFromTimestampHasBeenSet; }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(const Aws::Utils::DateTime& value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = value; }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(Aws::Utils::DateTime&& value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = std::move(value); }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithActiveFromTimestamp(const Aws::Utils::DateTime& value) { SetActiveFromTimestamp(value); return *this;}

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithActiveFromTimestamp(Aws::Utils::DateTime&& value) { SetActiveFromTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }

    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxChangesetListEntry& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline const ChangesetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline void SetStatus(const ChangesetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline void SetStatus(ChangesetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline KxChangesetListEntry& WithStatus(const ChangesetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of the changeset.</p> <ul> <li> <p>Pending – Changeset creation is
     * pending.</p> </li> <li> <p>Processing – Changeset creation is running.</p> </li>
     * <li> <p>Failed – Changeset creation has failed.</p> </li> <li> <p>Complete –
     * Changeset creation has succeeded.</p> </li> </ul>
     */
    inline KxChangesetListEntry& WithStatus(ChangesetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_activeFromTimestamp;
    bool m_activeFromTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    ChangesetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
