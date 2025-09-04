/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobWorkerComputeConfiguration.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The configuration of the compute resources for a PySpark job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedJobComputeConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobComputeConfiguration() = default;
    AWS_CLEANROOMS_API ProtectedJobComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The worker configuration for the compute environment.</p>
     */
    inline const ProtectedJobWorkerComputeConfiguration& GetWorker() const { return m_worker; }
    inline bool WorkerHasBeenSet() const { return m_workerHasBeenSet; }
    template<typename WorkerT = ProtectedJobWorkerComputeConfiguration>
    void SetWorker(WorkerT&& value) { m_workerHasBeenSet = true; m_worker = std::forward<WorkerT>(value); }
    template<typename WorkerT = ProtectedJobWorkerComputeConfiguration>
    ProtectedJobComputeConfiguration& WithWorker(WorkerT&& value) { SetWorker(std::forward<WorkerT>(value)); return *this;}
    ///@}
  private:

    ProtectedJobWorkerComputeConfiguration m_worker;
    bool m_workerHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
