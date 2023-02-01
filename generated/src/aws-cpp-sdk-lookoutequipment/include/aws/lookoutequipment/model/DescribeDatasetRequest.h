/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class DescribeDatasetRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataset"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline DescribeDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline DescribeDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset to be described. </p>
     */
    inline DescribeDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
