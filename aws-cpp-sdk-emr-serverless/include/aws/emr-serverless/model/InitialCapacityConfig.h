/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/WorkerResourceConfig.h>
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
   * <p>The initial capacity configuration per worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/InitialCapacityConfig">AWS
   * API Reference</a></p>
   */
  class InitialCapacityConfig
  {
  public:
    AWS_EMRSERVERLESS_API InitialCapacityConfig();
    AWS_EMRSERVERLESS_API InitialCapacityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API InitialCapacityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of workers in the initial capacity configuration.</p>
     */
    inline long long GetWorkerCount() const{ return m_workerCount; }

    /**
     * <p>The number of workers in the initial capacity configuration.</p>
     */
    inline bool WorkerCountHasBeenSet() const { return m_workerCountHasBeenSet; }

    /**
     * <p>The number of workers in the initial capacity configuration.</p>
     */
    inline void SetWorkerCount(long long value) { m_workerCountHasBeenSet = true; m_workerCount = value; }

    /**
     * <p>The number of workers in the initial capacity configuration.</p>
     */
    inline InitialCapacityConfig& WithWorkerCount(long long value) { SetWorkerCount(value); return *this;}


    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline const WorkerResourceConfig& GetWorkerConfiguration() const{ return m_workerConfiguration; }

    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }

    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline void SetWorkerConfiguration(const WorkerResourceConfig& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = value; }

    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline void SetWorkerConfiguration(WorkerResourceConfig&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::move(value); }

    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline InitialCapacityConfig& WithWorkerConfiguration(const WorkerResourceConfig& value) { SetWorkerConfiguration(value); return *this;}

    /**
     * <p>The resource configuration of the initial capacity configuration.</p>
     */
    inline InitialCapacityConfig& WithWorkerConfiguration(WorkerResourceConfig&& value) { SetWorkerConfiguration(std::move(value)); return *this;}

  private:

    long long m_workerCount;
    bool m_workerCountHasBeenSet = false;

    WorkerResourceConfig m_workerConfiguration;
    bool m_workerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
