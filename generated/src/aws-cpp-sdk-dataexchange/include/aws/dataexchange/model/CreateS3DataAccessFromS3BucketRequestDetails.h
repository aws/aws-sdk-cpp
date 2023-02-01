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
   * <p>Details of the operation to create an Amazon S3 data access from an S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateS3DataAccessFromS3BucketRequestDetails">AWS
   * API Reference</a></p>
   */
  class CreateS3DataAccessFromS3BucketRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails();
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline const S3DataAccessAssetSourceEntry& GetAssetSource() const{ return m_assetSource; }

    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline bool AssetSourceHasBeenSet() const { return m_assetSourceHasBeenSet; }

    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline void SetAssetSource(const S3DataAccessAssetSourceEntry& value) { m_assetSourceHasBeenSet = true; m_assetSource = value; }

    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline void SetAssetSource(S3DataAccessAssetSourceEntry&& value) { m_assetSourceHasBeenSet = true; m_assetSource = std::move(value); }

    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithAssetSource(const S3DataAccessAssetSourceEntry& value) { SetAssetSource(value); return *this;}

    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithAssetSource(S3DataAccessAssetSourceEntry&& value) { SetAssetSource(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline CreateS3DataAccessFromS3BucketRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

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
