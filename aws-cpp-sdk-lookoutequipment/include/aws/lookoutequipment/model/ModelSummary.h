/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Provides information about the specified ML model, including dataset and
   * model names and ARNs, as well as status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ModelSummary">AWS
   * API Reference</a></p>
   */
  class ModelSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ModelSummary();
    AWS_LOOKOUTEQUIPMENT_API ModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ML model. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the ML model. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the ML model. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the ML model. </p>
     */
    inline ModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model. </p>
     */
    inline ModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model. </p>
     */
    inline ModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline ModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline ModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model. </p>
     */
    inline ModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline ModelSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline ModelSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being used for the ML model. </p>
     */
    inline ModelSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline ModelSummary& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the ML model. </p>
     */
    inline ModelSummary& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline ModelSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline ModelSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
