/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/rekognition/model/TrainingData.h>
#include <aws/rekognition/model/TestingData.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API CreateProjectVersionRequest : public RekognitionRequest
  {
  public:
    CreateProjectVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProjectVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline CreateProjectVersionRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline CreateProjectVersionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Rekognition Custom Labels project that manages the
     * model that you want to train.</p>
     */
    inline CreateProjectVersionRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline CreateProjectVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline CreateProjectVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>A name for the version of the model. This value must be unique.</p>
     */
    inline CreateProjectVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline CreateProjectVersionRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The Amazon S3 location to store the results of training.</p>
     */
    inline CreateProjectVersionRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The dataset to use for training. </p>
     */
    inline const TrainingData& GetTrainingData() const{ return m_trainingData; }

    /**
     * <p>The dataset to use for training. </p>
     */
    inline bool TrainingDataHasBeenSet() const { return m_trainingDataHasBeenSet; }

    /**
     * <p>The dataset to use for training. </p>
     */
    inline void SetTrainingData(const TrainingData& value) { m_trainingDataHasBeenSet = true; m_trainingData = value; }

    /**
     * <p>The dataset to use for training. </p>
     */
    inline void SetTrainingData(TrainingData&& value) { m_trainingDataHasBeenSet = true; m_trainingData = std::move(value); }

    /**
     * <p>The dataset to use for training. </p>
     */
    inline CreateProjectVersionRequest& WithTrainingData(const TrainingData& value) { SetTrainingData(value); return *this;}

    /**
     * <p>The dataset to use for training. </p>
     */
    inline CreateProjectVersionRequest& WithTrainingData(TrainingData&& value) { SetTrainingData(std::move(value)); return *this;}


    /**
     * <p>The dataset to use for testing.</p>
     */
    inline const TestingData& GetTestingData() const{ return m_testingData; }

    /**
     * <p>The dataset to use for testing.</p>
     */
    inline bool TestingDataHasBeenSet() const { return m_testingDataHasBeenSet; }

    /**
     * <p>The dataset to use for testing.</p>
     */
    inline void SetTestingData(const TestingData& value) { m_testingDataHasBeenSet = true; m_testingData = value; }

    /**
     * <p>The dataset to use for testing.</p>
     */
    inline void SetTestingData(TestingData&& value) { m_testingDataHasBeenSet = true; m_testingData = std::move(value); }

    /**
     * <p>The dataset to use for testing.</p>
     */
    inline CreateProjectVersionRequest& WithTestingData(const TestingData& value) { SetTestingData(value); return *this;}

    /**
     * <p>The dataset to use for testing.</p>
     */
    inline CreateProjectVersionRequest& WithTestingData(TestingData&& value) { SetTestingData(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet;

    TrainingData m_trainingData;
    bool m_trainingDataHasBeenSet;

    TestingData m_testingData;
    bool m_testingDataHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
