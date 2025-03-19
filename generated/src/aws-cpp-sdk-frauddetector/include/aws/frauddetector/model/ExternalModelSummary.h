/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelSource.h>
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
   * <p>The Amazon SageMaker model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ExternalModelSummary">AWS
   * API Reference</a></p>
   */
  class ExternalModelSummary
  {
  public:
    AWS_FRAUDDETECTOR_API ExternalModelSummary() = default;
    AWS_FRAUDDETECTOR_API ExternalModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline const Aws::String& GetModelEndpoint() const { return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    template<typename ModelEndpointT = Aws::String>
    void SetModelEndpoint(ModelEndpointT&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::forward<ModelEndpointT>(value); }
    template<typename ModelEndpointT = Aws::String>
    ExternalModelSummary& WithModelEndpoint(ModelEndpointT&& value) { SetModelEndpoint(std::forward<ModelEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the model.</p>
     */
    inline ModelSource GetModelSource() const { return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(ModelSource value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline ExternalModelSummary& WithModelSource(ModelSource value) { SetModelSource(value); return *this;}
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource{ModelSource::NOT_SET};
    bool m_modelSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
