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
    AWS_FINSPACEDATA_API ChangesetSummary();
    AWS_FINSPACEDATA_API ChangesetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ChangesetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline const Aws::String& GetChangesetArn() const{ return m_changesetArn; }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline bool ChangesetArnHasBeenSet() const { return m_changesetArnHasBeenSet; }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(const Aws::String& value) { m_changesetArnHasBeenSet = true; m_changesetArn = value; }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(Aws::String&& value) { m_changesetArnHasBeenSet = true; m_changesetArn = std::move(value); }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(const char* value) { m_changesetArnHasBeenSet = true; m_changesetArn.assign(value); }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetArn(const Aws::String& value) { SetChangesetArn(value); return *this;}

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetArn(Aws::String&& value) { SetChangesetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline ChangesetSummary& WithChangesetArn(const char* value) { SetChangesetArn(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline ChangesetSummary& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline ChangesetSummary& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline ChangesetSummary& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline ChangesetSummary& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline ChangesetSummary& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = value; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::move(value); }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline ChangesetSummary& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParamsHasBeenSet = true; m_formatParams = value; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::move(value); }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline ChangesetSummary& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }


    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline ChangesetSummary& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline const IngestionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline void SetStatus(const IngestionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline void SetStatus(IngestionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline ChangesetSummary& WithStatus(const IngestionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the Changeset ingestion.</p> <ul> <li> <p> <code>PENDING</code> –
     * Changeset is pending creation.</p> </li> <li> <p> <code>FAILED</code> –
     * Changeset creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Changeset creation has succeeded.</p> </li> <li> <p> <code>RUNNING</code> –
     * Changeset creation is running.</p> </li> <li> <p> <code>STOP_REQUESTED</code> –
     * User requested Changeset creation to stop.</p> </li> </ul>
     */
    inline ChangesetSummary& WithStatus(IngestionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The structure with error messages.</p>
     */
    inline const ChangesetErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(const ChangesetErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(ChangesetErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * <p>The structure with error messages.</p>
     */
    inline ChangesetSummary& WithErrorInfo(const ChangesetErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>The structure with error messages.</p>
     */
    inline ChangesetSummary& WithErrorInfo(ChangesetErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveUntilTimestamp() const{ return m_activeUntilTimestamp; }

    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool ActiveUntilTimestampHasBeenSet() const { return m_activeUntilTimestampHasBeenSet; }

    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveUntilTimestamp(long long value) { m_activeUntilTimestampHasBeenSet = true; m_activeUntilTimestamp = value; }

    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline ChangesetSummary& WithActiveUntilTimestamp(long long value) { SetActiveUntilTimestamp(value); return *this;}


    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveFromTimestamp() const{ return m_activeFromTimestamp; }

    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool ActiveFromTimestampHasBeenSet() const { return m_activeFromTimestampHasBeenSet; }

    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(long long value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = value; }

    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline ChangesetSummary& WithActiveFromTimestamp(long long value) { SetActiveFromTimestamp(value); return *this;}


    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline const Aws::String& GetUpdatesChangesetId() const{ return m_updatesChangesetId; }

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline bool UpdatesChangesetIdHasBeenSet() const { return m_updatesChangesetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(const Aws::String& value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId = value; }

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(Aws::String&& value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId = std::move(value); }

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(const char* value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId.assign(value); }

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline ChangesetSummary& WithUpdatesChangesetId(const Aws::String& value) { SetUpdatesChangesetId(value); return *this;}

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline ChangesetSummary& WithUpdatesChangesetId(Aws::String&& value) { SetUpdatesChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Changeset that is updated.</p>
     */
    inline ChangesetSummary& WithUpdatesChangesetId(const char* value) { SetUpdatesChangesetId(value); return *this;}


    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline const Aws::String& GetUpdatedByChangesetId() const{ return m_updatedByChangesetId; }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline bool UpdatedByChangesetIdHasBeenSet() const { return m_updatedByChangesetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const Aws::String& value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId = value; }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(Aws::String&& value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId = std::move(value); }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const char* value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId.assign(value); }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline ChangesetSummary& WithUpdatedByChangesetId(const Aws::String& value) { SetUpdatedByChangesetId(value); return *this;}

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline ChangesetSummary& WithUpdatedByChangesetId(Aws::String&& value) { SetUpdatedByChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline ChangesetSummary& WithUpdatedByChangesetId(const char* value) { SetUpdatedByChangesetId(value); return *this;}

  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::String m_changesetArn;
    bool m_changesetArnHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet = false;

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    IngestionStatus m_status;
    bool m_statusHasBeenSet = false;

    ChangesetErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    long long m_activeUntilTimestamp;
    bool m_activeUntilTimestampHasBeenSet = false;

    long long m_activeFromTimestamp;
    bool m_activeFromTimestampHasBeenSet = false;

    Aws::String m_updatesChangesetId;
    bool m_updatesChangesetIdHasBeenSet = false;

    Aws::String m_updatedByChangesetId;
    bool m_updatedByChangesetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
