/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/FragmentSelector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    ListFragmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFragments"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline ListFragmentsRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline ListFragmentsRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which to retrieve a fragment list.</p>
     */
    inline ListFragmentsRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The total number of fragments to return. If the total number of fragments
     * available is more than the value specified in <code>max-results</code>, then a
     * <a>ListFragmentsOutput$NextToken</a> is provided in the output that you can use
     * to resume pagination.</p>
     */
    inline long long GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of fragments to return. If the total number of fragments
     * available is more than the value specified in <code>max-results</code>, then a
     * <a>ListFragmentsOutput$NextToken</a> is provided in the output that you can use
     * to resume pagination.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of fragments to return. If the total number of fragments
     * available is more than the value specified in <code>max-results</code>, then a
     * <a>ListFragmentsOutput$NextToken</a> is provided in the output that you can use
     * to resume pagination.</p>
     */
    inline void SetMaxResults(long long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of fragments to return. If the total number of fragments
     * available is more than the value specified in <code>max-results</code>, then a
     * <a>ListFragmentsOutput$NextToken</a> is provided in the output that you can use
     * to resume pagination.</p>
     */
    inline ListFragmentsRequest& WithMaxResults(long long value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline ListFragmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline ListFragmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline ListFragmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline const FragmentSelector& GetFragmentSelector() const{ return m_fragmentSelector; }

    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline bool FragmentSelectorHasBeenSet() const { return m_fragmentSelectorHasBeenSet; }

    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline void SetFragmentSelector(const FragmentSelector& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = value; }

    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline void SetFragmentSelector(FragmentSelector&& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = std::move(value); }

    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline ListFragmentsRequest& WithFragmentSelector(const FragmentSelector& value) { SetFragmentSelector(value); return *this;}

    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>
     */
    inline ListFragmentsRequest& WithFragmentSelector(FragmentSelector&& value) { SetFragmentSelector(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    long long m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    FragmentSelector m_fragmentSelector;
    bool m_fragmentSelectorHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
