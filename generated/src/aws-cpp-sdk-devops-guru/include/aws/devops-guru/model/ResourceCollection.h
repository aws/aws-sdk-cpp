/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCollection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/TagCollection.h>
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
   * <p> A collection of Amazon Web Services resources supported by DevOps Guru. The
   * two types of Amazon Web Services resource collections supported are Amazon Web
   * Services CloudFormation stacks and Amazon Web Services resources that contain
   * the same Amazon Web Services tag. DevOps Guru can be configured to analyze the
   * Amazon Web Services resources that are defined in the stacks or that are tagged
   * using the same tag <i>key</i>. You can specify up to 500 Amazon Web Services
   * CloudFormation stacks. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ResourceCollection">AWS
   * API Reference</a></p>
   */
  class ResourceCollection
  {
  public:
    AWS_DEVOPSGURU_API ResourceCollection() = default;
    AWS_DEVOPSGURU_API ResourceCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ResourceCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline const CloudFormationCollection& GetCloudFormation() const { return m_cloudFormation; }
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
    template<typename CloudFormationT = CloudFormationCollection>
    void SetCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::forward<CloudFormationT>(value); }
    template<typename CloudFormationT = CloudFormationCollection>
    ResourceCollection& WithCloudFormation(CloudFormationT&& value) { SetCloudFormation(std::forward<CloudFormationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services tags that are used by resources in the resource
     * collection.</p> <p>Tags help you identify and organize your Amazon Web Services
     * resources. Many Amazon Web Services services support tagging, so you can assign
     * the same tag to resources from different services to indicate that the resources
     * are related. For example, you can assign the same tag to an Amazon DynamoDB
     * table resource that you assign to an Lambda function. For more information about
     * using tags, see the <a
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
    inline const Aws::Vector<TagCollection>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagCollection>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagCollection>>
    ResourceCollection& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagCollection>
    ResourceCollection& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    CloudFormationCollection m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    Aws::Vector<TagCollection> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
