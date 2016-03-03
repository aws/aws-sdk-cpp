/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API ListImagesRequest : public ECRRequest
  {
  public:
    ListImagesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline ListImagesRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline ListImagesRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * to list images in. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline ListImagesRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline ListImagesRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline ListImagesRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository whose image IDs are to be listed.</p>
     */
    inline ListImagesRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline ListImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline ListImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListImages</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline ListImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of image results returned by <code>ListImages</code> in
     * paginated output. When this parameter is used, <code>ListImages</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListImages</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListImages</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable.</p>
     */
    inline long GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of image results returned by <code>ListImages</code> in
     * paginated output. When this parameter is used, <code>ListImages</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListImages</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListImages</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable.</p>
     */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of image results returned by <code>ListImages</code> in
     * paginated output. When this parameter is used, <code>ListImages</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListImages</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListImages</code> returns up to 100
     * results and a <code>nextToken</code> value, if applicable.</p>
     */
    inline ListImagesRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
