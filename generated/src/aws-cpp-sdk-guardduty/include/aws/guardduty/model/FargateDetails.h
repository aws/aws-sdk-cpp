/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ManagementType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about Amazon Web Services Fargate details associated
   * with an Amazon ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FargateDetails">AWS
   * API Reference</a></p>
   */
  class FargateDetails
  {
  public:
    AWS_GUARDDUTY_API FargateDetails() = default;
    AWS_GUARDDUTY_API FargateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FargateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssues() const { return m_issues; }
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
    template<typename IssuesT = Aws::Vector<Aws::String>>
    void SetIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues = std::forward<IssuesT>(value); }
    template<typename IssuesT = Aws::Vector<Aws::String>>
    FargateDetails& WithIssues(IssuesT&& value) { SetIssues(std::forward<IssuesT>(value)); return *this;}
    template<typename IssuesT = Aws::String>
    FargateDetails& AddIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues.emplace_back(std::forward<IssuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline ManagementType GetManagementType() const { return m_managementType; }
    inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }
    inline void SetManagementType(ManagementType value) { m_managementTypeHasBeenSet = true; m_managementType = value; }
    inline FargateDetails& WithManagementType(ManagementType value) { SetManagementType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_issues;
    bool m_issuesHasBeenSet = false;

    ManagementType m_managementType{ManagementType::NOT_SET};
    bool m_managementTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
