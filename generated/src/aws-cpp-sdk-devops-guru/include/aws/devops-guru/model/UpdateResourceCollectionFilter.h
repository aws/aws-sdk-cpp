/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/UpdateCloudFormationCollectionFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/UpdateTagCollectionFilter.h>
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
   * <p> Contains information used to update a collection of Amazon Web Services
   * resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollectionFilter">AWS
   * API Reference</a></p>
   */
  class UpdateResourceCollectionFilter
  {
  public:
    AWS_DEVOPSGURU_API UpdateResourceCollectionFilter();
    AWS_DEVOPSGURU_API UpdateResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API UpdateResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline const UpdateCloudFormationCollectionFilter& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(const UpdateCloudFormationCollectionFilter& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(UpdateCloudFormationCollectionFilter&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline UpdateResourceCollectionFilter& WithCloudFormation(const UpdateCloudFormationCollectionFilter& value) { SetCloudFormation(value); return *this;}

    /**
     * <p> A collection of Amazon Web Services CloudFormation stacks. You can specify
     * up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline UpdateResourceCollectionFilter& WithCloudFormation(UpdateCloudFormationCollectionFilter&& value) { SetCloudFormation(std::move(value)); return *this;}


    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline const Aws::Vector<UpdateTagCollectionFilter>& GetTags() const{ return m_tags; }

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline void SetTags(const Aws::Vector<UpdateTagCollectionFilter>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline void SetTags(Aws::Vector<UpdateTagCollectionFilter>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline UpdateResourceCollectionFilter& WithTags(const Aws::Vector<UpdateTagCollectionFilter>& value) { SetTags(value); return *this;}

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline UpdateResourceCollectionFilter& WithTags(Aws::Vector<UpdateTagCollectionFilter>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline UpdateResourceCollectionFilter& AddTags(const UpdateTagCollectionFilter& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The updated Amazon Web Services tags used to filter the resources in the
     * resource collection.</p> <p>Tags help you identify and organize your Amazon Web
     * Services resources. Many Amazon Web Services services support tagging, so you
     * can assign the same tag to resources from different services to indicate that
     * the resources are related. For example, you can assign the same tag to an Amazon
     * DynamoDB table resource that you assign to an Lambda function. For more
     * information about using tags, see the <a
     * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
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
    inline UpdateResourceCollectionFilter& AddTags(UpdateTagCollectionFilter&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    UpdateCloudFormationCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    Aws::Vector<UpdateTagCollectionFilter> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
