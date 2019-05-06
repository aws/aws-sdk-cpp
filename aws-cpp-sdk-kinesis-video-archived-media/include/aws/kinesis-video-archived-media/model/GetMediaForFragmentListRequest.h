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
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    GetMediaForFragmentListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMediaForFragmentList"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which to retrieve fragment media.</p>
     */
    inline GetMediaForFragmentListRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


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
    bool m_streamNameHasBeenSet;

    Aws::Vector<Aws::String> m_fragments;
    bool m_fragmentsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
