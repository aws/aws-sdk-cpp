/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains input information for a canary run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunConfigInput">AWS
   * API Reference</a></p>
   */
  class CanaryRunConfigInput
  {
  public:
    AWS_SYNTHETICS_API CanaryRunConfigInput();
    AWS_SYNTHETICS_API CanaryRunConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline CanaryRunConfigInput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const{ return m_memoryInMB; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline CanaryRunConfigInput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}


    /**
     * <p>Specifies whether this canary is to use active X-Ray tracing when it runs.
     * Active tracing enables this canary run to be displayed in the ServiceLens and
     * X-Ray service maps even if the canary does not hit an endpoint that has X-Ray
     * tracing enabled. Using X-Ray tracing incurs charges. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline bool GetActiveTracing() const{ return m_activeTracing; }

    /**
     * <p>Specifies whether this canary is to use active X-Ray tracing when it runs.
     * Active tracing enables this canary run to be displayed in the ServiceLens and
     * X-Ray service maps even if the canary does not hit an endpoint that has X-Ray
     * tracing enabled. Using X-Ray tracing incurs charges. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline bool ActiveTracingHasBeenSet() const { return m_activeTracingHasBeenSet; }

    /**
     * <p>Specifies whether this canary is to use active X-Ray tracing when it runs.
     * Active tracing enables this canary run to be displayed in the ServiceLens and
     * X-Ray service maps even if the canary does not hit an endpoint that has X-Ray
     * tracing enabled. Using X-Ray tracing incurs charges. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline void SetActiveTracing(bool value) { m_activeTracingHasBeenSet = true; m_activeTracing = value; }

    /**
     * <p>Specifies whether this canary is to use active X-Ray tracing when it runs.
     * Active tracing enables this canary run to be displayed in the ServiceLens and
     * X-Ray service maps even if the canary does not hit an endpoint that has X-Ray
     * tracing enabled. Using X-Ray tracing incurs charges. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline CanaryRunConfigInput& WithActiveTracing(bool value) { SetActiveTracing(value); return *this;}


    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>The environment variables
     * keys and values are not encrypted. Do not store sensitive information in this
     * field.</p> 
     */
    inline CanaryRunConfigInput& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_memoryInMB;
    bool m_memoryInMBHasBeenSet = false;

    bool m_activeTracing;
    bool m_activeTracingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
