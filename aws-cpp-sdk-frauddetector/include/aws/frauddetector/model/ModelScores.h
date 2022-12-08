/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/ModelVersion.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The fraud prediction scores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelScores">AWS
   * API Reference</a></p>
   */
  class ModelScores
  {
  public:
    AWS_FRAUDDETECTOR_API ModelScores();
    AWS_FRAUDDETECTOR_API ModelScores(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelScores& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The model version.</p>
     */
    inline const ModelVersion& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The model version.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersion(const ModelVersion& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersion(ModelVersion&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The model version.</p>
     */
    inline ModelScores& WithModelVersion(const ModelVersion& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline ModelScores& WithModelVersion(ModelVersion&& value) { SetModelVersion(std::move(value)); return *this;}


    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetScores() const{ return m_scores; }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline bool ScoresHasBeenSet() const { return m_scoresHasBeenSet; }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline void SetScores(const Aws::Map<Aws::String, double>& value) { m_scoresHasBeenSet = true; m_scores = value; }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline void SetScores(Aws::Map<Aws::String, double>&& value) { m_scoresHasBeenSet = true; m_scores = std::move(value); }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline ModelScores& WithScores(const Aws::Map<Aws::String, double>& value) { SetScores(value); return *this;}

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline ModelScores& WithScores(Aws::Map<Aws::String, double>&& value) { SetScores(std::move(value)); return *this;}

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline ModelScores& AddScores(const Aws::String& key, double value) { m_scoresHasBeenSet = true; m_scores.emplace(key, value); return *this; }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline ModelScores& AddScores(Aws::String&& key, double value) { m_scoresHasBeenSet = true; m_scores.emplace(std::move(key), value); return *this; }

    /**
     * <p>The model's fraud prediction scores.</p>
     */
    inline ModelScores& AddScores(const char* key, double value) { m_scoresHasBeenSet = true; m_scores.emplace(key, value); return *this; }

  private:

    ModelVersion m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Map<Aws::String, double> m_scores;
    bool m_scoresHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
