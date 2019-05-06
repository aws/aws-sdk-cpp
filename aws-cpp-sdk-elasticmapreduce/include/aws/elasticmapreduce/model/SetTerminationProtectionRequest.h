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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p> The input argument to the <a>TerminationProtection</a> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetTerminationProtectionInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API SetTerminationProtectionRequest : public EMRRequest
  {
  public:
    SetTerminationProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTerminationProtection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const{ return m_jobFlowIds; }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline void SetJobFlowIds(const Aws::Vector<Aws::String>& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = value; }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline void SetJobFlowIds(Aws::Vector<Aws::String>&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::move(value); }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline SetTerminationProtectionRequest& WithJobFlowIds(const Aws::Vector<Aws::String>& value) { SetJobFlowIds(value); return *this;}

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline SetTerminationProtectionRequest& WithJobFlowIds(Aws::Vector<Aws::String>&& value) { SetJobFlowIds(std::move(value)); return *this;}

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline SetTerminationProtectionRequest& AddJobFlowIds(const Aws::String& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline SetTerminationProtectionRequest& AddJobFlowIds(Aws::String&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline SetTerminationProtectionRequest& AddJobFlowIds(const char* value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }


    /**
     * <p>A Boolean that indicates whether to protect the cluster and prevent the
     * Amazon EC2 instances in the cluster from shutting down due to API calls, user
     * intervention, or job-flow error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }

    /**
     * <p>A Boolean that indicates whether to protect the cluster and prevent the
     * Amazon EC2 instances in the cluster from shutting down due to API calls, user
     * intervention, or job-flow error.</p>
     */
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }

    /**
     * <p>A Boolean that indicates whether to protect the cluster and prevent the
     * Amazon EC2 instances in the cluster from shutting down due to API calls, user
     * intervention, or job-flow error.</p>
     */
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }

    /**
     * <p>A Boolean that indicates whether to protect the cluster and prevent the
     * Amazon EC2 instances in the cluster from shutting down due to API calls, user
     * intervention, or job-flow error.</p>
     */
    inline SetTerminationProtectionRequest& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet;

    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
