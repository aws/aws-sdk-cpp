/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListImagePackagesRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListImagePackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImagePackages"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = value; }

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::move(value); }

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn.assign(value); }

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline ListImagePackagesRequest& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline ListImagePackagesRequest& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>Filter results for the ListImagePackages request by the Image Build Version
     * ARN</p>
     */
    inline ListImagePackagesRequest& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}


    /**
     * <p>The maxiumum number of results to return from the ListImagePackages
     * request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maxiumum number of results to return from the ListImagePackages
     * request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maxiumum number of results to return from the ListImagePackages
     * request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maxiumum number of results to return from the ListImagePackages
     * request.</p>
     */
    inline ListImagePackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
