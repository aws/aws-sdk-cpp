/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/FargateProfileIssue.h>
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
   * <p>The health status of the Fargate profile. If there are issues with your
   * Fargate profile's health, they are listed here.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/FargateProfileHealth">AWS
   * API Reference</a></p>
   */
  class FargateProfileHealth
  {
  public:
    AWS_EKS_API FargateProfileHealth() = default;
    AWS_EKS_API FargateProfileHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfileHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Any issues that are associated with the Fargate profile.</p>
     */
    inline const Aws::Vector<FargateProfileIssue>& GetIssues() const { return m_issues; }
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
    template<typename IssuesT = Aws::Vector<FargateProfileIssue>>
    void SetIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues = std::forward<IssuesT>(value); }
    template<typename IssuesT = Aws::Vector<FargateProfileIssue>>
    FargateProfileHealth& WithIssues(IssuesT&& value) { SetIssues(std::forward<IssuesT>(value)); return *this;}
    template<typename IssuesT = FargateProfileIssue>
    FargateProfileHealth& AddIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues.emplace_back(std::forward<IssuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FargateProfileIssue> m_issues;
    bool m_issuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
