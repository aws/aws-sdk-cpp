/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/RedshiftDataShareAssetSourceEntry.h>
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
   * <p>Details from an import from Amazon Redshift datashare request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetsFromRedshiftDataSharesRequestDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetsFromRedshiftDataSharesRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesRequestDetails();
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline const Aws::Vector<RedshiftDataShareAssetSourceEntry>& GetAssetSources() const{ return m_assetSources; }

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline bool AssetSourcesHasBeenSet() const { return m_assetSourcesHasBeenSet; }

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline void SetAssetSources(const Aws::Vector<RedshiftDataShareAssetSourceEntry>& value) { m_assetSourcesHasBeenSet = true; m_assetSources = value; }

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline void SetAssetSources(Aws::Vector<RedshiftDataShareAssetSourceEntry>&& value) { m_assetSourcesHasBeenSet = true; m_assetSources = std::move(value); }

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithAssetSources(const Aws::Vector<RedshiftDataShareAssetSourceEntry>& value) { SetAssetSources(value); return *this;}

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithAssetSources(Aws::Vector<RedshiftDataShareAssetSourceEntry>&& value) { SetAssetSources(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& AddAssetSources(const RedshiftDataShareAssetSourceEntry& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Redshift datashare assets.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& AddAssetSources(RedshiftDataShareAssetSourceEntry&& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(std::move(value)); return *this; }


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
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::Vector<RedshiftDataShareAssetSourceEntry> m_assetSources;
    bool m_assetSourcesHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
