/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetDestinationEntry.h>
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
   * <p>Details of the operation to be performed by the job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportAssetsToS3RequestDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API ExportAssetsToS3RequestDetails
  {
  public:
    ExportAssetsToS3RequestDetails();
    ExportAssetsToS3RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    ExportAssetsToS3RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination for the asset.</p>
     */
    inline const Aws::Vector<AssetDestinationEntry>& GetAssetDestinations() const{ return m_assetDestinations; }

    /**
     * <p>The destination for the asset.</p>
     */
    inline bool AssetDestinationsHasBeenSet() const { return m_assetDestinationsHasBeenSet; }

    /**
     * <p>The destination for the asset.</p>
     */
    inline void SetAssetDestinations(const Aws::Vector<AssetDestinationEntry>& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations = value; }

    /**
     * <p>The destination for the asset.</p>
     */
    inline void SetAssetDestinations(Aws::Vector<AssetDestinationEntry>&& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations = std::move(value); }

    /**
     * <p>The destination for the asset.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithAssetDestinations(const Aws::Vector<AssetDestinationEntry>& value) { SetAssetDestinations(value); return *this;}

    /**
     * <p>The destination for the asset.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithAssetDestinations(Aws::Vector<AssetDestinationEntry>&& value) { SetAssetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination for the asset.</p>
     */
    inline ExportAssetsToS3RequestDetails& AddAssetDestinations(const AssetDestinationEntry& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations.push_back(value); return *this; }

    /**
     * <p>The destination for the asset.</p>
     */
    inline ExportAssetsToS3RequestDetails& AddAssetDestinations(AssetDestinationEntry&& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline ExportAssetsToS3RequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::Vector<AssetDestinationEntry> m_assetDestinations;
    bool m_assetDestinationsHasBeenSet;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
