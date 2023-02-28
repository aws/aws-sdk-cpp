/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelStatus.h>
#include <aws/comprehend/model/ModelType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Flywheel summary information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/FlywheelSummary">AWS
   * API Reference</a></p>
   */
  class FlywheelSummary
  {
  public:
    AWS_COMPREHEND_API FlywheelSummary();
    AWS_COMPREHEND_API FlywheelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline FlywheelSummary& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline FlywheelSummary& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline FlywheelSummary& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = value; }

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::move(value); }

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline void SetActiveModelArn(const char* value) { m_activeModelArnHasBeenSet = true; m_activeModelArn.assign(value); }

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline FlywheelSummary& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline FlywheelSummary& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the active model version for the flywheel.</p>
     */
    inline FlywheelSummary& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}


    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const{ return m_dataLakeS3Uri; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(const Aws::String& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = value; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(Aws::String&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::move(value); }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(const char* value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri.assign(value); }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelSummary& WithDataLakeS3Uri(const Aws::String& value) { SetDataLakeS3Uri(value); return *this;}

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelSummary& WithDataLakeS3Uri(Aws::String&& value) { SetDataLakeS3Uri(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelSummary& WithDataLakeS3Uri(const char* value) { SetDataLakeS3Uri(value); return *this;}


    /**
     * <p>The status of the flywheel.</p>
     */
    inline const FlywheelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline void SetStatus(const FlywheelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline void SetStatus(FlywheelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline FlywheelSummary& WithStatus(const FlywheelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the flywheel.</p>
     */
    inline FlywheelSummary& WithStatus(FlywheelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline const ModelType& GetModelType() const{ return m_modelType; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline void SetModelType(const ModelType& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline void SetModelType(ModelType&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline FlywheelSummary& WithModelType(const ModelType& value) { SetModelType(value); return *this;}

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline FlywheelSummary& WithModelType(ModelType&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline FlywheelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline FlywheelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline FlywheelSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline FlywheelSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline const Aws::String& GetLatestFlywheelIteration() const{ return m_latestFlywheelIteration; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline bool LatestFlywheelIterationHasBeenSet() const { return m_latestFlywheelIterationHasBeenSet; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(const Aws::String& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = value; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(Aws::String&& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = std::move(value); }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(const char* value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration.assign(value); }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelSummary& WithLatestFlywheelIteration(const Aws::String& value) { SetLatestFlywheelIteration(value); return *this;}

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelSummary& WithLatestFlywheelIteration(Aws::String&& value) { SetLatestFlywheelIteration(std::move(value)); return *this;}

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelSummary& WithLatestFlywheelIteration(const char* value) { SetLatestFlywheelIteration(value); return *this;}

  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_activeModelArn;
    bool m_activeModelArnHasBeenSet = false;

    Aws::String m_dataLakeS3Uri;
    bool m_dataLakeS3UriHasBeenSet = false;

    FlywheelStatus m_status;
    bool m_statusHasBeenSet = false;

    ModelType m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_latestFlywheelIteration;
    bool m_latestFlywheelIterationHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
