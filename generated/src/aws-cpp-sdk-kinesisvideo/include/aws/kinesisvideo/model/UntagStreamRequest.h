/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UntagStreamRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UntagStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagStream"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to remove tags
     * from.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline UntagStreamRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline UntagStreamRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline UntagStreamRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stream that you want to remove tags from.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline UntagStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline UntagStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline UntagStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the keys of the tags that you want to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const{ return m_tagKeyList; }
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }
    inline void SetTagKeyList(const Aws::Vector<Aws::String>& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = value; }
    inline void SetTagKeyList(Aws::Vector<Aws::String>&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::move(value); }
    inline UntagStreamRequest& WithTagKeyList(const Aws::Vector<Aws::String>& value) { SetTagKeyList(value); return *this;}
    inline UntagStreamRequest& WithTagKeyList(Aws::Vector<Aws::String>&& value) { SetTagKeyList(std::move(value)); return *this;}
    inline UntagStreamRequest& AddTagKeyList(const Aws::String& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }
    inline UntagStreamRequest& AddTagKeyList(Aws::String&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(std::move(value)); return *this; }
    inline UntagStreamRequest& AddTagKeyList(const char* value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
