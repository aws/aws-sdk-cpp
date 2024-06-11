/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/ClipFragmentSelector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class GetClipRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClip"; }

    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream for which to retrieve the media clip. </p> <p>You must
     * specify either the StreamName or the StreamARN. </p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline GetClipRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline GetClipRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline GetClipRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the media
     * clip. </p> <p>You must specify either the StreamName or the StreamARN. </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline GetClipRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline GetClipRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline GetClipRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range of the requested clip and the source of the timestamps.</p>
     */
    inline const ClipFragmentSelector& GetClipFragmentSelector() const{ return m_clipFragmentSelector; }
    inline bool ClipFragmentSelectorHasBeenSet() const { return m_clipFragmentSelectorHasBeenSet; }
    inline void SetClipFragmentSelector(const ClipFragmentSelector& value) { m_clipFragmentSelectorHasBeenSet = true; m_clipFragmentSelector = value; }
    inline void SetClipFragmentSelector(ClipFragmentSelector&& value) { m_clipFragmentSelectorHasBeenSet = true; m_clipFragmentSelector = std::move(value); }
    inline GetClipRequest& WithClipFragmentSelector(const ClipFragmentSelector& value) { SetClipFragmentSelector(value); return *this;}
    inline GetClipRequest& WithClipFragmentSelector(ClipFragmentSelector&& value) { SetClipFragmentSelector(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    ClipFragmentSelector m_clipFragmentSelector;
    bool m_clipFragmentSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
