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
    AWS_FRAUDDETECTOR_API ExternalModelOutputs() = default;
    AWS_FRAUDDETECTOR_API ExternalModelOutputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModelOutputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SageMaker model.</p>
     */
    inline const ExternalModelSummary& GetExternalModel() const { return m_externalModel; }
    inline bool ExternalModelHasBeenSet() const { return m_externalModelHasBeenSet; }
    template<typename ExternalModelT = ExternalModelSummary>
    void SetExternalModel(ExternalModelT&& value) { m_externalModelHasBeenSet = true; m_externalModel = std::forward<ExternalModelT>(value); }
    template<typename ExternalModelT = ExternalModelSummary>
    ExternalModelOutputs& WithExternalModel(ExternalModelT&& value) { SetExternalModel(std::forward<ExternalModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fraud prediction scores from Amazon SageMaker model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::String>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::String>>
    ExternalModelOutputs& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsKeyT = Aws::String, typename OutputsValueT = Aws::String>
    ExternalModelOutputs& AddOutputs(OutputsKeyT&& key, OutputsValueT&& value) {
      m_outputsHasBeenSet = true; m_outputs.emplace(std::forward<OutputsKeyT>(key), std::forward<OutputsValueT>(value)); return *this;
    }
    ///@}
  private:

    ExternalModelSummary m_externalModel;
    bool m_externalModelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputs;
    bool m_outputsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
