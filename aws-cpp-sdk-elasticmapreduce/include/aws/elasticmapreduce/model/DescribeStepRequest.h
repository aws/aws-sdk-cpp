/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which step to describe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStepInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API DescribeStepRequest : public EMRRequest
  {
  public:
    DescribeStepRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStep"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline DescribeStepRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline DescribeStepRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster with steps to describe.</p>
     */
    inline DescribeStepRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline DescribeStepRequest& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline DescribeStepRequest& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the step to describe.</p>
     */
    inline DescribeStepRequest& WithStepId(const char* value) { SetStepId(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
