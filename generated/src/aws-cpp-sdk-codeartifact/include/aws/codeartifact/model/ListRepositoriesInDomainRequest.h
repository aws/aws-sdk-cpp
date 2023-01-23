/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class ListRepositoriesInDomainRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API ListRepositoriesInDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoriesInDomain"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline ListRepositoriesInDomainRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const{ return m_administratorAccount; }

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline void SetAdministratorAccount(const Aws::String& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = value; }

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline void SetAdministratorAccount(Aws::String&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::move(value); }

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline void SetAdministratorAccount(const char* value) { m_administratorAccountHasBeenSet = true; m_administratorAccount.assign(value); }

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline ListRepositoriesInDomainRequest& WithAdministratorAccount(const Aws::String& value) { SetAdministratorAccount(value); return *this;}

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline ListRepositoriesInDomainRequest& WithAdministratorAccount(Aws::String&& value) { SetAdministratorAccount(std::move(value)); return *this;}

    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline ListRepositoriesInDomainRequest& WithAdministratorAccount(const char* value) { SetAdministratorAccount(value); return *this;}


    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline const Aws::String& GetRepositoryPrefix() const{ return m_repositoryPrefix; }

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline bool RepositoryPrefixHasBeenSet() const { return m_repositoryPrefixHasBeenSet; }

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline void SetRepositoryPrefix(const Aws::String& value) { m_repositoryPrefixHasBeenSet = true; m_repositoryPrefix = value; }

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline void SetRepositoryPrefix(Aws::String&& value) { m_repositoryPrefixHasBeenSet = true; m_repositoryPrefix = std::move(value); }

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline void SetRepositoryPrefix(const char* value) { m_repositoryPrefixHasBeenSet = true; m_repositoryPrefix.assign(value); }

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline ListRepositoriesInDomainRequest& WithRepositoryPrefix(const Aws::String& value) { SetRepositoryPrefix(value); return *this;}

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline ListRepositoriesInDomainRequest& WithRepositoryPrefix(Aws::String&& value) { SetRepositoryPrefix(std::move(value)); return *this;}

    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline ListRepositoriesInDomainRequest& WithRepositoryPrefix(const char* value) { SetRepositoryPrefix(value); return *this;}


    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline ListRepositoriesInDomainRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListRepositoriesInDomainRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListRepositoriesInDomainRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListRepositoriesInDomainRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_administratorAccount;
    bool m_administratorAccountHasBeenSet = false;

    Aws::String m_repositoryPrefix;
    bool m_repositoryPrefixHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
