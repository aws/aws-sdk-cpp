/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/SegmentReferenceResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class ListSegmentReferencesRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSegmentReferences"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVIDENTLY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to include in the response. If you omit this,
     * the default of 50 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If you omit this,
     * the default of 50 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If you omit this,
     * the default of 50 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If you omit this,
     * the default of 50 is used.</p>
     */
    inline ListSegmentReferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline ListSegmentReferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline ListSegmentReferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListSegmentReferences</code> operation.</p>
     */
    inline ListSegmentReferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline ListSegmentReferencesRequest& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline ListSegmentReferencesRequest& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>The ARN of the segment that you want to view information for.</p>
     */
    inline ListSegmentReferencesRequest& WithSegment(const char* value) { SetSegment(value); return *this;}


    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline const SegmentReferenceResourceType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline void SetType(const SegmentReferenceResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline void SetType(SegmentReferenceResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline ListSegmentReferencesRequest& WithType(const SegmentReferenceResourceType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether to return information about launches or experiments that
     * use this segment.</p>
     */
    inline ListSegmentReferencesRequest& WithType(SegmentReferenceResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    SegmentReferenceResourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
