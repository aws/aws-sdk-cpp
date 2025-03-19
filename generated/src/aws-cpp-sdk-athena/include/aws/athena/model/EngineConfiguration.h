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
    AWS_ATHENA_API EngineConfiguration() = default;
    AWS_ATHENA_API EngineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API EngineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of DPUs to use for the coordinator. A coordinator is a special
     * executor that orchestrates processing work and manages other executors in a
     * notebook session. The default is 1.</p>
     */
    inline int GetCoordinatorDpuSize() const { return m_coordinatorDpuSize; }
    inline bool CoordinatorDpuSizeHasBeenSet() const { return m_coordinatorDpuSizeHasBeenSet; }
    inline void SetCoordinatorDpuSize(int value) { m_coordinatorDpuSizeHasBeenSet = true; m_coordinatorDpuSize = value; }
    inline EngineConfiguration& WithCoordinatorDpuSize(int value) { SetCoordinatorDpuSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of DPUs that can run concurrently.</p>
     */
    inline int GetMaxConcurrentDpus() const { return m_maxConcurrentDpus; }
    inline bool MaxConcurrentDpusHasBeenSet() const { return m_maxConcurrentDpusHasBeenSet; }
    inline void SetMaxConcurrentDpus(int value) { m_maxConcurrentDpusHasBeenSet = true; m_maxConcurrentDpus = value; }
    inline EngineConfiguration& WithMaxConcurrentDpus(int value) { SetMaxConcurrentDpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of DPUs to use for executors. An executor is the smallest
     * unit of compute that a notebook session can request from Athena. The default is
     * 1.</p>
     */
    inline int GetDefaultExecutorDpuSize() const { return m_defaultExecutorDpuSize; }
    inline bool DefaultExecutorDpuSizeHasBeenSet() const { return m_defaultExecutorDpuSizeHasBeenSet; }
    inline void SetDefaultExecutorDpuSize(int value) { m_defaultExecutorDpuSizeHasBeenSet = true; m_defaultExecutorDpuSize = value; }
    inline EngineConfiguration& WithDefaultExecutorDpuSize(int value) { SetDefaultExecutorDpuSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional notebook engine <code>MAP&lt;string, string&gt;</code>
     * parameter mappings in the form of key-value pairs. To specify an Athena notebook
     * that the Jupyter server will download and serve, specify a value for the
     * <a>StartSessionRequest$NotebookVersion</a> field, and then add a key named
     * <code>NotebookId</code> to <code>AdditionalConfigs</code> that has the value of
     * the Athena notebook ID.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalConfigs() const { return m_additionalConfigs; }
    inline bool AdditionalConfigsHasBeenSet() const { return m_additionalConfigsHasBeenSet; }
    template<typename AdditionalConfigsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalConfigs(AdditionalConfigsT&& value) { m_additionalConfigsHasBeenSet = true; m_additionalConfigs = std::forward<AdditionalConfigsT>(value); }
    template<typename AdditionalConfigsT = Aws::Map<Aws::String, Aws::String>>
    EngineConfiguration& WithAdditionalConfigs(AdditionalConfigsT&& value) { SetAdditionalConfigs(std::forward<AdditionalConfigsT>(value)); return *this;}
    template<typename AdditionalConfigsKeyT = Aws::String, typename AdditionalConfigsValueT = Aws::String>
    EngineConfiguration& AddAdditionalConfigs(AdditionalConfigsKeyT&& key, AdditionalConfigsValueT&& value) {
      m_additionalConfigsHasBeenSet = true; m_additionalConfigs.emplace(std::forward<AdditionalConfigsKeyT>(key), std::forward<AdditionalConfigsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies custom jar files and Spark properties for use cases like cluster
     * encryption, table formats, and general Spark tuning.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const { return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetSparkProperties(SparkPropertiesT&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::forward<SparkPropertiesT>(value); }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    EngineConfiguration& WithSparkProperties(SparkPropertiesT&& value) { SetSparkProperties(std::forward<SparkPropertiesT>(value)); return *this;}
    template<typename SparkPropertiesKeyT = Aws::String, typename SparkPropertiesValueT = Aws::String>
    EngineConfiguration& AddSparkProperties(SparkPropertiesKeyT&& key, SparkPropertiesValueT&& value) {
      m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::forward<SparkPropertiesKeyT>(key), std::forward<SparkPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_coordinatorDpuSize{0};
    bool m_coordinatorDpuSizeHasBeenSet = false;

    int m_maxConcurrentDpus{0};
    bool m_maxConcurrentDpusHasBeenSet = false;

    int m_defaultExecutorDpuSize{0};
    bool m_defaultExecutorDpuSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalConfigs;
    bool m_additionalConfigsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sparkProperties;
    bool m_sparkPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
