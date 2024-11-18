/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/DatasetSource.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateDatasetRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }
    inline UpdateDatasetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline UpdateDatasetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline UpdateDatasetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline UpdateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline UpdateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline UpdateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the dataset, and its functionality.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = value; }
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::move(value); }
    inline void SetDatasetDescription(const char* value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription.assign(value); }
    inline UpdateDatasetRequest& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}
    inline UpdateDatasetRequest& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}
    inline UpdateDatasetRequest& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the dataset.</p>
     */
    inline const DatasetSource& GetDatasetSource() const{ return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    inline void SetDatasetSource(const DatasetSource& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = value; }
    inline void SetDatasetSource(DatasetSource&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::move(value); }
    inline UpdateDatasetRequest& WithDatasetSource(const DatasetSource& value) { SetDatasetSource(value); return *this;}
    inline UpdateDatasetRequest& WithDatasetSource(DatasetSource&& value) { SetDatasetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateDatasetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateDatasetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateDatasetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    DatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
