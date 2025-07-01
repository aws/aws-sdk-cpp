/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MetricDefinition.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides configuration information for the dockerized container where the
   * model algorithm is stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ContainerConfig">AWS
   * API Reference</a></p>
   */
  class ContainerConfig
  {
  public:
    AWS_CLEANROOMSML_API ContainerConfig() = default;
    AWS_CLEANROOMSML_API ContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registry path of the docker image that contains the algorithm. Clean
     * Rooms ML currently only supports the <code>registry/repository[:tag]</code>
     * image path format. For more information about using images in Clean Rooms ML,
     * see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AlgorithmSpecification.html#sagemaker-Type-AlgorithmSpecification-TrainingImage">Sagemaker
     * API reference</a>.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    ContainerConfig& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entrypoint script for a Docker container used to run a training job. This
     * script takes precedence over the default train processing instructions. See How
     * Amazon SageMaker Runs Your Training Image for additional information. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Sagemaker runs your training image</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntrypoint() const { return m_entrypoint; }
    inline bool EntrypointHasBeenSet() const { return m_entrypointHasBeenSet; }
    template<typename EntrypointT = Aws::Vector<Aws::String>>
    void SetEntrypoint(EntrypointT&& value) { m_entrypointHasBeenSet = true; m_entrypoint = std::forward<EntrypointT>(value); }
    template<typename EntrypointT = Aws::Vector<Aws::String>>
    ContainerConfig& WithEntrypoint(EntrypointT&& value) { SetEntrypoint(std::forward<EntrypointT>(value)); return *this;}
    template<typename EntrypointT = Aws::String>
    ContainerConfig& AddEntrypoint(EntrypointT&& value) { m_entrypointHasBeenSet = true; m_entrypoint.emplace_back(std::forward<EntrypointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a training job. See How Amazon
     * SageMaker Runs Your Training Image for additional information. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Sagemaker runs your training image</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Vector<Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Vector<Aws::String>>
    ContainerConfig& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsT = Aws::String>
    ContainerConfig& AddArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace_back(std::forward<ArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon Web Services Clean
     * Rooms ML publishes each metric to all members' Amazon CloudWatch using IAM role
     * configured in <a>PutMLConfiguration</a>.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const { return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    void SetMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::forward<MetricDefinitionsT>(value); }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    ContainerConfig& WithMetricDefinitions(MetricDefinitionsT&& value) { SetMetricDefinitions(std::forward<MetricDefinitionsT>(value)); return *this;}
    template<typename MetricDefinitionsT = MetricDefinition>
    ContainerConfig& AddMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.emplace_back(std::forward<MetricDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_entrypoint;
    bool m_entrypointHasBeenSet = false;

    Aws::Vector<Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
