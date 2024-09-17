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
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver();
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SparkSubmitJobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entry point of job application.</p>
     */
    inline const Aws::String& GetEntryPoint() const{ return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    inline void SetEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }
    inline void SetEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }
    inline void SetEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.assign(value); }
    inline SparkSubmitJobDriver& WithEntryPoint(const Aws::String& value) { SetEntryPoint(value); return *this;}
    inline SparkSubmitJobDriver& WithEntryPoint(Aws::String&& value) { SetEntryPoint(std::move(value)); return *this;}
    inline SparkSubmitJobDriver& WithEntryPoint(const char* value) { SetEntryPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arguments for job application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPointArguments() const{ return m_entryPointArguments; }
    inline bool EntryPointArgumentsHasBeenSet() const { return m_entryPointArgumentsHasBeenSet; }
    inline void SetEntryPointArguments(const Aws::Vector<Aws::String>& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments = value; }
    inline void SetEntryPointArguments(Aws::Vector<Aws::String>&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments = std::move(value); }
    inline SparkSubmitJobDriver& WithEntryPointArguments(const Aws::Vector<Aws::String>& value) { SetEntryPointArguments(value); return *this;}
    inline SparkSubmitJobDriver& WithEntryPointArguments(Aws::Vector<Aws::String>&& value) { SetEntryPointArguments(std::move(value)); return *this;}
    inline SparkSubmitJobDriver& AddEntryPointArguments(const Aws::String& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(value); return *this; }
    inline SparkSubmitJobDriver& AddEntryPointArguments(Aws::String&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(std::move(value)); return *this; }
    inline SparkSubmitJobDriver& AddEntryPointArguments(const char* value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Spark submit parameters that are used for job runs.</p>
     */
    inline const Aws::String& GetSparkSubmitParameters() const{ return m_sparkSubmitParameters; }
    inline bool SparkSubmitParametersHasBeenSet() const { return m_sparkSubmitParametersHasBeenSet; }
    inline void SetSparkSubmitParameters(const Aws::String& value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters = value; }
    inline void SetSparkSubmitParameters(Aws::String&& value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters = std::move(value); }
    inline void SetSparkSubmitParameters(const char* value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters.assign(value); }
    inline SparkSubmitJobDriver& WithSparkSubmitParameters(const Aws::String& value) { SetSparkSubmitParameters(value); return *this;}
    inline SparkSubmitJobDriver& WithSparkSubmitParameters(Aws::String&& value) { SetSparkSubmitParameters(std::move(value)); return *this;}
    inline SparkSubmitJobDriver& WithSparkSubmitParameters(const char* value) { SetSparkSubmitParameters(value); return *this;}
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
