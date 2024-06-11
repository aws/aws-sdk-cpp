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
  class DescribePullThroughCacheRulesRequest : public ECRRequest
  {
  public:
    AWS_ECR_API DescribePullThroughCacheRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePullThroughCacheRules"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to return the
     * pull through cache rules for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline DescribePullThroughCacheRulesRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribePullThroughCacheRulesRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR repository prefixes associated with the pull through cache
     * rules to return. If no repository prefix value is specified, all pull through
     * cache rules are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEcrRepositoryPrefixes() const{ return m_ecrRepositoryPrefixes; }
    inline bool EcrRepositoryPrefixesHasBeenSet() const { return m_ecrRepositoryPrefixesHasBeenSet; }
    inline void SetEcrRepositoryPrefixes(const Aws::Vector<Aws::String>& value) { m_ecrRepositoryPrefixesHasBeenSet = true; m_ecrRepositoryPrefixes = value; }
    inline void SetEcrRepositoryPrefixes(Aws::Vector<Aws::String>&& value) { m_ecrRepositoryPrefixesHasBeenSet = true; m_ecrRepositoryPrefixes = std::move(value); }
    inline DescribePullThroughCacheRulesRequest& WithEcrRepositoryPrefixes(const Aws::Vector<Aws::String>& value) { SetEcrRepositoryPrefixes(value); return *this;}
    inline DescribePullThroughCacheRulesRequest& WithEcrRepositoryPrefixes(Aws::Vector<Aws::String>&& value) { SetEcrRepositoryPrefixes(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesRequest& AddEcrRepositoryPrefixes(const Aws::String& value) { m_ecrRepositoryPrefixesHasBeenSet = true; m_ecrRepositoryPrefixes.push_back(value); return *this; }
    inline DescribePullThroughCacheRulesRequest& AddEcrRepositoryPrefixes(Aws::String&& value) { m_ecrRepositoryPrefixesHasBeenSet = true; m_ecrRepositoryPrefixes.push_back(std::move(value)); return *this; }
    inline DescribePullThroughCacheRulesRequest& AddEcrRepositoryPrefixes(const char* value) { m_ecrRepositoryPrefixesHasBeenSet = true; m_ecrRepositoryPrefixes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribePullThroughCacheRulesRequest</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribePullThroughCacheRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePullThroughCacheRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of pull through cache rules returned by
     * <code>DescribePullThroughCacheRulesRequest</code> in paginated output. When this
     * parameter is used, <code>DescribePullThroughCacheRulesRequest</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>DescribePullThroughCacheRulesRequest</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 1000. If this
     * parameter is not used, then <code>DescribePullThroughCacheRulesRequest</code>
     * returns up to 100 results and a <code>nextToken</code> value, if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribePullThroughCacheRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ecrRepositoryPrefixes;
    bool m_ecrRepositoryPrefixesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
