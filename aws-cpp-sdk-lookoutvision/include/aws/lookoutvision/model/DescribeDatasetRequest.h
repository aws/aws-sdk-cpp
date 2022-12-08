/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class DescribeDatasetRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataset"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline DescribeDatasetRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline DescribeDatasetRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that contains the dataset that you want to
     * describe.</p>
     */
    inline DescribeDatasetRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline DescribeDatasetRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline DescribeDatasetRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>The type of the dataset to describe. Specify <code>train</code> to describe
     * the training dataset. Specify <code>test</code> to describe the test dataset. If
     * you have a single dataset project, specify <code>train</code> </p>
     */
    inline DescribeDatasetRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
