﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class DescribeRepositoriesRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API DescribeRepositoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRepositories"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the registry that
     * contains the repositories to be described. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    DescribeRepositoriesRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of repositories to describe. If this parameter is omitted, then all
     * repositories in a registry are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const { return m_repositoryNames; }
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    void SetRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::forward<RepositoryNamesT>(value); }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    DescribeRepositoriesRequest& WithRepositoryNames(RepositoryNamesT&& value) { SetRepositoryNames(std::forward<RepositoryNamesT>(value)); return *this;}
    template<typename RepositoryNamesT = Aws::String>
    DescribeRepositoriesRequest& AddRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.emplace_back(std::forward<RepositoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>DescribeRepositories</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * If there are no more results to return, this value is <code>null</code>. If you
     * specify repositories with <code>repositoryNames</code>, you can't use this
     * option.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRepositoriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of repository results that's returned by
     * <code>DescribeRepositories</code> in paginated output. When this parameter is
     * used, <code>DescribeRepositories</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * You can see the remaining results of the initial request by sending another
     * <code>DescribeRepositories</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 1000. If this
     * parameter isn't used, then <code>DescribeRepositories</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable. If you specify
     * repositories with <code>repositoryNames</code>, you can't use this option.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRepositoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
