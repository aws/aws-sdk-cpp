/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GroundTruthManifest.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> The source that Amazon Rekognition Custom Labels uses to create a dataset.
   * To use an Amazon Sagemaker format manifest file, specify the S3 bucket location
   * in the <code>GroundTruthManifest</code> field. The S3 bucket must be in your AWS
   * account. To create a copy of an existing dataset, specify the Amazon Resource
   * Name (ARN) of an existing dataset in <code>DatasetArn</code>.</p> <p>You need to
   * specify a value for <code>DatasetArn</code> or <code>GroundTruthManifest</code>,
   * but not both. if you supply both values, or if you don't specify any values, an
   * InvalidParameterException exception occurs. </p> <p>For more information, see
   * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetSource">AWS
   * API Reference</a></p>
   */
  class DatasetSource
  {
  public:
    AWS_REKOGNITION_API DatasetSource();
    AWS_REKOGNITION_API DatasetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GroundTruthManifest& GetGroundTruthManifest() const{ return m_groundTruthManifest; }

    
    inline bool GroundTruthManifestHasBeenSet() const { return m_groundTruthManifestHasBeenSet; }

    
    inline void SetGroundTruthManifest(const GroundTruthManifest& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = value; }

    
    inline void SetGroundTruthManifest(GroundTruthManifest&& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = std::move(value); }

    
    inline DatasetSource& WithGroundTruthManifest(const GroundTruthManifest& value) { SetGroundTruthManifest(value); return *this;}

    
    inline DatasetSource& WithGroundTruthManifest(GroundTruthManifest&& value) { SetGroundTruthManifest(std::move(value)); return *this;}


    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline DatasetSource& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline DatasetSource& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline DatasetSource& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}

  private:

    GroundTruthManifest m_groundTruthManifest;
    bool m_groundTruthManifestHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
