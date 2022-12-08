/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/DatasetSource.h>
#include <aws/rekognition/model/DatasetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline const DatasetSource& GetDatasetSource() const{ return m_datasetSource; }

    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }

    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline void SetDatasetSource(const DatasetSource& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = value; }

    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline void SetDatasetSource(DatasetSource&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::move(value); }

    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline CreateDatasetRequest& WithDatasetSource(const DatasetSource& value) { SetDatasetSource(value); return *this;}

    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline CreateDatasetRequest& WithDatasetSource(DatasetSource&& value) { SetDatasetSource(std::move(value)); return *this;}


    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline void SetDatasetType(const DatasetType& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline void SetDatasetType(DatasetType&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline CreateDatasetRequest& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}

    /**
     * <p> The type of the dataset. Specify <code>train</code> to create a training
     * dataset. Specify <code>test</code> to create a test dataset. </p>
     */
    inline CreateDatasetRequest& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}


    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline CreateDatasetRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline CreateDatasetRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline CreateDatasetRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

  private:

    DatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;

    DatasetType m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
