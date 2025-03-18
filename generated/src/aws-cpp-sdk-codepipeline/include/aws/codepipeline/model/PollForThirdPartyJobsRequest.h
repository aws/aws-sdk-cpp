/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PollForThirdPartyJobs</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobsInput">AWS
   * API Reference</a></p>
   */
  class PollForThirdPartyJobsRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PollForThirdPartyJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForThirdPartyJobs"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const { return m_actionTypeId; }
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }
    template<typename ActionTypeIdT = ActionTypeId>
    void SetActionTypeId(ActionTypeIdT&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::forward<ActionTypeIdT>(value); }
    template<typename ActionTypeIdT = ActionTypeId>
    PollForThirdPartyJobsRequest& WithActionTypeId(ActionTypeIdT&& value) { SetActionTypeId(std::forward<ActionTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs to return in a poll for jobs call.</p>
     */
    inline int GetMaxBatchSize() const { return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline PollForThirdPartyJobsRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}
  private:

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet = false;

    int m_maxBatchSize{0};
    bool m_maxBatchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
