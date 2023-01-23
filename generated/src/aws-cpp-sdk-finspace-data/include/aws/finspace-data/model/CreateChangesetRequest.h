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
  class CreateChangesetRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API CreateChangesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChangeset"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateChangesetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateChangesetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
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
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>The option to indicate how a Changeset will be applied to a Dataset.</p> <ul>
     * <li> <p> <code>REPLACE</code> – Changeset will be considered as a replacement to
     * all prior loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset
     * will be considered as an addition to the end of all prior loaded Changesets.</p>
     * </li> <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to
     * a specific prior ingested Changeset.</p> </li> </ul>
     */
    inline CreateChangesetRequest& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = value; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::move(value); }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested
     * (<code>s3SourcePath</code>) and the source of the changeset
     * (<code>sourceType</code>).</p> <p>Both <code>s3SourcePath</code> and
     * <code>sourceType</code> are required attributes.</p> <p>Here is an example of
     * how you could specify the <code>sourceParams</code>:</p> <p> <code>
     * "sourceParams": { "s3SourcePath":
     * "s3://finspace-landing-us-east-2-bk7gcfvitndqa6ebnvys4d/scratch/wr5hh8pwkpqqkxa4sxrmcw/ingestion/equity.csv",
     * "sourceType": "S3" } </code> </p> <p>The S3 path that you specify must allow the
     * FinSpace role access. To do that, you first need to configure the IAM policy on
     * S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/data-api/fs-using-the-finspace-api.html#access-s3-buckets">Loading
     * data from an Amazon S3 Bucket using the FinSpace API</a> section.</p>
     */
    inline CreateChangesetRequest& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParamsHasBeenSet = true; m_formatParams = value; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::move(value); }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s) including the format
     * type (<code>formatType</code>), header row (<code>withHeader</code>), data
     * separation character (<code>separator</code>) and the type of compression
     * (<code>compression</code>). </p> <p> <code>formatType</code> is a required
     * attribute and can have the following values: </p> <ul> <li> <p>
     * <code>PARQUET</code> – Parquet source file format.</p> </li> <li> <p>
     * <code>CSV</code> – CSV source file format.</p> </li> <li> <p> <code>JSON</code>
     * – JSON source file format.</p> </li> <li> <p> <code>XML</code> – XML source file
     * format.</p> </li> </ul> <p>Here is an example of how you could specify the
     * <code>formatParams</code>:</p> <p> <code> "formatParams": { "formatType": "CSV",
     * "withHeader": "true", "separator": ",", "compression":"None" } </code> </p>
     * <p>Note that if you only provide <code>formatType</code> as <code>CSV</code>,
     * the rest of the attributes will automatically default to CSV values as
     * following:</p> <p> <code> { "withHeader": "true", "separator": "," } </code>
     * </p> <p> For more information about supported file formats, see <a
     * href="https://docs.aws.amazon.com/finspace/latest/userguide/supported-data-types.html">Supported
     * Data Types and File Formats</a> in the FinSpace User Guide.</p>
     */
    inline CreateChangesetRequest& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
