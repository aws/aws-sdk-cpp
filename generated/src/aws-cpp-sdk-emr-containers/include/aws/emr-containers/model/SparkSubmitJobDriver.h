/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The information about job driver for Spark submit.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SparkSubmitJobDriver">AWS
   * API Reference</a></p>
   */
  class SparkSubmitJobDriver
  {
  public:
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver() = default;
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entry point of job application.</p>
     */
    inline const Aws::String& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::String>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::String>
    SparkSubmitJobDriver& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arguments for job application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPointArguments() const { return m_entryPointArguments; }
    inline bool EntryPointArgumentsHasBeenSet() const { return m_entryPointArgumentsHasBeenSet; }
    template<typename EntryPointArgumentsT = Aws::Vector<Aws::String>>
    void SetEntryPointArguments(EntryPointArgumentsT&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments = std::forward<EntryPointArgumentsT>(value); }
    template<typename EntryPointArgumentsT = Aws::Vector<Aws::String>>
    SparkSubmitJobDriver& WithEntryPointArguments(EntryPointArgumentsT&& value) { SetEntryPointArguments(std::forward<EntryPointArgumentsT>(value)); return *this;}
    template<typename EntryPointArgumentsT = Aws::String>
    SparkSubmitJobDriver& AddEntryPointArguments(EntryPointArgumentsT&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.emplace_back(std::forward<EntryPointArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Spark submit parameters that are used for job runs.</p>
     */
    inline const Aws::String& GetSparkSubmitParameters() const { return m_sparkSubmitParameters; }
    inline bool SparkSubmitParametersHasBeenSet() const { return m_sparkSubmitParametersHasBeenSet; }
    template<typename SparkSubmitParametersT = Aws::String>
    void SetSparkSubmitParameters(SparkSubmitParametersT&& value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters = std::forward<SparkSubmitParametersT>(value); }
    template<typename SparkSubmitParametersT = Aws::String>
    SparkSubmitJobDriver& WithSparkSubmitParameters(SparkSubmitParametersT&& value) { SetSparkSubmitParameters(std::forward<SparkSubmitParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPointArguments;
    bool m_entryPointArgumentsHasBeenSet = false;

    Aws::String m_sparkSubmitParameters;
    bool m_sparkSubmitParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
