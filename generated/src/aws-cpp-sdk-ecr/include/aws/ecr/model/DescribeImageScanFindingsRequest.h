/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class DescribeImageScanFindingsRequest : public ECRRequest
  {
  public:
    AWS_ECR_API DescribeImageScanFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageScanFindings"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to describe the image scan findings for. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline DescribeImageScanFindingsRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribeImageScanFindingsRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribeImageScanFindingsRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository for the image for which to describe the scan findings.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline DescribeImageScanFindingsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline DescribeImageScanFindingsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline DescribeImageScanFindingsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline DescribeImageScanFindingsRequest& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}
    inline DescribeImageScanFindingsRequest& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageScanFindings</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeImageScanFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeImageScanFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeImageScanFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of image scan results returned by
     * <code>DescribeImageScanFindings</code> in paginated output. When this parameter
     * is used, <code>DescribeImageScanFindings</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeImageScanFindings</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImageScanFindings</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeImageScanFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
