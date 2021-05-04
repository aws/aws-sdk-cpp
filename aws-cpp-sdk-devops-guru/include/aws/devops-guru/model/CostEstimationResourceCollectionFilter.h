/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCostEstimationResourceCollectionFilter.h>
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
   * <p>Information about a filter used to specify which AWS resources are analyzed
   * to create a monthly DevOps Guru cost estimate. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
   * your Amazon DevOps Guru costs</a> and <a
   * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
   * pricing</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CostEstimationResourceCollectionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API CostEstimationResourceCollectionFilter
  {
  public:
    CostEstimationResourceCollectionFilter();
    CostEstimationResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    CostEstimationResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline const CloudFormationCostEstimationResourceCollectionFilter& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline void SetCloudFormation(const CloudFormationCostEstimationResourceCollectionFilter& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline void SetCloudFormation(CloudFormationCostEstimationResourceCollectionFilter&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline CostEstimationResourceCollectionFilter& WithCloudFormation(const CloudFormationCostEstimationResourceCollectionFilter& value) { SetCloudFormation(value); return *this;}

    /**
     * <p>An object that specifies the CloudFormation stack that defines the AWS
     * resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline CostEstimationResourceCollectionFilter& WithCloudFormation(CloudFormationCostEstimationResourceCollectionFilter&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationCostEstimationResourceCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
