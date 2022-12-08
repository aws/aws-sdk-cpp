/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonIssue.h>
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
   * <p>The health of the add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonHealth">AWS API
   * Reference</a></p>
   */
  class AddonHealth
  {
  public:
    AWS_EKS_API AddonHealth();
    AWS_EKS_API AddonHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline const Aws::Vector<AddonIssue>& GetIssues() const{ return m_issues; }

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline void SetIssues(const Aws::Vector<AddonIssue>& value) { m_issuesHasBeenSet = true; m_issues = value; }

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline void SetIssues(Aws::Vector<AddonIssue>&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline AddonHealth& WithIssues(const Aws::Vector<AddonIssue>& value) { SetIssues(value); return *this;}

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline AddonHealth& WithIssues(Aws::Vector<AddonIssue>&& value) { SetIssues(std::move(value)); return *this;}

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline AddonHealth& AddIssues(const AddonIssue& value) { m_issuesHasBeenSet = true; m_issues.push_back(value); return *this; }

    /**
     * <p>An object representing the health issues for an add-on.</p>
     */
    inline AddonHealth& AddIssues(AddonIssue&& value) { m_issuesHasBeenSet = true; m_issues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AddonIssue> m_issues;
    bool m_issuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
