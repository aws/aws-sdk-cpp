/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/finspace-data/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace-data/model/FormatType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace-data/model/ChangesetStatus.h>
#include <aws/finspace-data/model/ErrorInfo.h>
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
   * <p>A changeset is unit of data in a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ChangesetInfo">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API ChangesetInfo
  {
  public:
    ChangesetInfo();
    ChangesetInfo(Aws::Utils::Json::JsonView jsonValue);
    ChangesetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline ChangesetInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline ChangesetInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a changeset.</p>
     */
    inline ChangesetInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline const Aws::String& GetChangesetArn() const{ return m_changesetArn; }

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline bool ChangesetArnHasBeenSet() const { return m_changesetArnHasBeenSet; }

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline void SetChangesetArn(const Aws::String& value) { m_changesetArnHasBeenSet = true; m_changesetArn = value; }

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline void SetChangesetArn(Aws::String&& value) { m_changesetArnHasBeenSet = true; m_changesetArn = std::move(value); }

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline void SetChangesetArn(const char* value) { m_changesetArnHasBeenSet = true; m_changesetArn.assign(value); }

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline ChangesetInfo& WithChangesetArn(const Aws::String& value) { SetChangesetArn(value); return *this;}

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline ChangesetInfo& WithChangesetArn(Aws::String&& value) { SetChangesetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the changeset.</p>
     */
    inline ChangesetInfo& WithChangesetArn(const char* value) { SetChangesetArn(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline ChangesetInfo& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline ChangesetInfo& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset is
     * created.</p>
     */
    inline ChangesetInfo& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline ChangesetInfo& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Change type indicates how a changeset is applied to a dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> - Changeset is considered as a replacement to all prior
     * loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset is
     * considered as an addition to the end of all prior loaded changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to a
     * specific prior ingested changeset.</p> </li> </ul>
     */
    inline ChangesetInfo& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline ChangesetInfo& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Type of the data source from which the files to create the changeset are
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline ChangesetInfo& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = value; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::move(value); }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset are sourced.</p>
     */
    inline ChangesetInfo& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline const FormatType& GetFormatType() const{ return m_formatType; }

    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline bool FormatTypeHasBeenSet() const { return m_formatTypeHasBeenSet; }

    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline void SetFormatType(const FormatType& value) { m_formatTypeHasBeenSet = true; m_formatType = value; }

    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline void SetFormatType(FormatType&& value) { m_formatTypeHasBeenSet = true; m_formatType = std::move(value); }

    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline ChangesetInfo& WithFormatType(const FormatType& value) { SetFormatType(value); return *this;}

    /**
     * <p>Format type of the input files loaded into the changeset.</p>
     */
    inline ChangesetInfo& WithFormatType(FormatType&& value) { SetFormatType(std::move(value)); return *this;}


    /**
     * <p>Structure of the source file(s).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParamsHasBeenSet = true; m_formatParams = value; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::move(value); }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline ChangesetInfo& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }


    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline ChangesetInfo& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was created in FinSpace.</p>
     */
    inline ChangesetInfo& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline const ChangesetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline void SetStatus(const ChangesetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline void SetStatus(ChangesetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline ChangesetInfo& WithStatus(const ChangesetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of changeset creation operation.</p>
     */
    inline ChangesetInfo& WithStatus(ChangesetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The structure with error messages.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * <p>The structure with error messages.</p>
     */
    inline ChangesetInfo& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>The structure with error messages.</p>
     */
    inline ChangesetInfo& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChangesetLabels() const{ return m_changesetLabels; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline bool ChangesetLabelsHasBeenSet() const { return m_changesetLabelsHasBeenSet; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline void SetChangesetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels = value; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline void SetChangesetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels = std::move(value); }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& WithChangesetLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetChangesetLabels(value); return *this;}

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& WithChangesetLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetChangesetLabels(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(const Aws::String& key, const Aws::String& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(Aws::String&& key, const Aws::String& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(const Aws::String& key, Aws::String&& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(Aws::String&& key, Aws::String&& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(const char* key, Aws::String&& value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(Aws::String&& key, const char* value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the changeset.</p>
     */
    inline ChangesetInfo& AddChangesetLabels(const char* key, const char* value) { m_changesetLabelsHasBeenSet = true; m_changesetLabels.emplace(key, value); return *this; }


    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline const Aws::String& GetUpdatesChangesetId() const{ return m_updatesChangesetId; }

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline bool UpdatesChangesetIdHasBeenSet() const { return m_updatesChangesetIdHasBeenSet; }

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(const Aws::String& value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId = value; }

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(Aws::String&& value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId = std::move(value); }

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline void SetUpdatesChangesetId(const char* value) { m_updatesChangesetIdHasBeenSet = true; m_updatesChangesetId.assign(value); }

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline ChangesetInfo& WithUpdatesChangesetId(const Aws::String& value) { SetUpdatesChangesetId(value); return *this;}

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline ChangesetInfo& WithUpdatesChangesetId(Aws::String&& value) { SetUpdatesChangesetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the changeset that is updated.</p>
     */
    inline ChangesetInfo& WithUpdatesChangesetId(const char* value) { SetUpdatesChangesetId(value); return *this;}


    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline const Aws::String& GetUpdatedByChangesetId() const{ return m_updatedByChangesetId; }

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline bool UpdatedByChangesetIdHasBeenSet() const { return m_updatedByChangesetIdHasBeenSet; }

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const Aws::String& value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId = value; }

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline void SetUpdatedByChangesetId(Aws::String&& value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId = std::move(value); }

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const char* value) { m_updatedByChangesetIdHasBeenSet = true; m_updatedByChangesetId.assign(value); }

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline ChangesetInfo& WithUpdatedByChangesetId(const Aws::String& value) { SetUpdatedByChangesetId(value); return *this;}

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline ChangesetInfo& WithUpdatedByChangesetId(Aws::String&& value) { SetUpdatedByChangesetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the changeset that is updated a changeset.</p>
     */
    inline ChangesetInfo& WithUpdatedByChangesetId(const char* value) { SetUpdatedByChangesetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_changesetArn;
    bool m_changesetArnHasBeenSet;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet;

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet;

    FormatType m_formatType;
    bool m_formatTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;

    ChangesetStatus m_status;
    bool m_statusHasBeenSet;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_changesetLabels;
    bool m_changesetLabelsHasBeenSet;

    Aws::String m_updatesChangesetId;
    bool m_updatesChangesetIdHasBeenSet;

    Aws::String m_updatedByChangesetId;
    bool m_updatedByChangesetIdHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
