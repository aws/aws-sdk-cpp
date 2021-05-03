/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/finspace-data/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace-data/model/FormatType.h>
#include <utility>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class AWS_FINSPACEDATA_API CreateChangesetRequest : public FinSpaceDataRequest
  {
  public:
    CreateChangesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChangeset"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline CreateChangesetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline CreateChangesetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace dataset in which the changeset will be
     * created.</p>
     */
    inline CreateChangesetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Option to indicate how a changeset will be applied to a dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded changesets.</p>
     * </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Type of the data source from which the files to create the changeset will be
     * sourced.</p> <ul> <li> <p> <code>S3</code> - Amazon S3.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = value; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::move(value); }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source path from which the files to create the changeset will be sourced.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline const FormatType& GetFormatType() const{ return m_formatType; }

    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline bool FormatTypeHasBeenSet() const { return m_formatTypeHasBeenSet; }

    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline void SetFormatType(const FormatType& value) { m_formatTypeHasBeenSet = true; m_formatType = value; }

    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline void SetFormatType(FormatType&& value) { m_formatTypeHasBeenSet = true; m_formatType = std::move(value); }

    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline CreateChangesetRequest& WithFormatType(const FormatType& value) { SetFormatType(value); return *this;}

    /**
     * <p>Format type of the input files being loaded into the changeset.</p>
     */
    inline CreateChangesetRequest& WithFormatType(FormatType&& value) { SetFormatType(std::move(value)); return *this;}


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
    inline CreateChangesetRequest& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }


    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this changeset.</p>
     */
    inline CreateChangesetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
