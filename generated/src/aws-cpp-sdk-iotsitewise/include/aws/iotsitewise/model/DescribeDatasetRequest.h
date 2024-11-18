/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeDatasetRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataset"; }

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
    inline DescribeDatasetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline DescribeDatasetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline DescribeDatasetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
