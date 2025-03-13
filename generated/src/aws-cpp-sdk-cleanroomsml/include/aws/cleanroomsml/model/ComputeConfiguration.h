/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/WorkerComputeConfiguration.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides configuration information for the instances that will perform the
   * compute work.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeConfiguration
  {
  public:
    AWS_CLEANROOMSML_API ComputeConfiguration() = default;
    AWS_CLEANROOMSML_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The worker instances that will perform the compute work.</p>
     */
    inline const WorkerComputeConfiguration& GetWorker() const { return m_worker; }
    inline bool WorkerHasBeenSet() const { return m_workerHasBeenSet; }
    template<typename WorkerT = WorkerComputeConfiguration>
    void SetWorker(WorkerT&& value) { m_workerHasBeenSet = true; m_worker = std::forward<WorkerT>(value); }
    template<typename WorkerT = WorkerComputeConfiguration>
    ComputeConfiguration& WithWorker(WorkerT&& value) { SetWorker(std::forward<WorkerT>(value)); return *this;}
    ///@}
  private:

    WorkerComputeConfiguration m_worker;
    bool m_workerHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
