﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/ModelVersionSourceType.h>
#include <aws/lookoutequipment/model/ModelQuality.h>
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
   * <p>Contains information about the specific model version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ModelVersionSummary">AWS
   * API Reference</a></p>
   */
  class ModelVersionSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ModelVersionSummary();
    AWS_LOOKOUTEQUIPMENT_API ModelVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model that this model version is a version of.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline ModelVersionSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline ModelVersionSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline ModelVersionSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model that this model version is a
     * version of.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline ModelVersionSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline ModelVersionSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline ModelVersionSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline long long GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline ModelVersionSummary& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline const Aws::String& GetModelVersionArn() const{ return m_modelVersionArn; }
    inline bool ModelVersionArnHasBeenSet() const { return m_modelVersionArnHasBeenSet; }
    inline void SetModelVersionArn(const Aws::String& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = value; }
    inline void SetModelVersionArn(Aws::String&& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = std::move(value); }
    inline void SetModelVersionArn(const char* value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn.assign(value); }
    inline ModelVersionSummary& WithModelVersionArn(const Aws::String& value) { SetModelVersionArn(value); return *this;}
    inline ModelVersionSummary& WithModelVersionArn(Aws::String&& value) { SetModelVersionArn(std::move(value)); return *this;}
    inline ModelVersionSummary& WithModelVersionArn(const char* value) { SetModelVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when this model version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ModelVersionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ModelVersionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model version.</p>
     */
    inline const ModelVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ModelVersionSummary& WithStatus(const ModelVersionStatus& value) { SetStatus(value); return *this;}
    inline ModelVersionSummary& WithStatus(ModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how this model version was generated.</p>
     */
    inline const ModelVersionSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const ModelVersionSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(ModelVersionSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ModelVersionSummary& WithSourceType(const ModelVersionSourceType& value) { SetSourceType(value); return *this;}
    inline ModelVersionSummary& WithSourceType(ModelVersionSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a quality assessment for a model that uses labels. If Lookout for
     * Equipment determines that the model quality is poor based on training metrics,
     * the value is <code>POOR_QUALITY_DETECTED</code>. Otherwise, the value is
     * <code>QUALITY_THRESHOLD_MET</code>. </p> <p>If the model is unlabeled, the model
     * quality can't be assessed and the value of <code>ModelQuality</code> is
     * <code>CANNOT_DETERMINE_QUALITY</code>. In this situation, you can get a model
     * quality assessment by adding labels to the input dataset and retraining the
     * model.</p> <p>For information about improving the quality of a model, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/best-practices.html">Best
     * practices with Amazon Lookout for Equipment</a>.</p>
     */
    inline const ModelQuality& GetModelQuality() const{ return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    inline void SetModelQuality(const ModelQuality& value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline void SetModelQuality(ModelQuality&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::move(value); }
    inline ModelVersionSummary& WithModelQuality(const ModelQuality& value) { SetModelQuality(value); return *this;}
    inline ModelVersionSummary& WithModelQuality(ModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    long long m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelVersionArn;
    bool m_modelVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ModelVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    ModelVersionSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    ModelQuality m_modelQuality;
    bool m_modelQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
