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
    AWS_CLEANROOMSML_API ContainerConfig();
    AWS_CLEANROOMSML_API ContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registry path of the docker image that contains the algorithm. Clean
     * Rooms ML supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repositry[@digest]</code> image path formats. For more
     * information about using images in Clean Rooms ML, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AlgorithmSpecification.html#sagemaker-Type-AlgorithmSpecification-TrainingImage">Sagemaker
     * API reference</a>.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline ContainerConfig& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline ContainerConfig& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline ContainerConfig& WithImageUri(const char* value) { SetImageUri(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetEntrypoint() const{ return m_entrypoint; }
    inline bool EntrypointHasBeenSet() const { return m_entrypointHasBeenSet; }
    inline void SetEntrypoint(const Aws::Vector<Aws::String>& value) { m_entrypointHasBeenSet = true; m_entrypoint = value; }
    inline void SetEntrypoint(Aws::Vector<Aws::String>&& value) { m_entrypointHasBeenSet = true; m_entrypoint = std::move(value); }
    inline ContainerConfig& WithEntrypoint(const Aws::Vector<Aws::String>& value) { SetEntrypoint(value); return *this;}
    inline ContainerConfig& WithEntrypoint(Aws::Vector<Aws::String>&& value) { SetEntrypoint(std::move(value)); return *this;}
    inline ContainerConfig& AddEntrypoint(const Aws::String& value) { m_entrypointHasBeenSet = true; m_entrypoint.push_back(value); return *this; }
    inline ContainerConfig& AddEntrypoint(Aws::String&& value) { m_entrypointHasBeenSet = true; m_entrypoint.push_back(std::move(value)); return *this; }
    inline ContainerConfig& AddEntrypoint(const char* value) { m_entrypointHasBeenSet = true; m_entrypoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a training job. See How Amazon
     * SageMaker Runs Your Training Image for additional information. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Sagemaker runs your training image</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArguments() const{ return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    inline void SetArguments(const Aws::Vector<Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }
    inline void SetArguments(Aws::Vector<Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }
    inline ContainerConfig& WithArguments(const Aws::Vector<Aws::String>& value) { SetArguments(value); return *this;}
    inline ContainerConfig& WithArguments(Aws::Vector<Aws::String>&& value) { SetArguments(std::move(value)); return *this;}
    inline ContainerConfig& AddArguments(const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.push_back(value); return *this; }
    inline ContainerConfig& AddArguments(Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.push_back(std::move(value)); return *this; }
    inline ContainerConfig& AddArguments(const char* value) { m_argumentsHasBeenSet = true; m_arguments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon Web Services Clean
     * Rooms ML publishes each metric to all members' Amazon CloudWatch using IAM role
     * configured in <a>PutMLConfiguration</a>.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }
    inline ContainerConfig& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}
    inline ContainerConfig& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}
    inline ContainerConfig& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }
    inline ContainerConfig& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }
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
