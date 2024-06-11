/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class GetAssetRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API GetAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAsset"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for an asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline GetAssetRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline GetAssetRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline GetAssetRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline GetAssetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline GetAssetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline GetAssetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline GetAssetRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline GetAssetRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline GetAssetRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}
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
