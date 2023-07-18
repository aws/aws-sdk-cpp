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
   * Details from an import from Amazon Redshift datashare request.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetsFromRedshiftDataSharesRequestDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesRequestDetails
  {
  public:
    ImportAssetsFromRedshiftDataSharesRequestDetails();
    ImportAssetsFromRedshiftDataSharesRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    ImportAssetsFromRedshiftDataSharesRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline const Aws::Vector<RedshiftDataShareAssetSourceEntry>& GetAssetSources() const{ return m_assetSources; }

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline bool AssetSourcesHasBeenSet() const { return m_assetSourcesHasBeenSet; }

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline void SetAssetSources(const Aws::Vector<RedshiftDataShareAssetSourceEntry>& value) { m_assetSourcesHasBeenSet = true; m_assetSources = value; }

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline void SetAssetSources(Aws::Vector<RedshiftDataShareAssetSourceEntry>&& value) { m_assetSourcesHasBeenSet = true; m_assetSources = std::move(value); }

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithAssetSources(const Aws::Vector<RedshiftDataShareAssetSourceEntry>& value) { SetAssetSources(value); return *this;}

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithAssetSources(Aws::Vector<RedshiftDataShareAssetSourceEntry>&& value) { SetAssetSources(std::move(value)); return *this;}

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& AddAssetSources(const RedshiftDataShareAssetSourceEntry& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(value); return *this; }

    /**
     * A list of Amazon Redshift datashare assets.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& AddAssetSources(RedshiftDataShareAssetSourceEntry&& value) { m_assetSourcesHasBeenSet = true; m_assetSources.push_back(std::move(value)); return *this; }


    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * The unique identifier for the data set associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * The unique identifier for the revision associated with this import job.
     */
    inline ImportAssetsFromRedshiftDataSharesRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::Vector<RedshiftDataShareAssetSourceEntry> m_assetSources;
    bool m_assetSourcesHasBeenSet;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
