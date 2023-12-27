/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageScanFindingsFilter.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListImageScanFindingsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListImageScanFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImageScanFindings"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline const Aws::Vector<ImageScanFindingsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline void SetFilters(const Aws::Vector<ImageScanFindingsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline void SetFilters(Aws::Vector<ImageScanFindingsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline ListImageScanFindingsRequest& WithFilters(const Aws::Vector<ImageScanFindingsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline ListImageScanFindingsRequest& WithFilters(Aws::Vector<ImageScanFindingsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline ListImageScanFindingsRequest& AddFilters(const ImageScanFindingsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of name value pairs that you can use to filter your results. You can
     * use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
     * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
     * </p> </li> <li> <p> <code>severity</code> </p> </li> </ul> <p>If you don't
     * request a filter, then all findings in your account are listed.</p>
     */
    inline ListImageScanFindingsRequest& AddFilters(ImageScanFindingsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline ListImageScanFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageScanFindingsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
