/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about the health of Amazon Web Services resources in your
   * account that are specified by an Amazon Web Services CloudFormation stack.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudFormationHealth">AWS
   * API Reference</a></p>
   */
  class CloudFormationHealth
  {
  public:
    AWS_DEVOPSGURU_API CloudFormationHealth() = default;
    AWS_DEVOPSGURU_API CloudFormationHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudFormationHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the CloudFormation stack. </p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    CloudFormationHealth& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the health of the Amazon Web Services resources in your
     * account that are specified by an Amazon Web Services CloudFormation stack,
     * including the number of open proactive, open reactive insights, and the Mean
     * Time to Recover (MTTR) of closed insights. </p>
     */
    inline const InsightHealth& GetInsight() const { return m_insight; }
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }
    template<typename InsightT = InsightHealth>
    void SetInsight(InsightT&& value) { m_insightHasBeenSet = true; m_insight = std::forward<InsightT>(value); }
    template<typename InsightT = InsightHealth>
    CloudFormationHealth& WithInsight(InsightT&& value) { SetInsight(std::forward<InsightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Number of resources that DevOps Guru is monitoring in your account that are
     * specified by an Amazon Web Services CloudFormation stack. </p>
     */
    inline long long GetAnalyzedResourceCount() const { return m_analyzedResourceCount; }
    inline bool AnalyzedResourceCountHasBeenSet() const { return m_analyzedResourceCountHasBeenSet; }
    inline void SetAnalyzedResourceCount(long long value) { m_analyzedResourceCountHasBeenSet = true; m_analyzedResourceCount = value; }
    inline CloudFormationHealth& WithAnalyzedResourceCount(long long value) { SetAnalyzedResourceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    InsightHealth m_insight;
    bool m_insightHasBeenSet = false;

    long long m_analyzedResourceCount{0};
    bool m_analyzedResourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
