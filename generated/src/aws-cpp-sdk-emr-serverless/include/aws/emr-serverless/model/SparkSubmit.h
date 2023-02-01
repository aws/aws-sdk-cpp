/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configurations for the Spark submit job driver.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/SparkSubmit">AWS
   * API Reference</a></p>
   */
  class SparkSubmit
  {
  public:
    AWS_EMRSERVERLESS_API SparkSubmit();
    AWS_EMRSERVERLESS_API SparkSubmit(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API SparkSubmit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline const Aws::String& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline void SetEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline void SetEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline void SetEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.assign(value); }

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithEntryPoint(const Aws::String& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithEntryPoint(Aws::String&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>The entry point for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithEntryPoint(const char* value) { SetEntryPoint(value); return *this;}


    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPointArguments() const{ return m_entryPointArguments; }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline bool EntryPointArgumentsHasBeenSet() const { return m_entryPointArgumentsHasBeenSet; }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline void SetEntryPointArguments(const Aws::Vector<Aws::String>& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments = value; }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline void SetEntryPointArguments(Aws::Vector<Aws::String>&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments = std::move(value); }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithEntryPointArguments(const Aws::Vector<Aws::String>& value) { SetEntryPointArguments(value); return *this;}

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithEntryPointArguments(Aws::Vector<Aws::String>&& value) { SetEntryPointArguments(std::move(value)); return *this;}

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline SparkSubmit& AddEntryPointArguments(const Aws::String& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(value); return *this; }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline SparkSubmit& AddEntryPointArguments(Aws::String&& value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(std::move(value)); return *this; }

    /**
     * <p>The arguments for the Spark submit job run.</p>
     */
    inline SparkSubmit& AddEntryPointArguments(const char* value) { m_entryPointArgumentsHasBeenSet = true; m_entryPointArguments.push_back(value); return *this; }


    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline const Aws::String& GetSparkSubmitParameters() const{ return m_sparkSubmitParameters; }

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline bool SparkSubmitParametersHasBeenSet() const { return m_sparkSubmitParametersHasBeenSet; }

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline void SetSparkSubmitParameters(const Aws::String& value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters = value; }

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline void SetSparkSubmitParameters(Aws::String&& value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters = std::move(value); }

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline void SetSparkSubmitParameters(const char* value) { m_sparkSubmitParametersHasBeenSet = true; m_sparkSubmitParameters.assign(value); }

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithSparkSubmitParameters(const Aws::String& value) { SetSparkSubmitParameters(value); return *this;}

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithSparkSubmitParameters(Aws::String&& value) { SetSparkSubmitParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the Spark submit job run.</p>
     */
    inline SparkSubmit& WithSparkSubmitParameters(const char* value) { SetSparkSubmitParameters(value); return *this;}

  private:

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPointArguments;
    bool m_entryPointArgumentsHasBeenSet = false;

    Aws::String m_sparkSubmitParameters;
    bool m_sparkSubmitParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
