/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class DescribeRepositoryCreationTemplatesRequest : public ECRRequest
  {
  public:
    AWS_ECR_API DescribeRepositoryCreationTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRepositoryCreationTemplates"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository namespace prefixes associated with the repository creation
     * templates to describe. If this value is not specified, all repository creation
     * templates are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixes() const{ return m_prefixes; }
    inline bool PrefixesHasBeenSet() const { return m_prefixesHasBeenSet; }
    inline void SetPrefixes(const Aws::Vector<Aws::String>& value) { m_prefixesHasBeenSet = true; m_prefixes = value; }
    inline void SetPrefixes(Aws::Vector<Aws::String>&& value) { m_prefixesHasBeenSet = true; m_prefixes = std::move(value); }
    inline DescribeRepositoryCreationTemplatesRequest& WithPrefixes(const Aws::Vector<Aws::String>& value) { SetPrefixes(value); return *this;}
    inline DescribeRepositoryCreationTemplatesRequest& WithPrefixes(Aws::Vector<Aws::String>&& value) { SetPrefixes(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesRequest& AddPrefixes(const Aws::String& value) { m_prefixesHasBeenSet = true; m_prefixes.push_back(value); return *this; }
    inline DescribeRepositoryCreationTemplatesRequest& AddPrefixes(Aws::String&& value) { m_prefixesHasBeenSet = true; m_prefixes.push_back(std::move(value)); return *this; }
    inline DescribeRepositoryCreationTemplatesRequest& AddPrefixes(const char* value) { m_prefixesHasBeenSet = true; m_prefixes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeRepositoryCreationTemplates</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is <code>null</code> when
     * there are no more results to return.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeRepositoryCreationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRepositoryCreationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeRepositoryCreationTemplatesRequest</code> in paginated output.
     * When this parameter is used,
     * <code>DescribeRepositoryCreationTemplatesRequest</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>DescribeRepositoryCreationTemplatesRequest</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 1000. If
     * this parameter is not used, then
     * <code>DescribeRepositoryCreationTemplatesRequest</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRepositoryCreationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_prefixes;
    bool m_prefixesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
