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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a poll for jobs action.</p>
   */
  class AWS_CODEPIPELINE_API PollForJobsRequest : public CodePipelineRequest
  {
  public:
    PollForJobsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline PollForJobsRequest& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    
    inline PollForJobsRequest& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(value); return *this;}

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
    inline PollForJobsRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParam() const{ return m_queryParam; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline void SetQueryParam(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParamHasBeenSet = true; m_queryParam = value; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline void SetQueryParam(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParamHasBeenSet = true; m_queryParam = value; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& WithQueryParam(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParam(value); return *this;}

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& WithQueryParam(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParam(value); return *this;}

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(const Aws::String& key, const Aws::String& value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, const Aws::String& value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(const Aws::String& key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(const char* key, Aws::String&& value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(Aws::String&& key, const char* value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

    /**
     * <p>A map of property names and values. For an action type with no queryable
     * properties, this value must be null or an empty map. For an action type with a
     * queryable property, you must supply that property as a key in the map. Only jobs
     * whose action configuration matches the mapped value will be returned.</p>
     */
    inline PollForJobsRequest& AddQueryParam(const char* key, const char* value) { m_queryParamHasBeenSet = true; m_queryParam[key] = value; return *this; }

  private:
    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet;
    int m_maxBatchSize;
    bool m_maxBatchSizeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_queryParam;
    bool m_queryParamHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
