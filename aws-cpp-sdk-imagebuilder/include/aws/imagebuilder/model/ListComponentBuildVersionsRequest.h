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
  class ListComponentBuildVersionsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComponentBuildVersions"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline const Aws::String& GetComponentVersionArn() const{ return m_componentVersionArn; }

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline bool ComponentVersionArnHasBeenSet() const { return m_componentVersionArnHasBeenSet; }

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline void SetComponentVersionArn(const Aws::String& value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn = value; }

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline void SetComponentVersionArn(Aws::String&& value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn = std::move(value); }

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline void SetComponentVersionArn(const char* value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn.assign(value); }

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline ListComponentBuildVersionsRequest& WithComponentVersionArn(const Aws::String& value) { SetComponentVersionArn(value); return *this;}

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline ListComponentBuildVersionsRequest& WithComponentVersionArn(Aws::String&& value) { SetComponentVersionArn(std::move(value)); return *this;}

    /**
     * <p>The component version Amazon Resource Name (ARN) whose versions you want to
     * list.</p>
     */
    inline ListComponentBuildVersionsRequest& WithComponentVersionArn(const char* value) { SetComponentVersionArn(value); return *this;}


    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline ListComponentBuildVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListComponentBuildVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListComponentBuildVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListComponentBuildVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_componentVersionArn;
    bool m_componentVersionArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
