/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/State.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class UpdateInvestigationStateRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API UpdateInvestigationStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInvestigationState"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    UpdateInvestigationStateRequest& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
    template<typename InvestigationIdT = Aws::String>
    void SetInvestigationId(InvestigationIdT&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::forward<InvestigationIdT>(value); }
    template<typename InvestigationIdT = Aws::String>
    UpdateInvestigationStateRequest& WithInvestigationId(InvestigationIdT&& value) { SetInvestigationId(std::forward<InvestigationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateInvestigationStateRequest& WithState(State value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
