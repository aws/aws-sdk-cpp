/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelStatus.h>
#include <aws/lookoutvision/model/ModelPerformance.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lookout for Vision model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelMetadata">AWS
   * API Reference</a></p>
   */
  class ModelMetadata
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelMetadata();
    AWS_LOOKOUTFORVISION_API ModelMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline ModelMetadata& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline ModelMetadata& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline ModelMetadata& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline ModelMetadata& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline ModelMetadata& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelMetadata& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelMetadata& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelMetadata& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The description for the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the model.</p>
     */
    inline ModelMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the model.</p>
     */
    inline ModelMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the model.</p>
     */
    inline ModelMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the model.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the model.</p>
     */
    inline ModelMetadata& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model.</p>
     */
    inline ModelMetadata& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the model.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the model.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelMetadata& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelMetadata& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelMetadata& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline const ModelPerformance& GetPerformance() const{ return m_performance; }

    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }

    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline void SetPerformance(const ModelPerformance& value) { m_performanceHasBeenSet = true; m_performance = value; }

    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline void SetPerformance(ModelPerformance&& value) { m_performanceHasBeenSet = true; m_performance = std::move(value); }

    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline ModelMetadata& WithPerformance(const ModelPerformance& value) { SetPerformance(value); return *this;}

    /**
     * <p>Performance metrics for the model. Not available until training has
     * successfully completed.</p>
     */
    inline ModelMetadata& WithPerformance(ModelPerformance&& value) { SetPerformance(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ModelPerformance m_performance;
    bool m_performanceHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
