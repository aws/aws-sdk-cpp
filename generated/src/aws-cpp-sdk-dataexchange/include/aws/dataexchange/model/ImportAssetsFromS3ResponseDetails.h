/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetSourceEntry.h>
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
   * <p>Details from an import from Amazon S3 response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetsFromS3ResponseDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetsFromS3ResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetsFromS3ResponseDetails();
    AWS_DATAEXCHANGE_API ImportAssetsFromS3ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetsFromS3ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline const Aws::Vector<AssetSourceEntry>& GetAssetSources() const{ return m_assetSources; }

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline bool AssetSourcesHasBeenSet() const { return m_assetSourcesHasBeenSet; }

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline void SetAssetSources(const Aws::Vector<AssetSourceEntry>& value) { m_assetSourcesHasBeenSet = true; m_assetSources = value; }

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline void SetAssetSources(Aws::Vector<AssetSourceEntry>&& value) { m_assetSourcesHasBeenSet = true; m_assetSources = std::move(value); }

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithAssetSources(const Aws::Vector<AssetSourceEntry>& value) { SetAssetSources(value); return *this;}

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithAssetSources(Aws::Vector<AssetSourceEntry>&& value) { SetAssetSources(std::move(value)); return *this;}

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& AddAssetSources(const AssetSourceEntry& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(value); return *this; }

    /**
     * <p>Is a list of Amazon S3 bucket and object key pairs.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& AddAssetSources(AssetSourceEntry&& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetsFromS3ResponseDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::Vector<AssetSourceEntry> m_assetSources;
    bool m_assetSourcesHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
