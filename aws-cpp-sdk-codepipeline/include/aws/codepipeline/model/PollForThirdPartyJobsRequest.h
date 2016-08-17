/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionTypeId.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a poll for third party jobs action.</p>
   */
  class AWS_CODEPIPELINE_API PollForThirdPartyJobsRequest : public CodePipelineRequest
  {
  public:
    PollForThirdPartyJobsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline PollForThirdPartyJobsRequest& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    
    inline PollForThirdPartyJobsRequest& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(value); return *this;}

    /**
     * <p>The maximum number of jobs to return in a poll for jobs call.</p>
     */
    inline int GetMaxBatchSize() const{ return m_maxBatchSize; }

    /**
     * <p>The maximum number of jobs to return in a poll for jobs call.</p>
     */
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }

    /**
     * <p>The maximum number of jobs to return in a poll for jobs call.</p>
     */
    inline PollForThirdPartyJobsRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}

  private:
    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet;
    int m_maxBatchSize;
    bool m_maxBatchSizeHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
