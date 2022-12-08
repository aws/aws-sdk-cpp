/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Configuration information for Amazon SageMaker Debugger system monitoring,
   * framework profiling, and storage paths.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProfilerConfig">AWS
   * API Reference</a></p>
   */
  class ProfilerConfig
  {
  public:
    AWS_SAGEMAKER_API ProfilerConfig();
    AWS_SAGEMAKER_API ProfilerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProfilerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline ProfilerConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline ProfilerConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline ProfilerConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>A time interval for capturing system metrics in milliseconds. Available
     * values are 100, 200, 500, 1000 (1 second), 5000 (5 seconds), and 60000 (1
     * minute) milliseconds. The default value is 500 milliseconds.</p>
     */
    inline long long GetProfilingIntervalInMilliseconds() const{ return m_profilingIntervalInMilliseconds; }

    /**
     * <p>A time interval for capturing system metrics in milliseconds. Available
     * values are 100, 200, 500, 1000 (1 second), 5000 (5 seconds), and 60000 (1
     * minute) milliseconds. The default value is 500 milliseconds.</p>
     */
    inline bool ProfilingIntervalInMillisecondsHasBeenSet() const { return m_profilingIntervalInMillisecondsHasBeenSet; }

    /**
     * <p>A time interval for capturing system metrics in milliseconds. Available
     * values are 100, 200, 500, 1000 (1 second), 5000 (5 seconds), and 60000 (1
     * minute) milliseconds. The default value is 500 milliseconds.</p>
     */
    inline void SetProfilingIntervalInMilliseconds(long long value) { m_profilingIntervalInMillisecondsHasBeenSet = true; m_profilingIntervalInMilliseconds = value; }

    /**
     * <p>A time interval for capturing system metrics in milliseconds. Available
     * values are 100, 200, 500, 1000 (1 second), 5000 (5 seconds), and 60000 (1
     * minute) milliseconds. The default value is 500 milliseconds.</p>
     */
    inline ProfilerConfig& WithProfilingIntervalInMilliseconds(long long value) { SetProfilingIntervalInMilliseconds(value); return *this;}


    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProfilingParameters() const{ return m_profilingParameters; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline bool ProfilingParametersHasBeenSet() const { return m_profilingParametersHasBeenSet; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline void SetProfilingParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters = value; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline void SetProfilingParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters = std::move(value); }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& WithProfilingParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetProfilingParameters(value); return *this;}

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& WithProfilingParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetProfilingParameters(std::move(value)); return *this;}

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(const Aws::String& key, const Aws::String& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(key, value); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(Aws::String&& key, const Aws::String& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(const Aws::String& key, Aws::String&& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(Aws::String&& key, Aws::String&& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(const char* key, Aws::String&& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(Aws::String&& key, const char* value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline ProfilerConfig& AddProfilingParameters(const char* key, const char* value) { m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(key, value); return *this; }


    /**
     * <p>Configuration to turn off Amazon SageMaker Debugger's system monitoring and
     * profiling functionality. To turn it off, set to <code>True</code>.</p>
     */
    inline bool GetDisableProfiler() const{ return m_disableProfiler; }

    /**
     * <p>Configuration to turn off Amazon SageMaker Debugger's system monitoring and
     * profiling functionality. To turn it off, set to <code>True</code>.</p>
     */
    inline bool DisableProfilerHasBeenSet() const { return m_disableProfilerHasBeenSet; }

    /**
     * <p>Configuration to turn off Amazon SageMaker Debugger's system monitoring and
     * profiling functionality. To turn it off, set to <code>True</code>.</p>
     */
    inline void SetDisableProfiler(bool value) { m_disableProfilerHasBeenSet = true; m_disableProfiler = value; }

    /**
     * <p>Configuration to turn off Amazon SageMaker Debugger's system monitoring and
     * profiling functionality. To turn it off, set to <code>True</code>.</p>
     */
    inline ProfilerConfig& WithDisableProfiler(bool value) { SetDisableProfiler(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    long long m_profilingIntervalInMilliseconds;
    bool m_profilingIntervalInMillisecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_profilingParameters;
    bool m_profilingParametersHasBeenSet = false;

    bool m_disableProfiler;
    bool m_disableProfilerHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
