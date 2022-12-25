/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Issue.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the health status of the node group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupHealth">AWS
   * API Reference</a></p>
   */
  class NodegroupHealth
  {
  public:
    AWS_EKS_API NodegroupHealth();
    AWS_EKS_API NodegroupHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodegroupHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline const Aws::Vector<Issue>& GetIssues() const{ return m_issues; }

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline void SetIssues(const Aws::Vector<Issue>& value) { m_issuesHasBeenSet = true; m_issues = value; }

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline void SetIssues(Aws::Vector<Issue>&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline NodegroupHealth& WithIssues(const Aws::Vector<Issue>& value) { SetIssues(value); return *this;}

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline NodegroupHealth& WithIssues(Aws::Vector<Issue>&& value) { SetIssues(std::move(value)); return *this;}

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline NodegroupHealth& AddIssues(const Issue& value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }

    /**
     * <p>Any issues that are associated with the node group. </p>
     */
    inline NodegroupHealth& AddIssues(Issue&& value) { m_issuesHasBeenSet = true; m_issues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Issue> m_issues;
    bool m_issuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
