/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/S3DataAccessAssetSourceEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details about the response of the operation to create an S3 data access from
   * an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateS3DataAccessFromS3BucketResponseDetails">AWS
   * API Reference</a></p>
   */
  class CreateS3DataAccessFromS3BucketResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketResponseDetails();
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline const S3DataAccessAssetSourceEntry& GetAssetSource() const{ return m_assetSource; }

    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline bool AssetSourceHasBeenSet() const { return m_assetSourceHasBeenSet; }

    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline void SetAssetSource(const S3DataAccessAssetSourceEntry& value) { m_assetSourceHasBeenSet = true; m_assetSource = value; }

    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline void SetAssetSource(S3DataAccessAssetSourceEntry&& value) { m_assetSourceHasBeenSet = true; m_assetSource = std::move(value); }

    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithAssetSource(const S3DataAccessAssetSourceEntry& value) { SetAssetSource(value); return *this;}

    /**
     * <p>Details about the asset source from an Amazon S3 bucket.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithAssetSource(S3DataAccessAssetSourceEntry&& value) { SetAssetSource(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this data set.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketResponseDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    S3DataAccessAssetSourceEntry m_assetSource;
    bool m_assetSourceHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
