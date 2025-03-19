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
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult() = default;
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information.</p>
     */
    inline const Aws::Vector<CloudFormationHealth>& GetCloudFormation() const { return m_cloudFormation; }
    template<typename CloudFormationT = Aws::Vector<CloudFormationHealth>>
    void SetCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::forward<CloudFormationT>(value); }
    template<typename CloudFormationT = Aws::Vector<CloudFormationHealth>>
    DescribeOrganizationResourceCollectionHealthResult& WithCloudFormation(CloudFormationT&& value) { SetCloudFormation(std::forward<CloudFormationT>(value)); return *this;}
    template<typename CloudFormationT = CloudFormationHealth>
    DescribeOrganizationResourceCollectionHealthResult& AddCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation.emplace_back(std::forward<CloudFormationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ServiceHealth</code> objects that describes the health of
     * the Amazon Web Services services associated with the resources in the
     * collection.</p>
     */
    inline const Aws::Vector<ServiceHealth>& GetService() const { return m_service; }
    template<typename ServiceT = Aws::Vector<ServiceHealth>>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::Vector<ServiceHealth>>
    DescribeOrganizationResourceCollectionHealthResult& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    template<typename ServiceT = ServiceHealth>
    DescribeOrganizationResourceCollectionHealthResult& AddService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service.emplace_back(std::forward<ServiceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the organization's account.</p>
     */
    inline const Aws::Vector<AccountHealth>& GetAccount() const { return m_account; }
    template<typename AccountT = Aws::Vector<AccountHealth>>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::Vector<AccountHealth>>
    DescribeOrganizationResourceCollectionHealthResult& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    template<typename AccountT = AccountHealth>
    DescribeOrganizationResourceCollectionHealthResult& AddAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account.emplace_back(std::forward<AccountT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOrganizationResourceCollectionHealthResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags help you identify and organize your Amazon Web Services resources. Many
     * Amazon Web Services services support tagging, so you can assign the same tag to
     * resources from different services to indicate that the resources are related.
     * For example, you can assign the same tag to an Amazon DynamoDB table resource
     * that you assign to an Lambda function. For more information about using tags,
     * see the <a
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
    inline const Aws::Vector<TagHealth>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<TagHealth>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagHealth>>
    DescribeOrganizationResourceCollectionHealthResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagHealth>
    DescribeOrganizationResourceCollectionHealthResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationResourceCollectionHealthResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CloudFormationHealth> m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    Aws::Vector<ServiceHealth> m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<AccountHealth> m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TagHealth> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
