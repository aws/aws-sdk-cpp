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
    AWS_DETECTIVE_API UpdateInvestigationStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInvestigationState"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline UpdateInvestigationStateRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline UpdateInvestigationStateRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline UpdateInvestigationStateRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const Aws::String& value) { m_investigationIdHasBeenSet = true; m_investigationId = value; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(Aws::String&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::move(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const char* value) { m_investigationIdHasBeenSet = true; m_investigationId.assign(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline UpdateInvestigationStateRequest& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline UpdateInvestigationStateRequest& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline UpdateInvestigationStateRequest& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}


    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline UpdateInvestigationStateRequest& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline UpdateInvestigationStateRequest& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
