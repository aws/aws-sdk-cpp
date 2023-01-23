/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/OrganizationResourceCollectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeOrganizationResourceCollectionHealthRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationResourceCollectionHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationResourceCollectionHealth"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline const OrganizationResourceCollectionType& GetOrganizationResourceCollectionType() const{ return m_organizationResourceCollectionType; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline bool OrganizationResourceCollectionTypeHasBeenSet() const { return m_organizationResourceCollectionTypeHasBeenSet; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline void SetOrganizationResourceCollectionType(const OrganizationResourceCollectionType& value) { m_organizationResourceCollectionTypeHasBeenSet = true; m_organizationResourceCollectionType = value; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline void SetOrganizationResourceCollectionType(OrganizationResourceCollectionType&& value) { m_organizationResourceCollectionTypeHasBeenSet = true; m_organizationResourceCollectionType = std::move(value); }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithOrganizationResourceCollectionType(const OrganizationResourceCollectionType& value) { SetOrganizationResourceCollectionType(value); return *this;}

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithOrganizationResourceCollectionType(OrganizationResourceCollectionType&& value) { SetOrganizationResourceCollectionType(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeOrganizationResourceCollectionHealthRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    OrganizationResourceCollectionType m_organizationResourceCollectionType;
    bool m_organizationResourceCollectionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
