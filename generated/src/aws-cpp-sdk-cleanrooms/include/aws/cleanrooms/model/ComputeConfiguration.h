/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/WorkerComputeConfiguration.h>
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
   * <p> The configuration of the compute resources for an analysis with the Spark
   * analytics engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeConfiguration
  {
  public:
    AWS_CLEANROOMS_API ComputeConfiguration();
    AWS_CLEANROOMS_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The worker configuration for the compute environment.</p>
     */
    inline const WorkerComputeConfiguration& GetWorker() const{ return m_worker; }
    inline bool WorkerHasBeenSet() const { return m_workerHasBeenSet; }
    inline void SetWorker(const WorkerComputeConfiguration& value) { m_workerHasBeenSet = true; m_worker = value; }
    inline void SetWorker(WorkerComputeConfiguration&& value) { m_workerHasBeenSet = true; m_worker = std::move(value); }
    inline ComputeConfiguration& WithWorker(const WorkerComputeConfiguration& value) { SetWorker(value); return *this;}
    inline ComputeConfiguration& WithWorker(WorkerComputeConfiguration&& value) { SetWorker(std::move(value)); return *this;}
    ///@}
  private:

    WorkerComputeConfiguration m_worker;
    bool m_workerHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
