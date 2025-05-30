﻿/**
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
    AWS_CODEARTIFACT_API ListRepositoriesInDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoriesInDomain"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the returned list of repositories. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ListRepositoriesInDomainRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    ListRepositoriesInDomainRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filter the list of repositories to only include those that are managed by
     * the Amazon Web Services account ID. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const { return m_administratorAccount; }
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }
    template<typename AdministratorAccountT = Aws::String>
    void SetAdministratorAccount(AdministratorAccountT&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::forward<AdministratorAccountT>(value); }
    template<typename AdministratorAccountT = Aws::String>
    ListRepositoriesInDomainRequest& WithAdministratorAccount(AdministratorAccountT&& value) { SetAdministratorAccount(std::forward<AdministratorAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned. </p>
     */
    inline const Aws::String& GetRepositoryPrefix() const { return m_repositoryPrefix; }
    inline bool RepositoryPrefixHasBeenSet() const { return m_repositoryPrefixHasBeenSet; }
    template<typename RepositoryPrefixT = Aws::String>
    void SetRepositoryPrefix(RepositoryPrefixT&& value) { m_repositoryPrefixHasBeenSet = true; m_repositoryPrefix = std::forward<RepositoryPrefixT>(value); }
    template<typename RepositoryPrefixT = Aws::String>
    ListRepositoriesInDomainRequest& WithRepositoryPrefix(RepositoryPrefixT&& value) { SetRepositoryPrefix(std::forward<RepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRepositoriesInDomainRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoriesInDomainRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_administratorAccount;
    bool m_administratorAccountHasBeenSet = false;

    Aws::String m_repositoryPrefix;
    bool m_repositoryPrefixHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
