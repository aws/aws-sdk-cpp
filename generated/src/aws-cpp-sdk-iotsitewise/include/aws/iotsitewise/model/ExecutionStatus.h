/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ExecutionState.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The status of the execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExecutionStatus">AWS
   * API Reference</a></p>
   */
  class ExecutionStatus
  {
  public:
    AWS_IOTSITEWISE_API ExecutionStatus() = default;
    AWS_IOTSITEWISE_API ExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the computation model.</p>
     */
    inline ExecutionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ExecutionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ExecutionStatus& WithState(ExecutionState value) { SetState(value); return *this;}
    ///@}
  private:

    ExecutionState m_state{ExecutionState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
