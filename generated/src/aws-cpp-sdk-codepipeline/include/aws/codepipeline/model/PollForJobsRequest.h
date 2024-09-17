/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PollForJobs</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForJobsInput">AWS
   * API Reference</a></p>
   */
  class PollForJobsRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PollForJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForJobs"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::move(value); }
    inline PollForJobsRequest& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}
    inline PollForJobsRequest& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs to return in a poll for jobs call.</p>
     */
    inline int GetMaxBatchSize() const{ return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline PollForJobsRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value are returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParam() const{ return m_queryParam; }
    inline bool QueryParamHasBeenSet() const { return m_queryParamHasBeenSet; }
    inline void SetQueryParam(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParamHasBeenSet = true; m_queryParam = value; }
    inline void SetQueryParam(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParamHasBeenSet = true; m_queryParam = std::move(value); }
    inline PollForJobsRequest& WithQueryParam(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParam(value); return *this;}
    inline PollForJobsRequest& WithQueryParam(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParam(std::move(value)); return *this;}
    inline PollForJobsRequest& AddQueryParam(const Aws::String& key, const Aws::String& value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(key, value); return *this; }
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, const Aws::String& value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(std::move(key), value); return *this; }
    inline PollForJobsRequest& AddQueryParam(const Aws::String& key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(key, std::move(value)); return *this; }
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(std::move(key), std::move(value)); return *this; }
    inline PollForJobsRequest& AddQueryParam(const char* key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(key, std::move(value)); return *this; }
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, const char* value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(std::move(key), value); return *this; }
    inline PollForJobsRequest& AddQueryParam(const char* key, const char* value) { m_queryParamHasBeenSet = true; m_queryParam.emplace(key, value); return *this; }
    ///@}
  private:

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet = false;

    int m_maxBatchSize;
    bool m_maxBatchSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParam;
    bool m_queryParamHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
