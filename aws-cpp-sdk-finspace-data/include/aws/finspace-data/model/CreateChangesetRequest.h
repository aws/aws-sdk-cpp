/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   * The request for a CreateChangeset operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangesetRequest">AWS
   * API Reference</a></p>
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
     * <p>A token used to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline CreateChangesetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline CreateChangesetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline CreateChangesetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline CreateChangesetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline CreateChangesetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset will be
     * created. </p>
     */
    inline CreateChangesetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> - Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> - Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> - Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


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
    inline CreateChangesetRequest& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParamsHasBeenSet = true; m_formatParams = value; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::move(value); }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> - Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> - CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * - JSON source file format.</p> </li> <li> <p> <code>XML</code> - XML source file
     * format.</p> </li> </ul> <p> For example, you could specify the following for
     * <code>formatParams</code>: <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet;

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
