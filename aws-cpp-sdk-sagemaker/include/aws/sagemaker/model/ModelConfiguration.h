/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EnvironmentParameter.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the model configuration. Includes the specification name and
   * environment parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelConfiguration
  {
  public:
    AWS_SAGEMAKER_API ModelConfiguration();
    AWS_SAGEMAKER_API ModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const{ return m_inferenceSpecificationName; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const Aws::String& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = value; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(Aws::String&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::move(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const char* value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName.assign(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ModelConfiguration& WithInferenceSpecificationName(const Aws::String& value) { SetInferenceSpecificationName(value); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ModelConfiguration& WithInferenceSpecificationName(Aws::String&& value) { SetInferenceSpecificationName(std::move(value)); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ModelConfiguration& WithInferenceSpecificationName(const char* value) { SetInferenceSpecificationName(value); return *this;}


    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetEnvironmentParameters() const{ return m_environmentParameters; }

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline bool EnvironmentParametersHasBeenSet() const { return m_environmentParametersHasBeenSet; }

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline void SetEnvironmentParameters(const Aws::Vector<EnvironmentParameter>& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = value; }

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline void SetEnvironmentParameters(Aws::Vector<EnvironmentParameter>&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = std::move(value); }

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline ModelConfiguration& WithEnvironmentParameters(const Aws::Vector<EnvironmentParameter>& value) { SetEnvironmentParameters(value); return *this;}

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline ModelConfiguration& WithEnvironmentParameters(Aws::Vector<EnvironmentParameter>&& value) { SetEnvironmentParameters(std::move(value)); return *this;}

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline ModelConfiguration& AddEnvironmentParameters(const EnvironmentParameter& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.push_back(value); return *this; }

    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline ModelConfiguration& AddEnvironmentParameters(EnvironmentParameter&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_environmentParameters;
    bool m_environmentParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
