/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/ExternalModelSummary.h>
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
   * <p>The fraud prediction scores from Amazon SageMaker model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ExternalModelOutputs">AWS
   * API Reference</a></p>
   */
  class ExternalModelOutputs
  {
  public:
    AWS_FRAUDDETECTOR_API ExternalModelOutputs();
    AWS_FRAUDDETECTOR_API ExternalModelOutputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModelOutputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline const ExternalModelSummary& GetExternalModel() const{ return m_externalModel; }

    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline bool ExternalModelHasBeenSet() const { return m_externalModelHasBeenSet; }

    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline void SetExternalModel(const ExternalModelSummary& value) { m_externalModelHasBeenSet = true; m_externalModel = value; }

    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline void SetExternalModel(ExternalModelSummary&& value) { m_externalModelHasBeenSet = true; m_externalModel = std::move(value); }

    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& WithExternalModel(const ExternalModelSummary& value) { SetExternalModel(value); return *this;}

    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& WithExternalModel(ExternalModelSummary&& value) { SetExternalModel(std::move(value)); return *this;}


    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline void SetOutputs(Aws::Map<Aws::String, Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& WithOutputs(const Aws::Map<Aws::String, Aws::String>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& WithOutputs(Aws::Map<Aws::String, Aws::String>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(const Aws::String& key, const Aws::String& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(Aws::String&& key, const Aws::String& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(const Aws::String& key, Aws::String&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(Aws::String&& key, Aws::String&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(const char* key, Aws::String&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(Aws::String&& key, const char* value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline ExternalModelOutputs& AddOutputs(const char* key, const char* value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

  private:

    ExternalModelSummary m_externalModel;
    bool m_externalModelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputs;
    bool m_outputsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
