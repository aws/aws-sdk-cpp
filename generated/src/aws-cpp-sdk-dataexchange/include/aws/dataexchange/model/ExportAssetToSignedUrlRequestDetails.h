/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
   * <p>Details of the operation to be performed by the job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportAssetToSignedUrlRequestDetails">AWS
   * API Reference</a></p>
   */
  class ExportAssetToSignedUrlRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlRequestDetails();
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the asset that is exported to a signed URL.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithAssetId(const char* value) { SetAssetId(value); return *this;}


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
    inline ExportAssetToSignedUrlRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


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
    inline ExportAssetToSignedUrlRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline ExportAssetToSignedUrlRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
