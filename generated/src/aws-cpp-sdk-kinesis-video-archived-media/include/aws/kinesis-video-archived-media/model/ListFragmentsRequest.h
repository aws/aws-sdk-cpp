/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListFragmentsRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFragments"; }

    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream from which to retrieve a fragment list. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    ListFragmentsRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve a
     * fragment list. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    ListFragmentsRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of fragments to return. If the total number of fragments
     * available is more than the value specified in <code>max-results</code>, then a
     * <a>ListFragmentsOutput$NextToken</a> is provided in the output that you can use
     * to resume pagination.</p>
     */
    inline long long GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(long long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFragmentsRequest& WithMaxResults(long long value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the
     * <a>ListFragmentsOutput$NextToken</a> from a previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFragmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the timestamp range and timestamp origin for the range of fragments
     * to return.</p>  <p>This is only required when the <code>NextToken</code>
     * isn't passed in the API.</p> 
     */
    inline const FragmentSelector& GetFragmentSelector() const { return m_fragmentSelector; }
    inline bool FragmentSelectorHasBeenSet() const { return m_fragmentSelectorHasBeenSet; }
    template<typename FragmentSelectorT = FragmentSelector>
    void SetFragmentSelector(FragmentSelectorT&& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = std::forward<FragmentSelectorT>(value); }
    template<typename FragmentSelectorT = FragmentSelector>
    ListFragmentsRequest& WithFragmentSelector(FragmentSelectorT&& value) { SetFragmentSelector(std::forward<FragmentSelectorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    long long m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    FragmentSelector m_fragmentSelector;
    bool m_fragmentSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
