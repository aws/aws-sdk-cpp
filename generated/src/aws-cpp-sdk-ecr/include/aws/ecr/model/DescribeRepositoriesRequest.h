/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class DescribeRepositoriesRequest : public ECRRequest
  {
  public:
    AWS_ECR_API DescribeRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRepositories"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repositories to be described. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline DescribeRepositoriesRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribeRepositoriesRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribeRepositoriesRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of repositories to describe. If this parameter is omitted, then all
     * repositories in a registry are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = value; }
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::move(value); }
    inline DescribeRepositoriesRequest& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}
    inline DescribeRepositoriesRequest& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}
    inline DescribeRepositoriesRequest& AddRepositoryNames(const Aws::String& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }
    inline DescribeRepositoriesRequest& AddRepositoryNames(Aws::String&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(std::move(value)); return *this; }
    inline DescribeRepositoriesRequest& AddRepositoryNames(const char* value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeRepositories</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify repositories with
     * <code>repositoryNames</code>.</p>  <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeRepositoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRepositoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRepositoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeRepositories</code> in paginated output. When this parameter is
     * used, <code>DescribeRepositories</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>DescribeRepositories</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 1000. If this
     * parameter is not used, then <code>DescribeRepositories</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable. This option cannot be
     * used when you specify repositories with <code>repositoryNames</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
