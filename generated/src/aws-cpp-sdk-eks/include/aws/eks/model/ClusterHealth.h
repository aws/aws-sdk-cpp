﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/ClusterIssue.h>
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
   * <p>An object representing the health of your Amazon EKS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ClusterHealth">AWS
   * API Reference</a></p>
   */
  class ClusterHealth
  {
  public:
    AWS_EKS_API ClusterHealth();
    AWS_EKS_API ClusterHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClusterHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object representing the health issues of your Amazon EKS cluster.</p>
     */
    inline const Aws::Vector<ClusterIssue>& GetIssues() const{ return m_issues; }
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
    inline void SetIssues(const Aws::Vector<ClusterIssue>& value) { m_issuesHasBeenSet = true; m_issues = value; }
    inline void SetIssues(Aws::Vector<ClusterIssue>&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }
    inline ClusterHealth& WithIssues(const Aws::Vector<ClusterIssue>& value) { SetIssues(value); return *this;}
    inline ClusterHealth& WithIssues(Aws::Vector<ClusterIssue>&& value) { SetIssues(std::move(value)); return *this;}
    inline ClusterHealth& AddIssues(const ClusterIssue& value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }
    inline ClusterHealth& AddIssues(ClusterIssue&& value) { m_issuesHasBeenSet = true; m_issues.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ClusterIssue> m_issues;
    bool m_issuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
