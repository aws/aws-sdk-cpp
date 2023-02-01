/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class GetMediaForFragmentListRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMediaForFragmentList"; }

    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which to retrieve fragment media. Specify either
     * this parameter or the <code>StreamARN</code> parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve fragment
     * media. Specify either this parameter or the <code>StreamName</code>
     * parameter.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFragments() const{ return m_fragments; }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline bool FragmentsHasBeenSet() const { return m_fragmentsHasBeenSet; }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline void SetFragments(const Aws::Vector<Aws::String>& value) { m_fragmentsHasBeenSet = true; m_fragments = value; }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline void SetFragments(Aws::Vector<Aws::String>&& value) { m_fragmentsHasBeenSet = true; m_fragments = std::move(value); }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline GetMediaForFragmentListRequest& WithFragments(const Aws::Vector<Aws::String>& value) { SetFragments(value); return *this;}

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline GetMediaForFragmentListRequest& WithFragments(Aws::Vector<Aws::String>&& value) { SetFragments(std::move(value)); return *this;}

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline GetMediaForFragmentListRequest& AddFragments(const Aws::String& value) { m_fragmentsHasBeenSet = true; m_fragments.push_back(value); return *this; }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline GetMediaForFragmentListRequest& AddFragments(Aws::String&& value) { m_fragmentsHasBeenSet = true; m_fragments.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the numbers of fragments for which to retrieve media. You retrieve
     * these values with <a>ListFragments</a>.</p>
     */
    inline GetMediaForFragmentListRequest& AddFragments(const char* value) { m_fragmentsHasBeenSet = true; m_fragments.push_back(value); return *this; }

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_fragments;
    bool m_fragmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
