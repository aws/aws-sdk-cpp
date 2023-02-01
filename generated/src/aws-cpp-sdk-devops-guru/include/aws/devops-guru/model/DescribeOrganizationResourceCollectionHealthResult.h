/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/CloudFormationHealth.h>
#include <aws/devops-guru/model/ServiceHealth.h>
#include <aws/devops-guru/model/AccountHealth.h>
#include <aws/devops-guru/model/TagHealth.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{
  class DescribeOrganizationResourceCollectionHealthResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult();
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline const Aws::Vector<CloudFormationHealth>& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline void SetCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { m_cloudFormation = value; }

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline void SetCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { m_cloudFormation = std::move(value); }

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { SetCloudFormation(value); return *this;}

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { SetCloudFormation(std::move(value)); return *this;}

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddCloudFormation(const CloudFormationHealth& value) { m_cloudFormation.push_back(value); return *this; }

    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddCloudFormation(CloudFormationHealth&& value) { m_cloudFormation.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline const Aws::Vector<ServiceHealth>& GetService() const{ return m_service; }

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline void SetService(const Aws::Vector<ServiceHealth>& value) { m_service = value; }

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline void SetService(Aws::Vector<ServiceHealth>&& value) { m_service = std::move(value); }

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithService(const Aws::Vector<ServiceHealth>& value) { SetService(value); return *this;}

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithService(Aws::Vector<ServiceHealth>&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddService(const ServiceHealth& value) { m_service.push_back(value); return *this; }

    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddService(ServiceHealth&& value) { m_service.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the organization's account.</p>
     */
    inline const Aws::Vector<AccountHealth>& GetAccount() const{ return m_account; }

    /**
     * <p>The name of the organization's account.</p>
     */
    inline void SetAccount(const Aws::Vector<AccountHealth>& value) { m_account = value; }

    /**
     * <p>The name of the organization's account.</p>
     */
    inline void SetAccount(Aws::Vector<AccountHealth>&& value) { m_account = std::move(value); }

    /**
     * <p>The name of the organization's account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithAccount(const Aws::Vector<AccountHealth>& value) { SetAccount(value); return *this;}

    /**
     * <p>The name of the organization's account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithAccount(Aws::Vector<AccountHealth>&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the organization's account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddAccount(const AccountHealth& value) { m_account.push_back(value); return *this; }

    /**
     * <p>The name of the organization's account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& AddAccount(AccountHealth&& value) { m_account.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline const Aws::Vector<TagHealth>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline void SetTags(const Aws::Vector<TagHealth>& value) { m_tags = value; }

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline void SetTags(Aws::Vector<TagHealth>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline DescribeOrganizationResourceCollectionHealthResult& WithTags(const Aws::Vector<TagHealth>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline DescribeOrganizationResourceCollectionHealthResult& WithTags(Aws::Vector<TagHealth>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline DescribeOrganizationResourceCollectionHealthResult& AddTags(const TagHealth& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline DescribeOrganizationResourceCollectionHealthResult& AddTags(TagHealth&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudFormationHealth> m_cloudFormation;

    Aws::Vector<ServiceHealth> m_service;

    Aws::Vector<AccountHealth> m_account;

    Aws::String m_nextToken;

    Aws::Vector<TagHealth> m_tags;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
