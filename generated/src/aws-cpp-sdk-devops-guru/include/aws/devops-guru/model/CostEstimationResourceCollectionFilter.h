/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCostEstimationResourceCollectionFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/TagCostEstimationResourceCollectionFilter.h>
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
   * <p>Information about a filter used to specify which Amazon Web Services
   * resources are analyzed to create a monthly DevOps Guru cost estimate. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
   * your Amazon DevOps Guru costs</a> and <a
   * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
   * pricing</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CostEstimationResourceCollectionFilter">AWS
   * API Reference</a></p>
   */
  class CostEstimationResourceCollectionFilter
  {
  public:
    AWS_DEVOPSGURU_API CostEstimationResourceCollectionFilter() = default;
    AWS_DEVOPSGURU_API CostEstimationResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CostEstimationResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies the CloudFormation stack that defines the Amazon Web
     * Services resources used to create a monthly estimate for DevOps Guru.</p>
     */
    inline const CloudFormationCostEstimationResourceCollectionFilter& GetCloudFormation() const { return m_cloudFormation; }
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
    template<typename CloudFormationT = CloudFormationCostEstimationResourceCollectionFilter>
    void SetCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::forward<CloudFormationT>(value); }
    template<typename CloudFormationT = CloudFormationCostEstimationResourceCollectionFilter>
    CostEstimationResourceCollectionFilter& WithCloudFormation(CloudFormationT&& value) { SetCloudFormation(std::forward<CloudFormationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services tags used to filter the resource collection that is
     * used for a cost estimate.</p> <p>Tags help you identify and organize your Amazon
     * Web Services resources. Many Amazon Web Services services support tagging, so
     * you can assign the same tag to resources from different services to indicate
     * that the resources are related. For example, you can assign the same tag to an
     * Amazon DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://docs.aws.amazon.com/whitepapers/latest/tagging-best-practices/tagging-best-practices.html">Tagging
     * best practices</a> whitepaper. </p> <p>Each Amazon Web Services tag has two
     * parts. </p> <ul> <li> <p>A tag <i>key</i> (for example, <code>CostCenter</code>,
     * <code>Environment</code>, <code>Project</code>, or <code>Secret</code>). Tag
     * <i>keys</i> are case-sensitive.</p> </li> <li> <p>An optional field known as a
     * tag <i>value</i> (for example, <code>111122223333</code>,
     * <code>Production</code>, or a team name). Omitting the tag <i>value</i> is the
     * same as using an empty string. Like tag <i>keys</i>, tag <i>values</i> are
     * case-sensitive.</p> </li> </ul> <p>Together these are known as
     * <i>key</i>-<i>value</i> pairs.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline const Aws::Vector<TagCostEstimationResourceCollectionFilter>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagCostEstimationResourceCollectionFilter>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagCostEstimationResourceCollectionFilter>>
    CostEstimationResourceCollectionFilter& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagCostEstimationResourceCollectionFilter>
    CostEstimationResourceCollectionFilter& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    CloudFormationCostEstimationResourceCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    Aws::Vector<TagCostEstimationResourceCollectionFilter> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
