/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains data processing unit (DPU) configuration settings and parameter
   * mappings for a notebook engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/EngineConfiguration">AWS
   * API Reference</a></p>
   */
  class EngineConfiguration
  {
  public:
    AWS_ATHENA_API EngineConfiguration();
    AWS_ATHENA_API EngineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API EngineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of DPUs to use for the coordinator. A coordinator is a special
     * executor that orchestrates processing work and manages other executors in a
     * notebook session.</p>
     */
    inline int GetCoordinatorDpuSize() const{ return m_coordinatorDpuSize; }

    /**
     * <p>The number of DPUs to use for the coordinator. A coordinator is a special
     * executor that orchestrates processing work and manages other executors in a
     * notebook session.</p>
     */
    inline bool CoordinatorDpuSizeHasBeenSet() const { return m_coordinatorDpuSizeHasBeenSet; }

    /**
     * <p>The number of DPUs to use for the coordinator. A coordinator is a special
     * executor that orchestrates processing work and manages other executors in a
     * notebook session.</p>
     */
    inline void SetCoordinatorDpuSize(int value) { m_coordinatorDpuSizeHasBeenSet = true; m_coordinatorDpuSize = value; }

    /**
     * <p>The number of DPUs to use for the coordinator. A coordinator is a special
     * executor that orchestrates processing work and manages other executors in a
     * notebook session.</p>
     */
    inline EngineConfiguration& WithCoordinatorDpuSize(int value) { SetCoordinatorDpuSize(value); return *this;}


    /**
     * <p>The maximum number of DPUs that can run concurrently.</p>
     */
    inline int GetMaxConcurrentDpus() const{ return m_maxConcurrentDpus; }

    /**
     * <p>The maximum number of DPUs that can run concurrently.</p>
     */
    inline bool MaxConcurrentDpusHasBeenSet() const { return m_maxConcurrentDpusHasBeenSet; }

    /**
     * <p>The maximum number of DPUs that can run concurrently.</p>
     */
    inline void SetMaxConcurrentDpus(int value) { m_maxConcurrentDpusHasBeenSet = true; m_maxConcurrentDpus = value; }

    /**
     * <p>The maximum number of DPUs that can run concurrently.</p>
     */
    inline EngineConfiguration& WithMaxConcurrentDpus(int value) { SetMaxConcurrentDpus(value); return *this;}


    /**
     * <p>The default number of DPUs to use for executors. An executor is the smallest
     * unit of compute that a notebook session can request from Athena.</p>
     */
    inline int GetDefaultExecutorDpuSize() const{ return m_defaultExecutorDpuSize; }

    /**
     * <p>The default number of DPUs to use for executors. An executor is the smallest
     * unit of compute that a notebook session can request from Athena.</p>
     */
    inline bool DefaultExecutorDpuSizeHasBeenSet() const { return m_defaultExecutorDpuSizeHasBeenSet; }

    /**
     * <p>The default number of DPUs to use for executors. An executor is the smallest
     * unit of compute that a notebook session can request from Athena.</p>
     */
    inline void SetDefaultExecutorDpuSize(int value) { m_defaultExecutorDpuSizeHasBeenSet = true; m_defaultExecutorDpuSize = value; }

    /**
     * <p>The default number of DPUs to use for executors. An executor is the smallest
     * unit of compute that a notebook session can request from Athena.</p>
     */
    inline EngineConfiguration& WithDefaultExecutorDpuSize(int value) { SetDefaultExecutorDpuSize(value); return *this;}


    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalConfigs() const{ return m_additionalConfigs; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline bool AdditionalConfigsHasBeenSet() const { return m_additionalConfigsHasBeenSet; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline void SetAdditionalConfigs(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs = value; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline void SetAdditionalConfigs(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs = std::move(value); }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& WithAdditionalConfigs(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalConfigs(value); return *this;}

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& WithAdditionalConfigs(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalConfigs(std::move(value)); return *this;}

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(const Aws::String& key, const Aws::String& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(key, value); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(Aws::String&& key, const Aws::String& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(const Aws::String& key, Aws::String&& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(Aws::String&& key, Aws::String&& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(const char* key, Aws::String&& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(Aws::String&& key, const char* value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Amazon S3 URI
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookFileURI</code> to <code>AdditionalConfigs</code> that has value of
     * the Amazon S3 URI.</p>
     */
    inline EngineConfiguration& AddAdditionalConfigs(const char* key, const char* value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(key, value); return *this; }

  private:

    int m_coordinatorDpuSize;
    bool m_coordinatorDpuSizeHasBeenSet = false;

    int m_maxConcurrentDpus;
    bool m_maxConcurrentDpusHasBeenSet = false;

    int m_defaultExecutorDpuSize;
    bool m_defaultExecutorDpuSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalConfigs;
    bool m_additionalConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
