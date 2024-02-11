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
    AWS_GUARDDUTY_API FargateDetails();
    AWS_GUARDDUTY_API FargateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FargateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssues() const{ return m_issues; }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline void SetIssues(const Aws::Vector<Aws::String>& value) { m_issuesHasBeenSet = true; m_issues = value; }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline void SetIssues(Aws::Vector<Aws::String>&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline FargateDetails& WithIssues(const Aws::Vector<Aws::String>& value) { SetIssues(value); return *this;}

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline FargateDetails& WithIssues(Aws::Vector<Aws::String>&& value) { SetIssues(std::move(value)); return *this;}

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline FargateDetails& AddIssues(const Aws::String& value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline FargateDetails& AddIssues(Aws::String&& value) { m_issuesHasBeenSet = true; m_issues.push_back(std::move(value)); return *this; }

    /**
     * <p>Runtime coverage issues identified for the resource running on Amazon Web
     * Services Fargate.</p>
     */
    inline FargateDetails& AddIssues(const char* value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }


    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline const ManagementType& GetManagementType() const{ return m_managementType; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline void SetManagementType(const ManagementType& value) { m_managementTypeHasBeenSet = true; m_managementType = value; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline void SetManagementType(ManagementType&& value) { m_managementTypeHasBeenSet = true; m_managementType = std::move(value); }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline FargateDetails& WithManagementType(const ManagementType& value) { SetManagementType(value); return *this;}

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>DISABLED</code>
     * indicates that the deployment of the GuardDuty security agent is disabled for
     * this resource.</p> </li> </ul>  <p>The <code>MANUAL</code> status doesn't
     * apply to the Amazon Web Services Fargate (Amazon ECS only) woprkloads.</p>
     * 
     */
    inline FargateDetails& WithManagementType(ManagementType&& value) { SetManagementType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_issues;
    bool m_issuesHasBeenSet = false;

    ManagementType m_managementType;
    bool m_managementTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
